CC = gcc
FLAGS = -std=c11 -Wall -Wextra -Werror -g
TEST_FLAGS = -std=c11 -g
GCOVFLAGS = -L. -ls21_math --coverage 
OS = $(shell uname)

ifeq ($(OS), Linux)
	DEF_FLAG = -D LINUX
	CHECK_FLAGS = $(pkg-config --cflags check) $(pkg-config --libs check) -pthread -lrt -lm -lsubunit 
else
	DEF_FLAG = -D MACOS
	CHECK_FLAGS = $(shell pkg-config --cflags check) $(shell pkg-config --libs check) -Qunused-arguments
endif

FORMAT = $(shell find . -type f \( -name "*.h" -o -name "*.c" \) -exec clang-format -i {} \;)

TEST_FILES = ./tests/*/*.c
TEST_MAIN = tests/s21_test.c 

TEST_COMPILE = $(CC) $(TEST_FLAGS) s21_test.o $(TEST_FILES) libs21_math.a $(CHECK_FLAGS) -L. -ls21_math

all: $(FORMAT) s21_math.a

rebuild: $(FORMAT) clean all

test: s21_math.a s21_test.o
	# $(FORMAT)
	$(TEST_COMPILE)
	./a.out

gcov_report: s21_math.a test
	$(FORMAT)
	rm -f *.g*
	$(CC) $(TEST_FLAGS) $(DEF_FLAG) functions/s21*.c ./s21_test.o tests/*/*.c libs21_math.a $(CHECK_FLAGS) $(GCOVFLAGS)
	./a.out
	lcov -t a.out -o rep.info -c -d .
	genhtml -o report rep.info
	open ./report/index.html

s21_math.a: s21_math.o
	$(FORMAT)
	ar rcs libs21_math.a *.o
	rm -rf *.o
	ranlib libs21_math.a
	cp libs21_math.a s21_math.a
	cp libs21_math.a ls21_math.a

s21_math.o:
	$(FORMAT)
	$(CC) $(FLAGS) -c functions/s21*.c

s21_test.o:
	$(FORMAT)
	$(CC) $(FLAGS) $(CHECK_FLAGS) -c $(TEST_FILES) $(TEST_MAIN)

check: all
	$(FORMAT)
	cppcheck --enable=all --suppress=missingIncludeSystem *.h functions/*.c $(TEST_FILES) $(TEST_MAIN)
	clang-format -n *.h functions/*.c $(TEST_FILES)
ifeq ($(OS), Linux)
	$(CC) $(TEST_FLAGS) $(TEST_FILES) libs21_math.a $(CHECK_FLAGS) -D STRANGE -L. -ls21_math
	touch valgrind_res.txt
	valgrind --leak-check=full --log-file="valgrind_res.txt" --track-origins=yes --show-reachable=yes ./a.out
	grep "ERROR" valgrind_res.txt
endif

clean:
	rm -rf *.o *.g* *.info *.out report *.a 

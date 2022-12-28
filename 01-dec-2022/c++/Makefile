# Makefile to compile advent of coding puzzles

DIR_INCLUDE= -I.
CXX = g++
CXXARGS  = -ansi -pedantic -Wall -g
CXXFLAGS = $(DIR_INCLUDE) $(CXXARGS)
TEST_DIFF = diff -b
RM = -rm -f


all: build puzzles

build: main.exe

main.exe: main.cpp
	$(CXX) $(CXXFLAGS) -o main.exe main.cpp

### Puzzles
puzzles: part1 part2

part1:
	./main.exe -i input -p 1

part2:
	./main.exe -i input -p 2

### Testing
test: main.exe test1 test2

# Test part 1
test1:
	@set -e; echo **TEST 1** - Part 1;		\
	touch test1.in;					\
	./tp1.exe -i test1.in -o test1.out -p 1;		\
	if ($(TEST_DIFF) test1.out test1.in); 		\
	then	echo **TEST 1 OK**;			\
	else	echo **TEST 1 FAILED**;			\
	fi
	@rm test1.*;

# Test part 2
test2:
	@set -e; echo **TEST 2** - Part 2;\
	echo 1 1 > test2.in;\
	echo \(1,0\) \(1,0\) \(0,0\) \(0,0\) > test2.t;\
	./tp1.exe -i test2.in -o test2.out -p 2;\
	if ($(TEST_DIFF) test2.out test2.t);\
	then	echo **TEST 2 OK**;\
	else	echo **TEST 2 FAILED**;				\
	fi
	@rm test2.*;

################## END TESTING #######################



# Cleaning targets

.PHONY: clean
clean:
	$(RM) -v *.o *.exe *.t *.out *.err .*.swp

.PHONY: partial_cleaning
partial_cleaning:
	$(RM) *.o .*.swp

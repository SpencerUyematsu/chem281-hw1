INC_DIR = ../Include
LIB_DIR = ../Lib
FUNCTIONS = problem1_functions.o
BIN_DIR = ../Bin

EXECUTABLES = problem1 problem2 problem3 problem4 problem5

problem1: 
	g++ -O3 -o problem1 problem1.cpp \
	-I$(INC_DIR) $(LIB_DIR)/$(FUNCTIONS)
	mv problem1 $(BIN_DIR)

problem2:
	g++ -O3 -o problem2 problem2.cpp
	mv problem2 $(BIN_DIR)

problem3:
	g++ -O3 -o problem3 problem3.cpp
	mv problem3 $(BIN_DIR)

problem4:
	g++ -O3 -o problem4 problem4.cpp
	mv problem4 $(BIN_DIR)

problem5: 
	g++ -O3 -o problem5 problem5.cpp \
	-I$(INC_DIR) $(LIB_DIR)/$(FUNCTIONS)
	mv problem5 $(BIN_DIR)

all:
	make $(EXECUTABLES)

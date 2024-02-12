all:
	cd Source; make problem1_functions.o
	cd Problems; make all

test_problem1: 
	cd Bin; ./problem1

test_problem2:
	cd Bin; ./problem2

test_problem3:
	cd Bin; ./problem3

test_problem4:
	cd Bin; ./problem4

test_problem5:
	cd Bin; ./problem5
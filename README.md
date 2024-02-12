This repository contains the code for problem set 1 for chem 281.

## Subdirectories:
- `Problems`: Executables for each problem within the problem set.
- `Source`: Contains the a function that converts between number systems. This function is used to fulfill Problem 1. It is also used as part of the process in Problem 5.

- `Include`: API for the conversion file in Source.
- `Lib`: Contains the linker file for problem1_functions.cpp.
- `Bin`: The repositories executables (from problems directory).
- `Results`: The results and plot from problem 4. 

## Running my code

Please run `make all` before any of the below functions.

1. To run a test for the conversion function from Problem 1:
```
make test_problem1
```

2. To run the procedure outlined in problem 2:
```
make test_problem2
```

3. To perform the calculations outlined in problem 3:
```
make test_problem3
```

4. To run the procedure outlined in problem 4:
```
make test_problem4
```
*The output for problem 4 goes into `Results/p4_results.csv`.

5. To run the program oulined in problem 5:
```
make test_problem5
```
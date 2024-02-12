#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>

// Sums the values from 1, ..., 1/N
float summation_LR(int N){
    float S = 0;
    float add_sub = 1;

    for(int i = 1; i <= N; i++){
        S += add_sub * (1. / i);
        add_sub *= -1;
    }
    return S;
}

// Sums the values from 1/N, ...,1
float summation_RL(int N){
    float S = 0;
    float add_sub = -1;

    for(int i = N; i >= 1; i--){
        S += add_sub * (1. / i);
        add_sub *= -1;
    }
    return S;
}

int main(void){
    // run test and record results
    std::string file = "../Results/p4_results.csv";
    std::ofstream output;
    int N = 10e3;
    double LR, RL;

    float solution = std::log(2.);


    output.open(file);
    output << "N, LR, LR_error, RL, RL_error" << std::endl;

    output << std::setprecision(8);

    for (int i = 0; i < 6; i++){
        LR = summation_LR(N);
        RL = summation_RL(N);

        output << N << ",";

        output << LR << "," << std::abs(LR - solution) << ",";
        output << RL << "," << std::abs(RL - solution) << std::endl;
        N *= 10;
    }
    return 0;
}
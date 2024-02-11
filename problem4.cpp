#include <fstream>
#include <iostream>
#include <iomanip>

float summation_LR(int N){
    float S = 0;
    float add_sub = 1;

    for(int i = 1; i <= N; i++){
        S += add_sub * (1. / i);
        add_sub *= -1;
    }
    return S;
}

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
    int N = 10e3;

    std::cout << std::setprecision(8);
    for (int i = 0; i < 6; i++){
        std::cout << N << std::endl;
        std::cout << summation_LR(N) << "\t" << summation_RL(N) << std::endl;
        N *= 10;
    }
    return 0;
}
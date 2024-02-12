#include <cmath>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>

// Takes the square root of x, n times and then squares n times.
float root_square(float x, int n){
    for(int i = 0; i < n; i++) {
        x = std::sqrt(x);
    }

    for(int j = 0; j < n; j++){
        x = x * x;
    }

    return x;
}

int main(){
    // n values to test
    std::vector<float> n_values = {2, 5, 10, 20, 30, 40};
    float x = 100;

    std::cout << std::setprecision(10);

    // run and output test results
    for(auto it : n_values){
        std::cout << "n value: " << it << "\tFinal product: " << root_square(x, it) << std::endl;
    }

    return 0;
}
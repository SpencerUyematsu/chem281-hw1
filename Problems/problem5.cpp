#include <bitset>
#include <iostream>
#include <string>
#include <bitset>
#include <cmath>
#include <vector>

#include "myproblem1.h"

int extract_exponent(double a){
    // get binary representation of b
    uint64_t b = reinterpret_cast<uint64_t&>(a);
    std::bitset<64> c = std::bitset<64>(b);
    c <<= 1;    // remove sign bit
    c >>= 53;   // remove mantissa
    std::string string_exp_bin = c.to_string(); // convert to string for input of number_conversion
    std::string string_exp_dec = number_conversion(string_exp_bin, "binary", "decimal");
    int exponent = std::stoi(string_exp_dec) - 1023; // eliminate bias of exponent
    return std::log10(2) * exponent; // convert to base 10
}

int main(){
    std::vector<double> values = {1234.5678, 7.49e-8, 7547, 53500.5, 6.7854, 3408944};

    std::vector<double> log_estimates;
    std::vector<int> bit_estimates;
    std::cout << "Result of bit to integer conversions." << std::endl;

    // Get results and print conversion work
    for (auto it: values){
        log_estimates.push_back(std::log10(it));
        bit_estimates.push_back(extract_exponent(it));
    }

    // print final results
    std::cout << std::endl << "Estimation Results: " << std::endl;
    for(int i = 0; i < 6; i++){
        std::cout << "Test Value: " << values[i] << "\t";
        std::cout << "log10 estimate: " << log_estimates[i] << "\t";
        std::cout << "Bit manipulation estimate: " << bit_estimates[i] << std::endl;
    }
    return 0;
}
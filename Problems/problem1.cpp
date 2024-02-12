// The code for the function number_conversion can be found in Source/problem1.function
// number_conversion works as follows: 1. Convert input type to a decimal value. 
//                                     2. Convert decimal value to desired output type.
// This means we can first test the output functions by converting a decimal value to each
// new output type. 

#include <string>
#include <iostream>

#include "myproblem1.h"

int main(){
    std::string a = "47";
    std::string output;

    // Test each decimal -> new datatype function
    number_conversion(a, "decimal", "decimal");
    number_conversion(a, "decimal", "binary");
    number_conversion(a, "decimal", "octal");
    number_conversion(a, "decimal", "hexadecimal");

    // Test each new datatype -> decimal function
    std::string b = "101111";
    std::cout << std::endl;
    number_conversion(b, "binary", "decimal");

    std::string c = "137";
    std::cout << std::endl;
    number_conversion(c, "octal", "decimal");

    std::string d = "3F";
    std::cout << std::endl;
    number_conversion(d, "hexadecimal", "binary");

    // test integer input of function
    int e = 47;
    std::cout << std::endl;
    number_conversion(e, "decimal", "binary");
    std::cout << std::endl;
    number_conversion(e, "octal", "binary");

    return 0;
}
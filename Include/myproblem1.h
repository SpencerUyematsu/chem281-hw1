#include <string>

#pragma once

std::string decimal_to_binary(int d);
int binary_to_decimal(std::string b);

std::string decimal_to_octal(int d);
int octal_to_decimal(std::string oct);

std::string decimal_to_hex(int d);
int hex_to_decimal(std::string h);

std::string number_conversion(std::string original_number, 
                              std::string original_base, 
                              std::string target_base);
std::string number_conversion(int original_number, 
                              std::string original_base, 
                              std::string new_base);

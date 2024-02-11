#include <string>
#include <bitset>
#include <string>
#include <iostream>
#include <stdexcept>

std::string decimal_to_binary(int d){
    std::string b = "";
    int remainder;

    while(d >= 1){
        remainder = d % 2;
        b = std::to_string(remainder) + b;
        d /= 2;
    }

    return b;
}

int binary_to_decimal(std::string b){
    int d = 0;
    int tracker = 1;

    for(int i = b.length() - 1; i >=0; i--){
        d += tracker * (b[i] - '0');
        tracker *= 2;
    }
    return d;
}

std::string decimal_to_octal(int d){
    std::string b = "";
    int remainder;

    while(d >= 1){
        remainder = d % 8;
        b = std::to_string(remainder) + b;
        d /= 8;
    }

    return b;
}

int octal_to_decimal(std::string oct){
    int d = 0;
    int tracker = 1;

    for(int i = oct.length() - 1; i >=0; i--){
        d += tracker * (oct[i] - '0');
        tracker *= 8;
    }
    return d;
}


std::string decimal_to_hex(int d){
    std::string b = "";
    int remainder;
    char a = 'A';

    while(d >= 1){
        remainder = d % 16;
        if(remainder < 10){
            b = std::to_string(remainder) + b;
        } 
        else {
            a += (remainder - 10);
            b = a + b;
        }
        d /= 16;
    }

    return b;
}

int hex_to_decimal(std::string h){
    int d = 0;
    int tracker = 1;
    int temp;

    for(int i = h.length() - 1; i >=0; i--){
        if(h[i] <= '9'){
            temp = h[i] - '0';
        } else {
            temp = h[i] - 'A' + 10;
        }
        d += tracker * temp;
        tracker *= 16;
    }
    return d;
}


void number_conversion(std::string original_number, std::string original_base, std::string target_base){
    int decimal_form;
    std::string output_form;

    std::cout << "Input Number: " << original_number << "\tInput base: " << original_base << std::endl;

    if(original_base == "binary"){
        decimal_form = binary_to_decimal(original_number);
    } else if (original_base == "octal"){
        decimal_form = octal_to_decimal(original_number);
    } else if (original_base == "hexadecimal"){
        decimal_form = hex_to_decimal(original_number);
    } else if (original_base == "decimal"){
        decimal_form = std::stoi(original_number);
    } else {
        throw std::invalid_argument("The input type must be binary, octal, hexadecimal, or decimal.");
    }

    if(target_base == "binary"){
        output_form = decimal_to_binary(decimal_form);
    } else if(target_base == "octal"){
        output_form = decimal_to_octal(decimal_form);
    } else if(target_base == "hexadecimal"){
        output_form = decimal_to_hex(decimal_form);
    } else if(target_base == "decimal"){
        output_form = std::to_string(decimal_form);
    } else {
        throw std::invalid_argument("The target base must be binary, octal, hexadecimal, or decimal.");
    }
    std::cout << "Output Number: " << output_form << "\tOutput base: " << target_base << std::endl;
}

int main(){
    std::string a = "47";
    std::string output;

    number_conversion(a, "decimal", "decimal");
    number_conversion(a, "decimal", "binary");
    number_conversion(a, "decimal", "octal");
    number_conversion(a, "decimal", "hexadecimal");

    std::string b = "101111";
    std::cout << std::endl;
    number_conversion(b, "binary", "decimal");

    std::string c = "137";
    std::cout << std::endl;
    number_conversion(c, "octal", "decimal");

    std::string d = "3F";
    std::cout << std::endl;
    number_conversion(d, "hexadecimal", "binary");

    return 0;
}
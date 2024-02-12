#include <cmath>
#include <vector>
#include <iomanip>
#include <iostream>

double original_approach(double x){
    return (std::exp(x) - 1) / x;
}

double alternative_approach(double x){
    double y = exp(x);
    if (y == 1){
        return 1;
    } else {
        return (y - 1) / std::log(y);
    }
}

int main(){
    double x = 1e-5;

    std::cout << std::setprecision(15);

    for(int i = 0; i <= 10; i++){
        std::cout << "X value: " << x << "\tOriginal approach: " << original_approach(x) << "\tAlternative approach: " << alternative_approach(x) << std::endl;
        x /= 10;
    }

    return 0;
}
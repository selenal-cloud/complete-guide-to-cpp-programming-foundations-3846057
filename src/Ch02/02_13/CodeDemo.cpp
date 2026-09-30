// Complete Guide to C++ Programming Foundations
// Challenge 02_13
// Data Types, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int add_int(float a, double b, long double c){
    int result = 0;

    // Write your code here
    result = static_cast<int>(a) + static_cast<int>(b) + static_cast<int>(c);

    int baseDamage = 50;
    int strength = 20;
    int criticalHitMultiplier = 2;
    int damageDealt = baseDamage * (strength / 10 + 1) * criticalHitMultiplier;
    std::cout << "Damage Dealt: " << damageDealt << std::endl;
    return result;
}

int main(){
    float a = 2.1;
    double b = 3.9;
    long double c = 4.6;

    int learnerResult = add_int(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}

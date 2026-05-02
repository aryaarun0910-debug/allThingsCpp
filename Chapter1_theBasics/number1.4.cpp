#include <iostream>

int main(){
    //Example maths and physics values to test the [[maybe_unused]] attribute

    double pi {3.14159};
    double gravity {9.81};
    double phi {1.61803};

    std::cout << pi << "\n" ; //pi used 
    std::cout << gravity << "\n"; //gravity used 
    
    // The compiler will probably complain about gravity being defined but unused

    return 0;
}

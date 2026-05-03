#include <iostream>

/*int main(){ 
    std::cout << "Enter a number: "; // asks user for a number
    int x {} ;  // define variable x to hold user input (and initialise it)
    std::cin >> x; // get the number for user input and store it in variable x
    std::cout << " You entered: " << x << "\n";
    return 0;
}
*/

/*int main(){
    std::cout << "Enter two numbers separated by a space: ";
    int x {}; // define variable x to hold user input (and value-initialise it)
    int y {}; // define variable y to hold user input (and value-initialise it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively
    std::cout << "You entered: " << x << " and " << y << "\n";
    return 0;
}
*/


// Ask the user to enter 3 values. The program should then print these three values 

int main() { 
    std::cout << "Enter three numbers separated by a space: ";
    int x {};
    int y {};
    int z {}; 
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " <<  z << ".\n";
    return 0;
}
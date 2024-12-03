#include <iostream>


int main() {
    int a  =  20.0,b = 30,c = 4;
    float output;

    output = a - double(b)/c;
    std::cout << "output: " << output << "\n";
    return 0;
}
//output: 12
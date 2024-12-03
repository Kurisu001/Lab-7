#include <iostream>


int main() {
    int a  =  20,b = 30;
    int c = 4, output;

    output = double(a) - double(b)/c;
    std::cout << "output: " << output << "\n";
    return 0;
}
//output: 12
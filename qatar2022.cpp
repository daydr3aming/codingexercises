#include <iostream>

// DIA 1 Concurso Individual
// B. Qatar 2022 - CodeForces 195A

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    int data = 0;
    int seconds = 0;
    int leverage = b * c;
    int total = (a * c) - leverage;

    while(data < total){
        data += b;
        seconds++;
    }
    std::cout << seconds << std::endl;
}
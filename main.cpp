#include <iostream>
#include "container.h"

int sum(int & a, int & b){
    return a + b;
};




int main(){

    int a = 10;

    int * px = &a;

    std::cout << px << std::endl;
    


    return 0;
}
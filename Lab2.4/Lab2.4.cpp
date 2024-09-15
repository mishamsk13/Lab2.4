// Lab2.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include "myF.h"

int main() {
    MyNamespace::myFunction(5);
    MyNamespace::myFunction(10);
    MyNamespace::myFunction(15);
    std::cout << "Sum of 3 and 4 is: " << SUM(3, 4) << std::endl;
    return 0;
}

#include <iostream>
#include <string>
//Вариант 3
//1.	Вычислите: z = 6 * 4 + 20 / 5 - 2 → 2 знака.
//2.	Введите число. Если == 6 → "Шестёрка!", иначе — "Нет".
//3.	Введите имя. Выведите его в обратном порядке (через цикл).


int main() {

    // задание 1
    float z = 6 * 4 + 20 / 5;
    std::cout << z << std::endl;

    // задание 2
    int number;
    std::cout << "Enter a number to analyze: ";
    std::cin >> number;

    
    if(number == 6) {
        std::cout << "Six!" << std::endl;
    }
    else {
        std::cout << "Not six!" << std::endl;
    }

    


    // задание 3
    std::string name;
    std::cout << "Enter a name: ";
    std::cin >> name;
    
    for(int i = name.length(); i >= 0; i--) {
        std::cout << name[i];
    }


    return 0;
}
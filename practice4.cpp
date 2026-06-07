#include <iostream>
#include <string>
//Вариант 3
//1.	Вычислите: z = 6 * 4 + 20 / 5 - 2 → 2 знака.
//2.	Введите число. Если == 6 → "Шестёрка!", иначе — "Нет".
//3.	Введите имя. Выведите его в обратном порядке (через цикл).

int calculateZ(int a, int b, int c, int d, int e) {
    return a * b + c / d - e;
}

void analyzeNumber(int number) {
    if (number == 6) {
        printf("Six!\n");
    } else {
        printf("Not six\n");
    }
}

int main() {
    int number;
    std::string name;
    // 1 задание
    std::cout << "Calculation result: " << calculateZ(6,4,20,5,2) << std::endl;
    // 2 задание
    std::cout << "Enter a number to analyze: ";
    std::cin >> number;
    analyzeNumber(number);
    // 3 задание
    std::cout << "Enter a name: ";
    std::cin >> name;
    for(int i = name.length(); i >= 0;i--) {
        std::cout << name[i];
    }
    
    return 1;
}
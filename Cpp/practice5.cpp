#include <iostream>
#include <vector>

//Вариант 3
//Вектор: {2, 4, 6, 8, 10}
//1.	Сумма чётных элементов.
//2.	Пользователь вводит номер. Если элемент == 6 → "Шестёрка!", иначе — "Нет".
//3.	Вывести элементы, кратные 4, и их количество.

void analyzeNumber(int number) {
    if (number == 6) {
        std::cout << "Six!" << std::endl;
    } else {
        std::cout << "not six" << std::endl;
    }
}

int main() {
    using namespace std;

    int summary = 0;
    int number;
    int count = 0;

    vector<int> dynamicArr = {2, 4, 6, 8, 10};

    // 1 задание
    for(auto num : dynamicArr) {
        if(num % 2 == 0)
            summary+= num;
    }
    cout << "Sum of even elements: " << summary << endl;

    // 2 задание
    std::cout << "Enter a number to analyze: ";
    std::cin >> number;
    analyzeNumber(number);

    // 3 задание
    for(auto num : dynamicArr) {
        if (num % 4 == 0) {
            cout << num << " ";
            count++;
        }
    }
    cout << "\nElements multiples of 4: " << count <<endl;
    return 1;
}
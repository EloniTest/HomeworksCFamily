#include <iostream>
#include <vector>
#include <string>
//Вариант 3
//Формула: a * b + c / d - e → (6,4,20,5,2)
//Вектор: {2, 4, 6, 8, 10}
//Анализ: ==6?
//Фильтр: кратные 4

int calculate(int a, int b, int c, int d, int e) {
    return a * b + c / d - e;
}
void checkSix(int x) {
    if (x == 6)
        std::cout << "Six!\n";
    else
        std::cout << "Not six\n";
}

std::vector<int> filterBy4(const std::vector<int>& v) {
    std::vector<int> result;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 4 == 0)
            result.push_back(v[i]);
    }
    return result;
}

int main() {
    // не работает в vs code
    //setlocale(LC_ALL,"RU");

    std::vector<int> nums = {6, 4, 20, 5, 2};

    // 1
    int z = calculate(6, 4, 20, 5, 2);
    std::cout << "z = " << z << std::endl;

    // 2
    std::cout << "Vector analys:\n";
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " - ";
        checkSix(nums[i]);
    }

    // 3
    std::vector<int> filtered = filterBy4(nums);
    std::cout << "divide 4: ";
    for (int i = 0; i < filtered.size(); i++) {
        std::cout << filtered[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
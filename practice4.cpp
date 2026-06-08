#include <iostream>
#include <string>
//Вариант 3
//1.	Вычислите: z = 6 * 4 + 20 / 5 - 2 → 2 знака.
//2.	Введите число. Если == 6 → "Шестёрка!", иначе — "Нет".
//3.	Введите имя. Выведите его в обратном порядке (через цикл).

// heap
class Solution {
    private:
        int a_,b_,c_,d_,e_;
    public:
        Solution(int a, int b,int c,int d, int e) {
            a_ = a;
            b_ = b;
            c_ = c;
            d_ = d;
            e_ = e;
        }
    int calculateZ() {
        return a_ * b_ + c_ / d_ - e_;
    }
    static void analyzeNumber(const int number) {
        if (number == 6) {
            std::cout << "Six!" << std::endl;
        } else {
            std::cout << "not six" << std::endl;
        }
    }
    void reverseName(const std::string &name) {
        for(int i = name.length();i >= 0; i--) {
            std::cout << name[i];
        } 
    }
};

int main() {
    Solution solver(6, 4, 20, 5, 2);

    // задание 1
    std::cout << "Calculation result: " << solver.calculateZ() << std::endl;

    // задание 2
    int number;
    std::cout << "Enter a number to analyze: ";
    std::cin >> number;
    // вызов из класса (статический, сpp так принимает)
    Solution::analyzeNumber(number); 

    // задание 3
    std::string name;
    std::cout << "Enter a name: ";
    std::cin >> name;
    solver.reverseName(name);

    return 0;
}
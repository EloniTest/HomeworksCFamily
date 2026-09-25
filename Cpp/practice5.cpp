#include <iostream>
#include <vector>

//Вариант 3
//Вектор: {2, 4, 6, 8, 10}
//1.	Сумма чётных элементов.
//2.	Пользователь вводит номер. Если элемент == 6 → "Шестёрка!", иначе — "Нет".
//3.	Вывести элементы, кратные 4, и их количество.

int main() {
    using namespace std;

    vector<int> vec = {2,4,6,8,10};
    vector<int>::const_iterator it;

    int EvenNums = 0;
    int EnterIndex;
    int count = 0;

    bool allRight;


    // 1 задание

    for(it = vec.cbegin();it != vec.cend();it++) {
        if(*it % 2 == 0) {
            EvenNums += *it;
        }
    }

    cout << "Sum of even nums: " << EvenNums << endl;

    // 2 задание
    while(!allRight) {
        try { 
            cin >> EnterIndex;
            if(EnterIndex > vec.size()) {
                throw out_of_range("Out of bounds, try again");
            }

            for(it = vec.cbegin();it != vec.cend();it++) {
                if( it[EnterIndex] == it[2]) {
                    cout << "Six!" << endl;
                    allRight = true;
                    break;
                }
                else {
                    cout << "Not six" << endl;
                    allRight = true;
                    break;
                }
            } 

        }
        catch(out_of_range& error) {
            cout << "Problem: " << error.what() << endl;
        }
    }



    // 3 задание

    cout << "Elements multiple by 4: ";
    for(it = vec.cbegin();it != vec.cend();it++) {
        if(*it % 4 == 0) {
            cout << *it << ' ';
            count++;
        }
    }

    cout << endl;

    cout << "Count: " << count;

    return 1;
}
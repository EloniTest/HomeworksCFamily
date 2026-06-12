using System;
using System.Collections.Generic;

// Вариант 3
// Список: {2, 4, 6, 8, 10}
// 1.   Сумма чётных.
// 2.   ==6?
// 3.   Кратные 4.

List<int> numbers = new List<int> { 2, 4, 6, 8, 10 };

Console.WriteLine("Исходный список: " + string.Join(", ", numbers));
Console.WriteLine(new string('-', 30));

// 1
int sumOfEvens = GetSumOfEvens(numbers);
Console.WriteLine($"1. Сумма чётных чисел: {sumOfEvens}");

// 2
bool hasSix = ContainsValue(numbers, 6);
Console.WriteLine($"2. Содержится ли число 6 в списке? {hasSix}");

// 3
List<int> multiplesOfFour = GetMultiplesOfFour(numbers);
Console.WriteLine($"3. Числа, кратные 4: {string.Join(", ", multiplesOfFour)}");


// методы

// метод для подсчета суммы чётных чисел
int GetSumOfEvens(List<int> list)
{
    int sum = 0;
    foreach (int num in list)
    {
        if (num % 2 == 0)
            sum += num;
    }
    return sum;
}

// метод для поиска числа 6
bool ContainsValue(List<int> list, int target)
{
    foreach (int num in list)
    {
        if (num == target)
        {
            return true; 
        }
    }
    return false;
}

// метод для поиска чисел кратных 4
List<int> GetMultiplesOfFour(List<int> list)
{
    List<int> result = new List<int>();
    foreach (int num in list)
    {
        if (num % 4 == 0)
        {
            result.Add(num);
        }
    }
    return result;
}
#include <stdio.h>
// Вариант 3
// Формула: z = a * b + c / d - e → a=6, b=4, c=20, d=5, e=2
// Анализ: если x == 6 → "Шестёрка!", иначе — "Не шестёрка"
// Массив: {2, 4, 6, 8, 10} → посчитать элементы, кратные 4

// функция для вычисления значения
int calculate_z(int a, int b, int c, int d, int e) {
    return a * b + c / d - e;
}
// функция для анализа числа x
void analyze_number(int x) {
    if (x == 6) {
        printf("Six!\n");
    } else {
        printf("Not six\n");
    }
}

// функция для подсчёта элементов массива, кратных divisor - делитель (divisor = 4)
int count_multiples(const int arr[], int size, int divisor) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % divisor == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // 1 задание
    int a = 6, b = 4, c = 20, d = 5, e = 2;
    int z = calculate_z(a, b, c, d, e);
    printf("1. Calculation result z = a * b + c / d - e = %d\n", z);

    // 2 задание
    int x;
    printf("2. Enter an integer x to analyze: ");
    scanf("%d", &x);
    analyze_number(x);

    // 3 задание
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int multiples_of_four = count_multiples(array, size, 4);
    printf("3. The array {2, 4, 6, 8, 10} contains elements that are multiples of 4: %d\n", multiples_of_four);

    return 0;
}
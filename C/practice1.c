#include <stdio.h>

// Вариант 3
// 1.Линейный алгоритм:
// Вычислите значение выражения:
// z = a * b + c / d - e,
// где a = 6, b = 4, c = 20, d = 5, e = 2.
// Выведите результат с точностью до 2 знаков после запятой.
// 2.Ветвление:
// Пользователь вводит число x.
// Если x делится на 3 без остатка, выведите "Кратно 3".
// Иначе — "Не кратно 3".

float summary(int a, int b, int c, int d, int e) {
    float result = a * b + c / d - e;
    return result;
}

int main(void) {
    // 1 задание
    printf("Result of z = a * b + c / d - e : %.2f\n",summary(6,4,20,5,2));

    // 2 задание
    int number;
    printf("write a number: \n");
    scanf("%d", &number);
    if (number % 3 == 0)
        printf("multiple of three\n");
    else 
        printf("not a multiple of three\n");

    // 3 задание
    printf("|");
    for(int i = 10; i >= 0; i--) {
        printf(" %d |", i);
    }
    return 1;
}
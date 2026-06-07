#include <stdio.h>
// Вариант 3
// Массив: {2, 4, 6, 8, 10}
// 1.	Найдите сумму чётных элементов. (Мог бы уточнить что именно, по индексу или по числам)
// 2.	Пользователь вводит номер (1-5). Если элемент == 6 — "Шестёрка!", иначе — "Не шестёрка".
// 3.	Выведите элементы, кратные 4, и их количество.


int summaryEven (const int array[], int size) {
    int summary = 0;
    for(int i = 0;i < size; i++)
        if(array[i] %2 == 0)
            summary += array[i];
    return summary;
}


int main(void) {
    int num;
    int count = 6;
    int countMultipleFour = 0;
    // 1 задание
    int arr[5] = {2,4,6,8,10};
    printf("Massive of numbers: \n");
    for(int i =0; i < 5; i++)
        printf("%d ",arr[i]);
    int result = summaryEven(arr,5);
    printf("\nSummary of even elements: %d\n",result);

 
    // 2 задание
    for(int i =0; i < 6; i++) {
        printf("\nWrite a number: ");
        scanf("%d",&num);
        if (num == 6) {
            printf("Six!!\n");
            break;
        } else {
            printf("Not six but seven\n");
            printf("attempts: %d\n", count - i);
        }
    }
    
    
    // 3 задание
    printf("Elements multiples of 4\n");
    for(int i = 0;i < 5; i++)
        if(arr[i] % 4 == 0) {
            printf("%d ", arr[i]);
            countMultipleFour++;
        }
    printf("\ncount: %d",countMultipleFour);
    return 0;
}
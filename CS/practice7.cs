// Вариант 3
//1.	z = 6 * 4 + 20 / 5 - 2
//2.	Ввод числа → равно 6?
//3.	Числа от 10 до 1 (обратный порядок).


// 1
int z = 6 * 4 + 20 / 5 - 2;
Console.WriteLine($"z = {z}");

// 2
Console.Write("Введите число: ");
int number = int.Parse(Console.ReadLine());
if (number == 6)
    Console.WriteLine("Шестёрка!");
else
    Console.WriteLine("Не шестёрка");

// 3
Console.Write("Числа от 10 до 1: ");
for (int i = 10; i >= 1; i--)
{
    Console.Write(i);
    if (i > 1) Console.Write(", ");
}
Console.WriteLine();
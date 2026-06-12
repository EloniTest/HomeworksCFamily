using System;

// Вариант 3 — Автомобиль
// Свойства: Model (string), Year (int)
// Логика: IsOld() → Year < 2015



// первый экземпляр класса
Car myCar = new Car("Tesla Model 3", 2022);

// второй экземпляр класса
Car oldCar = new Car("Opel Astra", 2010);

// информация о первой машине
Console.WriteLine($"Марка: {myCar.Model}, Год: {myCar.Year}");
Console.WriteLine($"Это старый автомобиль? -> {myCar.IsOld()}"); 

Console.WriteLine(new string('-', 30));

// информация о второй машине
Console.WriteLine($"Марка: {oldCar.Model}, Год: {oldCar.Year}");
Console.WriteLine($"Это старый автомобиль? -> {oldCar.IsOld()}");

Console.WriteLine(new string('-', 30));

// Проверка инкапсуляции: попробуем установить некорректный год
Console.WriteLine("Попытка установить некорректный год выпуска (1500 г.)...");
myCar.Year = 1500; 
Console.WriteLine($"Текущий год машины в программе: {myCar.Year}");


// класс

class Car
{
    private int _year;
    public string Model { get; set; }

    public int Year
    {
        get { return _year; }
        set
        {
            // Небольшая проверка: машина не могла быть создана до изобретения авто (1886 г)
            // И не может быть из будущего
            if (value >= 1886 && value <= DateTime.Now.Year)
            {
                _year = value;
            }
            else
            {
                Console.WriteLine($"[Ошибка]: Год {value} некорректен! Оставлен прежний год: {_year}");
            }
        }
    }

    // Конструктор класса
    public Car(string model, int year)
    {
        Model = model;
        Year = year;
    }
    public bool IsOld()
    {
        return Year < 2015;
    }
}
#include <stdio.h>//підключення бібліотек
#include <iostream>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);//підключення української мови
    SetConsoleOutputCP(1251);
    int size, i, sum=0;//задаємо змінні
    std::cout << "Введіть розмір масиву\n";//виводимо повідомлення
    std::cin >> size;//користувач задає розмір масиву
    int* array = (int*)malloc(size * sizeof(int));// Виділення пам'яті для масиву
    if (array == NULL) {// Перевірка, чи пам'ять була успішно виділена
        printf("Помилка виділення пам'яті.\n");
        return 1;
    }
    std::cout << "Введіть елементи масиву\n";
    for (i = 0; i < size; i++) {//за допомогою циклу for
        scanf_s("%i", &array[i]);//користувач вводить значення елементів масиму
        sum = sum + array[i];//формула для обрахунку
    }
    printf("Сумма = %i", sum);//виводимо його значення
    free(array);//Звільнення пам'яті
    return 0;
}
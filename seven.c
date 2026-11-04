#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void task1()
{
    char c;
    printf("Введите символ: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
        printf("Это цифра\n");
        break;
    case 'a':
    case 'b':
    case 'c':
        printf("Это буква\n");
        break;
    default:
        printf("Это не буква и не цифра\n");
        break;
    }
}

void task2()
{
    float x, y;
    char op;

    printf("Введите выражение в формате число операция число (например 5+3): ");
    scanf("%f%c%f", &x, &op, &y);

    switch (op)
    {
    case '+':
        printf("=%.f\n", x + y);
        break;
    case '-':
        printf("=%.f\n", x - y);
        break;
    case '*':
        printf("=%.f\n", x * y);
        break;
    case '/':
        if (y != 0)
            printf("=%.2f\n", x / y);
        else
            printf("Ошибка: деление на ноль!\n");
        break;
    case '^':
        printf("=%.f\n", pow(x, y));
        break;
    default:
        printf("Неизвестная операция: %c\n", op);
    }
}

void task3()
{
    int kop; 
    int rub;
    int stm;
    printf("Введите стоимость покупки в копейках\n");
    scanf("%d", &stm);
    rub = stm / 100;
    kop = stm % 100;
    printf("Стоимость покупки: %d рублей %d  ", rub, kop);
    switch (kop % 10) 
    {
        case 1:
            printf("копейка\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("копейки\n");
            break;
        default: 
            printf("копеек\n");
    }
}

int main()
{
    setlocale(LC_CTYPE, "RUS");

    task2();

    system("pause");
    return 0;
}

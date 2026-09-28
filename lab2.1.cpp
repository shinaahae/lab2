// lab2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    printf("123\n");
    printf("1\n2\n3\n");
    printf("1\n\t2\n\t\t3\n\t\t\t4\n");
    printf("%1d\n%3d\n%5d\n%7d\n", 1, 2, 3, 4 );
    printf("%10.5f\n", 12.234657);
    printf("Остаток от деления %d на %d равен %d\n ", 5, 2,5 % 2);
    printf("Результат деления %d на %d равен %f\n  ", 7, 5,7.0/5);
    printf("результат умножения %d на %d равен %d\n ", 2000, 4, 2000 * 4);
    printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);

    

    
}


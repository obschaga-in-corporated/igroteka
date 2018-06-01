#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Kolichestvo()
{
    printf("Введите количество монет: ");
    scanf ("%d", &kol);
    n = kol;
}
void Moneti(int n)
{
    int *moneta = new int[kol];
    int *b = new int[kol];
    for (int i = 0; i < kol; i++)
    {
        moneta[i] = rand() % (100 - 100 + 1) + 100 ;
        b[i] = 0;
    }
}
void yousum(int sumyou)
{
    sumyou = sumyou + moneta[num];
    b[num] = 1;
    n--;
    if (n == 0) break; 
}
void youhod()
{
    printf("Введите номер монеты: ");
    scanf ("%d",&num);
    while (b[num] == 1)
    {
        printf("Ошибка. Введите номер монеты: ");
        scanf ("%d",&num);
    }
} 

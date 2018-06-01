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
void youhod(int num)
{
    printf("Введите номер монеты: ");
    scanf ("%d",&num);
    while (b[num] == 1)
    {
        printf("Ошибка. Введите номер монеты: ");
        scanf ("%d",&num);
    }
} 
void comphod(int num)
{
    printf("Hod computera: ");
    num = 0 + rand() % kol;
    while (b[num] == 1)
    {
        num = 0 + rand() % kol;
        printf("%d\n", num); 
    }
} 
void compsum(int sumcomp)
{
    sumcomp = sumcomp + moneta[num];
    b[num] = 1;
    n--; 
}

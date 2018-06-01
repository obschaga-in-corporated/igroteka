#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Kolichestvo()
{
    printf("Введите количество монет: ");
    scanf ("%d", &kol);
    n = kol;
}
void Moneti(int kol)
{
    int *moneta = new int[kol];
    int *b = new int[kol];
    for (int i = 0; i < kol; i++)
    {
        moneta[i] = rand() % (100 - 100 + 1) + 100 ;
        b[i] = 0;
    }
}
void yousum(int *b, int *moneta, n)
{
    sumyou = sumyou + moneta[num];
    b[num] = 1;
    n--;
    if (n == 0) break; 
}
void youhod(int *b)
{
    printf("Введите номер монеты: ");
    scanf ("%d",&num);
    while (b[num] == 1)
    {
        printf("Ошибка. Введите номер монеты: ");
        scanf ("%d",&num);
    }
} 
void comphod(int kol, int *b)
{
    printf("Ход компьютера: ");
    num = 0 + rand() % kol;
    while (b[num] == 1)
    {
        num = 0 + rand() % kol;
        printf("%d\n", num); 
    }
} 
void compsum(int num, int *b, int n)
{
    sumcomp = sumcomp + moneta[num];
    b[num] = 1;
    n--; 
}
void games(int n)
{
    while (n != 0)
    {
        youhod(b);
        yousum(b, moneta, n);
        comphod(kol, b);
        compsum(num, b, n);
    }
} 
void output(int sumyou, int sumcomp)
{
    printf("%d\n%d\n", sumyou, sumcomp);
    if (sumcomp < sumyou)
        printf("you win");
    else
        if (sumcomp > sumyou)
            printf("comp win");
        else
                printf("Nichya");
    return 0;
}


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Kolichestvo()
{
    printf("Введите количество монет: ");
    scanf ("%d", &kol);
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

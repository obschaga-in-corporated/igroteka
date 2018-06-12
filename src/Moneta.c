#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int output() {
    int raz;
    printf ("Если хотите сыграть заново - введите -1, продолжить - 1, выйти - 0: \n");
    scanf ("%d", &raz);
    if (raz!= 1 && raz!=0 && raz != -1) {
        raz=output();
    }
    return raz;
}
int Kolichestvo() {
    int kol;
    printf ("Введите количество монет: ");
    scanf ("%d", &kol);
    while (kol <0) {
        printf ("Ошибка. Введите количество монет: ");
        scanf ("%d",&kol);
    }
    if (kol==0) {
        int game = output ();
        if (game == 0) {
            return 0;
        }
        else if (game ==1) {
            kol = Kolichestvo();
        }
             else {
                 return -1;
             }
    return kol;
}
int *Moneta(int kol, int moneta[]) {
    moneta = (int*)malloc((kol+1)*(sizeof(int)));
    for (int i = 0; i < kol; i++) {
        moneta[i] = rand() % (100 + 100 + 1) - 100;
    }
    return moneta;
}
int *mass(int kol, int b[]) {
    b = (int*)malloc((kol+1)*(sizeof(int)));
    for (int i = 0; i < kol; i++) {
        b[i] = 0;
    }
    return b;
}
int youhod(int kol, int *b) {
    int num;
    printf ("Введите номер монеты: ");
    scanf ("%d",&num);
    while (b[num-1] == 1 || num > kol || num < 0) {
        printf ("Ошибка. Введите номер монеты: ");
        scanf ("%d",&num);
    }
    if (num==0) {
        int game = output ();
        if (game == 0) {
            return 0;
        }
        else if (game ==1) {
            num = youhod(kol,b);
        }
             else {
                 return -1;
             }
    }
    return num;
}
int yousum(int num, int *moneta, int sumyou) {
    sumyou = sumyou + moneta[num-1];
    return sumyou;
}
int comphod(int kol, int *b) {
    printf ("Ход компьютера: ");
    int num = 1 + rand() % kol;
    while (b[num-1] == 1) {
        num = 1 + rand() % kol;
    }
    return num;
}
int compsum(int num, int *moneta, int sumcomp) {
    sumcomp = sumcomp + moneta[num-1];
    return sumcomp;
}
void comparison(int sumyou, int sumcomp) {
    printf ("Твоя сумма = %d\n Сумма компьютера = %d\n", sumyou, sumcomp);
    if (sumcomp < sumyou) {
        printf ("Вы победили\n");
    }
    if (sumcomp > sumyou) {
        printf ("Вы проиграли\n");
    }
    if (sumcomp == sumyou) {
        printf ("Ничья\n");
    }
}


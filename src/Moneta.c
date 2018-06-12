#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int output() {
    int raz;
    printf("Если хотите сыграть заново - введите -1, продолжить - 1, выйти - 0: \n");
    scanf("%d", &raz);
    if (raz!= 1 && raz!=0 && raz != -1)
    raz=output();
    return raz;
}
int Kolichestvo() {
    int kol;
    printf("Введите количество монет: ");
    scanf ("%d", &kol);
    while (kol <0) {
        printf("Ошибка. Введите количество монет: ");
        scanf ("%d",&kol);
    }
    if (kol==0) {
        int game = output ();
        if (game == 0)
        return 0;
        else if (game ==1)
        kol = Kolichestvo();
        else
        return -1;
    }
    return kol;
}

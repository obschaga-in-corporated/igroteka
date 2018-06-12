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

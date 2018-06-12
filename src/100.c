#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "100.h"
int trust ( int Count, int Num) {
    if (Num < 0 || Num > 10 || Num > Count) {
        printf ("Неверно! Повторите ввод.\n");
        scanf ("%d", &Num);
        Num = trust (Count, Num);
    }
    return Num;
}
int quit () {
    int raz;
    printf ("Если хотите сыграть заново - введите -1,");
    printf ("продолжить - 1, выйти - 0: \n");
    scanf ("%d", &raz);
    if (raz != 1 && raz !=0 && raz != -1) {
        raz = quit ();
    }
    return raz;
}
int progress_user (int Count) {
    int Num;
    printf ("Ваш ход. На столе %d спичек.\n", Count);
    printf ("Сколько спичек Вы берете?\n");
    scanf ("%d", &Num);
    Num = trust (Count, Num);
    if (Num == 0) {
        int game = quit ();
        if (game == 0) {
            return 0;
        } else if (game == 1) {
            Count = progress_user (Count);
        } else {
            return -1;
        }
    }
    Count = Count - Num;
    return Count;
}
int progress_comp (int Count) {
    int Num;
    Num = rand () % 10 + 1;
    if (Num > Count || Count < 10) {
        Num = Count;
    }
    printf ("Мой ход. Я взял %d спичек\n", Num);
    Count -= Num;
    return Count;
}
void finish (int play) {
    if (play == 1) {
        printf ("Вы проиграли!\n");
    } else {
        printf ("Вы победили!\n");
    }
}
int games ()
{
    int Count = 100, Player = 1, game;
    while (Count > 0) {
        if (Player == 1) {
            Player = 2;
            Count = progress_user (Count);
            if (Count == 0) {
                return 0;
            } else if (Count == -1) {
                return 1;
            }
        } else {
            Player = 1;
            Count = progress_comp (Count);
        }
    }
    finish (Player);
    game = quit ();
    if (game == 1 || game==-1) {
        return 1;
    } else {
        return 0;
    }
}

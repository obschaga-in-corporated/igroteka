#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int proverka ( int Count, int Num)
{
    if (Num < 0 || Num > 10 || Num > Count)
    {
        printf("Неверно! Повторите ввод.\n");
        scanf("%d", &Num);
        Num = proverka (Count, Num);
    }
    return Num;
}
int output()
{
    int raz;
        printf("Если хотите сыграть - введите 1, нет - 0: \n");
        scanf("%d", &raz);
        if (raz != 1 && raz !=0)
        raz=output();
    return raz;
}
{
int stroke_user(int Count)
{
    int Num;
        printf("Ваш ход. На столе %d спичек.\n", Count);
        printf("Сколько спичек Вы берете?\n");
        scanf("%d", &Num);
        Num = proverka (Count, Num);
        Count -= Num;
    return Count;
}
int stroke_comp(int Count)
{
    int Num;
        Num = rand() % 10 + 1;
        if (Num > Count || Count < 10)
        Num = Count;
        printf("Мой ход. Я взял %d спичек\n", Num);
        Count -= Num;
    return Count;
}
void rezult (int play)
{
    if (play == 1)
        printf("Вы проиграли!\n");
    else
        printf("Вы победили!\n");
}
int games()
{
    int Count = 100, Player = 1, game, start;
    while (Count > 0)
    {
        if (Player == 1)
        {
            Player = 2;
            start = Count;
            Count = stroke_user (Count);
            if (Count == start)
            {
                game = output ();
                if (game == 1)
                    return 1;
                else 
                    return 0;
            }
        }
        else
        {
            Player = 1;
            Count = stroke_comp(Count);

        }
    }

    rezult (Player);
    game = output ();
    if (game == 1)
        return 1;
    else 
        return 0;
}

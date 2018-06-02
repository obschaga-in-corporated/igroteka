#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "ygad.h"

int number ()
{
    int num;
    srand(time(NULL));
    num =1 + rand() %100;
    return num;
}

int power (int n) 
{
    if (n == 0) 
        return 1;
    return 2 * power(n - 1);
}

int output()
{
    int raz;
    printf("Если хотите сыграть - введите 1, нет - 0: \n");
    scanf("%d", &raz);
    if (raz != 1 && raz != 0)
        raz = output();
    return raz;
}

int proverka (int answer)
{  
    if (answer < 0 || answer > 100)
    {
        printf ("FATAL ERROR! Пожалуйста, введите новое значение: \n");
        scanf("%d", &answer);
        answer = proverka (answer);
    }
    return answer;
}   

int stroke_user (int answer_user, int num)
{
    if (answer_user > num)
        printf("У вас перелет \n");
    else
        printf("У вас недолет \n");
    printf ("Введите новое число: \n");
    scanf("%d", &answer_user);
    answer_user = proverka(answer_user);
      
    return answer_user;
}

int stroke_comp (int answer_comp, int num, int try)
{ 
    int stupen = power (try), i;
    if (try == 5)
    {
        i = 1 + rand() % 2;
        answer_comp += i;	    
    }   
    else
    {
        if (answer_comp > num)
        {
            printf("У компьютера перелет \n");
	    answer_comp -= (50 / stupen);
	}
	else
	{
	    printf("У компьтера недолет \n");
            answer_comp += (50 / stupen);
        }
    }
    return answer_comp;
}

void rezult (int answer_user, int answer_comp, int num)
{
    if (answer_user == num && answer_comp != num)
        printf("Поздравляем! Вы победили! \n"); 
    if (answer_user != num && answer_comp == num)
        printf("Вы проиграли! Попробуйте еще раз...\n Правильный ответ: %d\n", num);
    if (answer_user == num && answer_comp == num)
        printf("Ничья!\n");
    if (answer_user != num && answer_comp != num)
        printf("Никто не выиграл.\n Правильный ответ: %d\n", num); 
}       

int condition ()
{
    int answer_user, num = number (), game, answer_comp= 50, tryCount = 0;    
    printf("Введите число: \n");
    scanf("%d", &answer_user);
    answer_user = proverka (answer_user);
    if (answer_user == 0)
    {
        game = output ();
        if (game == 1)
            return 1;
        else
            return 0;
    }

    while (answer_user != num && answer_comp != num && tryCount < 5)
    {
        tryCount ++;
        printf ("Количество оставшихся попыток = %d\n", 6-tryCount);
        answer_comp = stroke_comp (answer_comp, num, tryCount);
        answer_user = stroke_user (answer_user, num);
        if (answer_user == 0)
        {
            game = output ();
            if (game == 1)
                return 1;
            else
                return 0; 
        }
    }
    rezult (answer_user, answer_comp, num);
    game=output();
    if (game == 1)
        return 1;
    else
        return 0;
}


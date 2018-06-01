#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
int proverka( int Count, int Num)
{
if (Num < 0 || Num > 10 || Num > Count)
{
printf("Неверно! Повторите ввод.\n");
scanf("%d", &Num);
Num = proverka(Count, Num);
}
return Num;
}
int games()
{
int Count = 100, Player=1;
while (Count>0)
{

}
}

{
int stroke_user(int Count)
{
int Num;
                      printf("Ваш ход. На столе %d спичек.\n", Count);
				printf("Сколько спичек Вы берете?\n");
		scanf("%d", &Num);
Num=proverka(Count, Num);

Count-=Num;
return Count;
}

}
return 0;

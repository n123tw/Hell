#include <stdio.h>
int main (void)
{
int year, month, day;
printf("Введите число дней\n");
scanf("%d", &day);
year=day/365;
month=(day-year)/30;
day=day-30*month;
printf("Это %d лет, %d месяцев, %d дней", year, month, day);
return 0;
}

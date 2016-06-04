#include <stdio.h>
int main(void)
{
float speed, sina, time, a, x;
printf("Введите начальную скорость:");
scanf("%f",&speed);
printf("Введите угол, под которым было брошено тело:");
scanf("%f",&a);
x=a*3.14/180;
sina=x-x*x*x/(2*3)+x*x*x*x*x/(2*3*4*5)-x*x*x*x*x*x*x/(2*3*4*5*6*7);
time=2*speed*sina/10;
printf("Время полёта тела = %.1f секунд \n",time);
return 0;
}

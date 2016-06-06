#include <stdio.h>
int main(void)
{
float speed, sina, time, a, x;
printf("Введите начальную скорость:");
scanf("%f",&speed);
printf("Введите угол, под которым было брошено тело:");
scanf("%f",&a);
x=a*3.14/180;
sina=x-x*x*x/6+x*x*x*x*x/120-x*x*x*x*x*x*x/5040;
time=2*speed*sina/10;
printf("Время полёта тела = %.1f секунд \n",time);
return 0;
}

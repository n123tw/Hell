#include <stdio.h>
int main (void)
{
float a, b, c, d, e, f;
printf("Введите два числа:\n");
scanf("%f %f", &a, &b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
printf("Сумма чисел:%f, Разность чисел:%f, Произведение чисел:%f, Частное чисел:%f \n", c, d, e, f);
return 0;
}

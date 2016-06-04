#include <stdio.h>
#include <math.h>
int main()
{
float a,b, result;
char command;
printf("Введите команду (например, '13+37'):\n");
scanf("%f%c%f", &a,&command,&b);
switch(command)
{
case '+': result=a+b;
          break;
case '-': result=a-b;
          break;
case '*': result=a*b;
          break;
case '/': result=a/b;
          break;
case '^': result=pow(a,b);
          break;
case '%': result=a/b*100;
          break;
}
printf("=%.2f\n", result);
return 0;
}

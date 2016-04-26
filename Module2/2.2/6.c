#include <stdio.h>

int main (void)
  { long long output;
    int input,i;
   printf ("Введите число, факториал которого хотите подсчитать \n");
   scanf ("%d", &input);
   i=1;
   output=1;
   while (i<=input)
  { output=output*i ;
    i=i+1;     } 
  printf(" Факториал числа %d равен %lld \n" ,input,output) ;

return 0;
}

#include <stdio.h>
#include <string.h>

int main (void)
 { int cache,i;
   char string[5000];
   printf("Введите буквы,увеличить регистр которых вы хотите  \n");
   scanf("%s",string);
   cache=strlen(string);
   i=0;
   while (i<cache)
    { string[i]=string[i]-32;
      i=i+1; }
     printf("%s \n",string);
   return 0;
  }

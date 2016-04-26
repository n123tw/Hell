
#include <stdio.h>
#define SPACE ' ' 
int main (void)
{
char ch;
printf("Введите буквы,увеличить регистр которых вы хотите  \n");
ch = getchar ();
while (ch != '\n')
{
if (ch == SPACE)
putchar (ch);
else
putchar (ch - 32);
ch = getchar ( ) ;
}
putchar (ch);
return 0;
}

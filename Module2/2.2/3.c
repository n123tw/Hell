#include <stdio.h>
#include <string.h>
int main()
{
char string[100000];
int size;
printf("Введите строку: \n");
scanf("%s", string);
size=strlen(string);
printf("Резмер введённой строки %d байт\n", size+1);
  return 0;
}

#include <stdio.h>
int main()
{
char s1;
int s2;
float s3;
double s4;
printf("Тип char имеет размер %d байт(а, ов).\n", sizeof(s1));
printf("Тип int имеет размер %d байт(а, ов).\n", sizeof(s2));
printf("Тип float имеет размер %d байт(а, ов).\n", sizeof(s3));
printf("Тип double имеет размер %d байт(а, ов).\n", sizeof(s4));
return 0;
}

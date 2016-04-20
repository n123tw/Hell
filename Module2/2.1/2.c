#include <stdio.h>

int main(void) 
{ 	
	int day, month;
	day = 21;
	month = 11;
	printf("%d%d/%d%d\n", day/10, day%10, month/10, month%10); 
	return 0;
}

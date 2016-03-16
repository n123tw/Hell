#include <stdio.h>

int main(void) 
{ 	
	int day, month, box;
	day = 21;
	month = 11;
	box= day;
	day= month;
	month= box;
	printf("%d%d/%d%d\n", day/10, day%10, month/10, month%10);
	return 0;
}

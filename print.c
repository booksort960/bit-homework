#include <stdio.h>
#include "print.h"
int my_strlen(char* b)
{
	if (*b)
		return 1 + my_strlen(b + 1);
	return 0;
}
void print(char* a)
{
	if (*a)
	{
		int len=my_strlen(a);
		char tmp = *a;
		*a = *(a + len - 1);
		*(a + len - 1) = '\0';
		print(a + 1);
		*(a + len - 1) = tmp;
	}
}
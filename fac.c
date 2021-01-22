#include "fac.h"
int fac(int a)
{
	int i = 1,j=1;
	int c=1;
	for (int b = 3; b <= a; b++)
	{
		c = i + j;
		i = j;
		j = c;
	}
	return c;
}
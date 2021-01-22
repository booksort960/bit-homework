#include "sum.h"
int sum(int a)
{
	if (a > 9)
		return a%10+sum(a / 10);
	return a;
}
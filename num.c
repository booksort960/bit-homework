#include "num.h"
int num(int a, int b)
{
	if(b>0)
		return a * num(a, b- 1);
	return 1;
}
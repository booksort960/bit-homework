#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void move(char start,char end,int n)
{
	static int count = 0;
	count++;
	printf("NO.%d  step,the %d moves from %c to %c\n", count, n, start, end);
}
void hanoi(int n,char pose1,char pose2,char pose3)
{
	if (n == 1)
		move(pose1, pose3, 1);
	else
	{
		hanoi(n - 1, pose1, pose3, pose2);
		move(pose1, pose3, n);
		hanoi(n - 1, pose2, pose1, pose3);
	}
}
int main(void)
{
	
	char pose1 = 'A';
	char pose2 = 'B';
	char pose3 = 'C';
	int n;
	scanf("%d", &n);
	hanoi(n, pose1, pose2, pose3);
	
	return 0;
}
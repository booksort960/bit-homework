#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	printf("please input a array of ordered:>");
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	int n;
	printf("please a number you want:>");
	scanf("%d", &n);
	int len = sizeof(num) / sizeof(num[0]);
	int left = 0;
	int right = len - 1;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (num[mid] > n)
			right = mid - 1;
		else if (num[mid] < n)
			left = mid + 1;
		else
			break;
	}
	if (left <= right)
		printf("ok!The index of %d is %d\n", n, mid);
	else
		printf("NO!Don't have number %d\n", n);
}
//#include <stdio.h>
//int main(void)
//{
//	int i;
//	for (i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main(void)
//{
//	int max;
//	int num[10];
//	max = num[0];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &num[i]);
//		
//		if (max < num[i])
//		{
//			max = num[i];
//		}
//	}
//	printf("最大值是%d\n", max);
//	return 0;
//}
//#include <Stdio.h>
//int main(void)
//
//{
//	int i;
//	double num = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; (i++))
//	{
//		num += flag*1.0 / i;
//		flag *= -1;
//	}
//	printf("%lf\n", num);
//}
//#include <stdio.h>
//int check(int a)
//{
//	int count = 0;
//	while (a != 0)
//	{
//		if (a % 10 == 9)
//			count++;
//		a /= 10;
//	}
//	return count;
//}
//int main(void)
//{
//	int i,num=0;
//	for (i = 1; i <= 100; i++)
//	{
//		num += check(i);
//		
//	}
//	printf("有%d个数字9.\n",num);
//	return 0;
//}
//int check(int a)//判断是不是素数
//{
//	int i;
//	for (i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//			return 0;//不是，返回0
//	}
//	return a;//是，返回值
//}
//int main(void)
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		int b = check(i);
//		if (b != 0)
//			printf("%d ", b);
//	}
//	return 0;
//}
//int main(void)
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) ||((i % 100 != 0)&&(i % 400==0)))
//			printf("%d ",i);
//	}
//	return 0;
//}
//int main(void)
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	
//	while (b != 0)
//	{
//		int t = a % b;
//		a = b;
//		b = t;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main(void)
//{
//	int i;
//	for (i = 3; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main(void)
//{
//	int num[10];
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = i+1; j < 3; j++)
//		{
//			if (num[i] < num[j])
//			{
//				int tmp = num[i];
//				num[i] = num[j];
//				num[j] = tmp;
//			}
//		}
//	}
//	for (int j = 0; j < 3; j++)
//		printf("%d ", num[j]);
//	return 0;
//	
//}
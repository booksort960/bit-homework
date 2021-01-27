//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int n;//Ç®
//	int m;//Æ¿×Ó
//	int count = 0;//ÒûÁÏÊý
//	scanf("%d", &n);
//	m = n;
//	while (m>1)
//	{
//		
//		count += n;
//		n = m / 2;
//		if (m % 2 == 1)
//		{
//			m = n + 1;
//		}
//		else
//			m = n;
//	}
//	if (m == 1)
//		count += n;
//	printf("%d", count);
//
//}
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int num(int i)
//{
//	int n = 1;
//	int a = i;
//	while (i > 9)
//	{
//		n++;
//		i /= 10;
//	}
//	int sum =0;
//	while (a)
//	{
//		sum += pow((a%10), n);
//		a /= 10;
//	}
//	return sum;
//}
//int main(void)
//{
//	int i;
//	for (i = 0; i <= 100000; i++)
//	{
//		int ret = num(i);
//		if ( ret== i)
//			printf("%d ", i);
//	}
//	return 0;
//
//}
//int num(int n,int a)
//{
//	int ret=0;
//	for (int i = 0; i < a;i++)
//	{
//		ret += n * pow(10, i);
//	}
//	return ret;
//}
//int main(void)
//{
//	int n,i=1;
//	scanf("%d", &n);
//	int count = 0;
//	while (i <= 5)
//	{
//		count += num(n,i);
//		i++;
//	}
//	printf("%d ", count);
//}
//int main(void)
//{
//	char arr[100];
//	gets(arr);
//	int len = strlen(arr);
//	char* p = arr;
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		char tmp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = tmp;
//		left++;
//		right--;
//	}
//	puts(p);
//	return 0;
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//		printf("%d ", *(p + i));
//	return 0;
//}
//int main(void)
//{
//	int n = -1;
//	int count = 0;
//	while (n > 0)
//	{
//		int i;
//		i = n & 1;
//		if (i != 0)
//			count++;
//		n >>= 1;
//	}
//	printf("%d ", count);
//}
//int main(void)
//{
//	int n = 30;
//	int num[32];
//	int count = 0;
//	while (n > 0)
//	{
//		count++;
//		num[count] = n % 2;
//		n /= 2;
//	}
//	for (int i = 1; i <= count; i += 2)
//		printf("%d ", num[i]);
//	printf("\n");
//	for (int i = 2; i <= count; i += 2)
//		printf("%d ", num[i]);
//	return 0;
//}
//int main(void)
//{
//	int m = 10;
//	int n = 20;
//	int s = m ^ n;
//	int count = 0;
//	while (s > 0)
//	{
//		int i;
//		i = s % 2;
//		count += i;
//		s /= 2;
//	}
//	printf("%d", count);
//	
//	return 0;
//}
/*int a = 10;
	int b = 30;
	printf("%d %d\n", a, b);
	
	a = b ^ a;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n",a,b);*/
//void anum(int num[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		num[i] = num[i] + 1;
//	}
//}
//int main(void)
//{
//	int num[5] = { 1,2,3,4,5 };
//	anum(num);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}
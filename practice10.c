1.实现一个函数，判断一个数是不是素数。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void prime_number(int i,int j)
{
	for (j = 2; j <= i; j++)
	{
		if (i%j == 0)
		{
			break;
		}
	}
	if (i == j)
		   {
			printf("是素数");
		   }
	else printf("不是素数");
}
int main()
			
{
	int i=0,j=0;
	printf("请输入查询的数字");
	scanf("%d", &i);
	prime_number(i, j);
	printf("\n");
	system("pause");
	return 0;
}
2.递归和非递归分别实现求第n个斐波那契数。
递归写法
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Feibonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return Feibonacci(n - 1) + Feibonacci(n - 2);
}
int main()
{
	int n = 0;	
	printf("请输入你想要的第几个数字:");
	scanf("%d", &n);
	printf("%d",Feibonacci(n));
	printf("\n");
	system("pause");
	return 0;
}

用迭代
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Feibonacci(int n)
{
	int first = 1;
	int second = 1;
	int third = 1;
	int i = 2;
	while (i<n)
	{
		third = first + second;	
		first = second;
		second = third;
		i++;
	}
	return third;
}
int main()
{
	int n = 0;	
	printf("请输入你想要的第几个数字:");
	scanf("%d", &n);
	printf("%d",Feibonacci(n));
	printf("\n");
	system("pause");
	return 0;
}

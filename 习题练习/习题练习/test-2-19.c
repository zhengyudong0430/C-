//写一个函数求两个整数中的较大值
#include<stdio.h>
//int get_max(int x, int y)
//{
//	int max = 0;
//	if (x > y)
//	{
//		max = x;
//	}
//	else
//		max = y;
//	return max;
//
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//要求：完成get_max函数
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}
//写一个代码打印1 - 100之间所有3的倍数的数字。
//int main()
//{
//	int i=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			
//			printf("%d", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//写代码将三个整数按从大到小输出。
//int main()
//{
//	int i, j, k;
//	scanf_s("%d %d %d", &i, &j, &k);
//	if (i < j)
//	{
//		int tmp1 = i;
//		i = j;
//		j = tmp1;
//	}
//	 if (i < k)
//	{
//		int tmp2 = i;
//		i = k;
//		k = tmp2;
//	
//	}
//	if  (j < k)
//	{
//		int tmp3 = j;
//		j = k;
//		k = tmp3;
//
//	}
//	printf("%d %d %d ", i, j, k);
//
//	return 0;
//}
//写一个代码：打印100~200之间的素数}
//#include <stdio.h>
//int main()
//{
//	int  i = 0;
//	int  count = 0;
//	for (i = 2; i <= 5; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			int   m = 0;
//			m = i%j;
//			if (m == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	system("pause");
//
//}
//#include<math.h>
//#include <stdio.h>
//int main()
//{
//	int  i = 0;
//	int  count = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i);j++)
//		{
//			if (i%j==0)
//				break;
//		}
//		if (j > sqrt( i))
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//}
//#include<math.h>
//int main()
//{
//
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i / 2;j++)
//		{
//			if (i%j == 0)
//			
//				break;
//		}
//			if (j>i/2)
//			{
//				printf("%d", i);
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include<math.h>
//
//int main()
//{
//	int i, j, k = 0;
//	for (i = 100; i <= 200; i++)
//	for (j = 2; j <= sqrt(i); j++)
//	if (i%j == 0)
//		break;
//	else if (j > sqrt(i) - 1)
//	{
//		printf("%d,", i);
//		k++;
//		if (k % 5 == 0)
//			printf("\n");
//	}
//	else
//		continue;
//	return 0;
//}
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{

			if (i%j == 0)
				break;
		}
			if (i == j)
				printf("%d", i);
		
	}
	return 0;
}
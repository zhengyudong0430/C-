//дһ�����������������еĽϴ�ֵ
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
//	//Ҫ�����get_max����
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}
//дһ�������ӡ1 - 100֮������3�ı��������֡�
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
//д���뽫�����������Ӵ�С�����
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
//дһ�����룺��ӡ100~200֮�������}
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
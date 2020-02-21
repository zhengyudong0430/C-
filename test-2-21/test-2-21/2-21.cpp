//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
#include<stdio.h>
//int main()
//{
//	float i = 0;
//	float ret = 0;
//	float sum1 = 0;
//	float sum2 = 0;
//	for (i = 1; i <= 99; i += 2)
//	{
//		
//		sum1 += 1/i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		
//			sum2 += 1 / i;
//	
//	}
//	ret = sum1- sum2;
//
//	printf("%f", ret);
//	return 0;
//}
//int main()
//{
//	float  i, flag = 1;
//	 
//	float ret=0;
//	for (i = 1; i <= 100; i++)
//	{
//		ret += flag*(1 / i);
//			flag = -flag;
//	}
//
//	printf("%f", ret);
//
//
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//
//	}
//	printf("%d", count);
//
//	return 0;
//}
//
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 0;
	scanf_s("%d", &key);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid]>key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left>right)
	
	{
		printf("没找到");
	}
	return 0;
}

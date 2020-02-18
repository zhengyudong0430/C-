//#include<stdio.h>
//void swapArr(int arr[], int sz)//从左边找到第一个偶数，从右边找到第一个奇数，交换
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//}
//void printArr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swapArr(arr, sz);
//	printArr(arr, sz);
//	return 0;
//}
// 模拟实现库函数strcpy
#include<stdio.h>
//void my_strcpy(char *dest, char *src)
//{
//	while (*src !='\0')
//	{
//
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//
//}
//
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}
//模拟实现库函数strlen

//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(NULL != str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int  main()
//{
//	char  arr[] = "hello world";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
#include<stdio.h>
#include<assert.h>
int my_strlen( const char *str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != 0)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello bit";
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}
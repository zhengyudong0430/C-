//������A�е����ݺ�����B�е����ݽ��н�����������һ����

#include<stdio.h>
//int main()
//{
//	int arr1[3] = { 1,2, 3 };
//	int arr2[3] = { 4, 5, 6 };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr1[i]);
//		
//	}for (i = 0; i < 3; i++)
//	{
//		
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}
//����һ���������飬��ɶ�����Ĳ���

//ʵ�ֺ��� init() ��ʼ������Ϊȫ0
//ʵ�� print()  ��ӡ�����ÿ��Ԫ��
//ʵ�� reverse()   �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//
//void reverse(int arr[], int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while(left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//
//	
//	}
//
//}
//void print(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//	
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//
//}
//void init(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//
//}
//int main()
//{
//	
//	int arr[] = { 1, 2, 3, 4 ,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
// ʵ��һ�������������ð������
void bubble_sort(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{  
   
	int arr[6] = { 6,5,4,3,2,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
//void bubble_sort(int arr[], int sz)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)
//
//	{
//
//		int j = 0;
//
//		for (j = 0; j < sz - 1 - i; j++)
//
//		{
//
//			if (arr[j]>arr[j + 1])
//
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 7, 6, 5, 4, 8, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//

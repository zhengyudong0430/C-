#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int i = 0;
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
	
		printf("%d ", *p);
		p++;
	}


	return 0;
}
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int n = 0;
//		for (n = 2; n < i; n++)
//		{
//		
//			if (i%n == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int n = 0;
//		for (n = 2; n <= i / 2; n++)
//		{
//			if (i%n == 0)
//			{
//				break;
//			}
//		}
//		if (n > i / 2)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//	
//		int n = 0;
//		for (n = 2; n <= sqrt((double)i); n++)
//		{
//			if (i%n == 0)
//			{
//				break;
//			}
//		}
//		if (n > sqrt((double)i))
//		{
//			printf("%d", i);
//		}
//	}
//
//
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int n = 0;
//		for (n = 2; n <= sqrt((double)i); n++)
//		{
//		
//			if (i%n == 0)
//			{
//				break;
//			}
//		}
//		if (n > sqrt((double)i))
//		{
//
//			printf("%d", i);
//		}
//	}
//
//	return 0;
//}
//дһ�����룺��ӡ1000�굽2000��֮�����

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//	
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//	
//	
//	}
//
//	return 0;
//}
//int main()
//{
//	int i, j, k,n,x,y, tmp;
//	printf("��������������");
//	scanf_s("%d %d", &i, &j);
//	x = i;
//	y = j;
//	if (i > j)
//	{
//
//		tmp = i;
//		i = j;
//		j = tmp;
//	}
//	while (i%j)
//	{
//		k = i%j;
//		i = j;
//		j = k;
//	
//	}
//	n = x*y / k;
//	printf("���Լ��=%d", k);
//	printf("��С������=%d", n);
//
//	return 0;
//
//
//}
//int main()
//{
//	int a, b,x,y;
//	printf("��������������");
//	scanf_s("%d %d", &a, &b);
//	x = a, y = b;
//	while (a != b)
//	{
//		while (a > b)
//		{
//			a -= b;
//		}
//		while (a < b)
//		{
//			b -= a;
//		}
//	
//	}
//	printf("���Լ��=%d", a);
//	printf("��С������=%d", x*y / a);
//	return 0;
//}
//���9 * 9�˷��ھ���
//int main()
//{
//	int i,j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ", j, i, j*i);
//		
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//��10 �����������ֵ

int main()

{

	int a[10];

	int i, max;

	for (i = 0; i <= 9; i++)

	{

		scanf_s("%d", &a[i]);

	}

	max = a[0];

	for (i = 0; i <= 9; i++)

	{

		if (max < a[i])

			max = a[i];

	}

	printf("���ֵΪ%d", max);



	return 0;

}
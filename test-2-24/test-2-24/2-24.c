#include<stdio.h>
 int main()
{
	int line = 0;
	scanf_s("%d", &line);//7
	//�ȴ�ӡ�ϰ벿��
	int i;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//�ڴ�ӡ��벿��

	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)

		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)

		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


	
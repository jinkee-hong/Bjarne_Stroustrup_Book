#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000

int main()
{
	int N = 0, M = 0;
	scanf("%d", &N);
	scanf("%d", &M);

	int ar[MAX] = { 0, };
	int temp = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &ar[i]);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (ar[j] < ar[j + 1])
			{
				temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;
			}
		}
	}

	printf("%d",  ar[M - 1]);
	return 0;
}
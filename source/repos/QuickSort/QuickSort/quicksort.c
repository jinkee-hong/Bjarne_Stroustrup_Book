#include <stdio.h>

void swap(int ar[],int idx1,int idx2)
{
	int temp = ar[idx1];
	ar[idx1] = ar[idx2];
	ar[idx2] = temp;
}


int PivotSearch(int a[], int left, int right)
{
	int samples[3] = { left, (left + right) / 2 , right };

	if (a[samples[0]] > a[samples[1]])
	{
		Swap(samples, 0, 1);
	}

	if (a[samples[1]] > a[samples[2]])
	{
		Swap(samples, 1, 2);
	}

	if (a[samples[0]] > a[samples[1]])
	{
		Swap(samples, 0, 1);
	}

	return samples[1];
}

int Partition(int a[],int left, int right)
{
	int pivot = PivotSearch(a,left,right);
	int low = left + 1;
	int high = right;
	printf("피벗 : %d \n", pivot);
	while (low <= high)
	{
		while (pivot >= a[low] && low <= right)
		{
			low++;
		}

		while (pivot <= a[high] && high >= (left+1))
		{
			high--;
		}

		if (low <= high)
		{
			swap(a, low, high);
		}
	}
	//교차 되었다면 
	swap(a, left, high);

	return high; //High에 Pivot 이 담기고 그 기준으로 작은거 큰거가 정렬 되니까 high를 던져야한다.
}

int QuickSort(int a[], int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(a, left, right);
		QuickSort(a, left, pivot - 1);
		QuickSort(a, pivot + 1, right);
	}
	return 0;
}

int main()
{
	int ar[7] = { 3,2,4,1,7,6,5 };
	
	int len = sizeof(ar) / sizeof(int);

	QuickSort(ar, 0, sizeof(ar)/sizeof(int)-1);

	for (int i = 0; i < len; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	return 0;
}
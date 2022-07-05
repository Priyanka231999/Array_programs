#include<stdio.h>
int main()
{
	int arr[100], brr[100], crr[100]; int n, j, counter1 = 0, counter2 = 0;
	printf("Enter number=\n");
	scanf("%d", &n);
	printf("Enter elements=\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("arr Array Elements\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("After coping elements in Array brr =\n");
	for (int i = 0; i < n; i++)
	{
		brr[i] = arr[i];
		printf("%d\n", brr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == brr[j])
			{
				counter1++;
				crr[j] = counter1;
			}
		}
		counter1 = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (crr[i] == 2)
		{
			counter2++;

		}

	}
	printf("\n Total Duplicate Elements %d\n", counter2);
	return 0;
}
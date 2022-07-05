//merge two arrays

#include<stdio.h>

int main()
{
	int arr1[20], arr2[20], arr3[20]; int size1 ,size2,  size3;
	printf("Enter size of arr1:");
	scanf("%d", &size1);
	printf("Enter size of arr2:");
	scanf("%d", &size2);
	printf(" enter element of  arr1:\n");
	for (int i = 0; i <= size1 - 1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf(" element of  arr1:\n");
	for (int i = 0; i <= size1 - 1; i++)
	{
		printf("%d \n", arr1[i]);
	}
	printf("enter element of  arr2:\n");
	for (int i = 0; i <= size2 - 1; i++)
	{
		scanf("%d", &arr2[i]);
	}
	printf(" element of  arr2:\n");
	for (int i = 0; i <= size2 - 1; i++)
	{
		printf("%d  \n", arr2[i]);
	}
	size3 = size1 + size2;
	printf("array using two array is:\n");
	//calculating size for merging array
	//merge array 
	for (int i = 0; i < size1; i++)
	{
		
		arr3[i] = arr1[i];
		
	}
	for (int i = 0; i < size1; i++)
	{

		printf("%d ", arr3[i]);

	}
	for (int i = 0; i < size2; i++)
	{

		arr3[(size1)+i] = arr2[i];

	}
	for (int i = 0; i < size2; i++)
	{

		printf("%d ", arr3[(size1)+ i]);

	}
}
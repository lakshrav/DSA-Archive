#include <stdio.h>
#define SIZE 96

void merge(int a[], int l, int mid, int h)
{
	int b[SIZE]; //auxiliary array
	int i, j, k;
	i = k = l;
	j = mid + 1;
	
	while (i <= mid && j <= max)  {
		if (a[i] < a[j])  {
			b[k++] = 

int main ()
{
	int n;
	printf("Enter number of inputs: ");
	scanf("%d", &n);
	int A[n], int i;
	
	printf("Enter array values: ");
	for (i = 0; i < n; ++i)  {
		scanf("%d", &A[i]);
	}	
	printf("Enter 1 for iterative and 0 for recursive mergesort: ");
	scanf("%d", &i);
	
	if (i)  {
		//Iterative
	}
	else  {
		//Recursive
	}
	
	printf("The sorted array is: ");	
	for (i = 0; i < n; ++i)  {
		printf("%d ", A[i]);
	}
	return 0;
}

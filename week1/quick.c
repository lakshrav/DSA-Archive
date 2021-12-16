//QUICKSORT 


/* doubt - passed quicksort function with (n-1) as h then j will point to the last element. It gave partially correct output only*/

#include <stdio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
	
int partition(int A[], int l, int h)
{
	int i, j;
	i = l;
	j = h;
	
	do  {
		do {i++;} while(A[l] >= A[i]);
		do {j--;} while(A[l] < A[j]);
		if (i < j) //this extra condition is needed so as to check after //incrementing i and j
			swap(&A[i], &A[j]);
	}while(i < j);
	
	swap(&A[l], &A[j]);
	return j;
}

void quicksort(int A[], int l, int h)
{
	if ( l >= h)
		return;
	else {
		int j = partition(A, l, h);
	
		quicksort(A, l, j);
		quicksort(A, j + 1, h);
	}
}

int main ()
{
	int n;
	printf("Enter number of inputs: ");
	scanf("%d", &n);
	int A[n];
	
	printf("Enter array values: ");
	
	for(int i = 0; i < n; ++i)  {
		scanf("%d", &A[i]);
	}
	quicksort(A, 0, n);
	printf("The array is: ");
	for(int i = 0; i < n; ++i)  {
		printf("%d ", A[i]);
	}
	
	return 0;
}

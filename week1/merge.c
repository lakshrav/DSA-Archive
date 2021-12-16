#include <stdio.h>
#define SIZE 96

void merge(int a[], int l, int mid, int h)
{
	int b[SIZE]; //auxiliary array
	int i, j, k;
	i = l;
	k = l;	
	j = mid + 1;
	
	while (i <= mid && j <= h)  {
		if (a[i] < a[j]) 
			b[k++] = a[i++]; 
		else 
			b[k++] = a[j++];
	}
	for (; i <= mid; ++i)
		b[k++] = a[i];
	for (; j <= h; ++j) 
		b[k++] = a[j];
	for (i = l; i <= h; ++i)
		a[i] = b[i];
}

void mergesort_i(int a[], int n)
{
	int i, q, l, mid, h;
	
	for (q = 2; q <= n; q *= 2)  {
		for (i = 0; i + q <= n; i += q)  {
			l = i;
			h = i + q - 1;
			mid = (l + h)/2;
			merge(a, l, mid, h);
		}
	}
	// outer for loop exited when q = q * 2 => q/2 > n
	//to check for count of 10 elements etc. one more for loop must be there
	
	if (q / 2 < n)  //16/2 < 10
	{
		merge(a, 0, q/2 - 1, n);
	}
}

void mergesort_rec(int a[], int l, int h)
{
	if (l >= h)  
		return ;
	else  {
		int mid = (l + h) / 2;
		mergesort_rec(a, l, mid);	
		mergesort_rec(a, mid + 1, h);
		merge(a, l, mid, h);
	}	
}

int main ()
{
	int n;
	printf("Enter number of inputs: ");
	scanf("%d", &n);
	int A[n], i;
	
	printf("Enter array values: ");
	for (i = 0; i < n; ++i)  {
		scanf("%d", &A[i]);
	}	
	printf("Enter 1 for iterative and 0 for recursive mergesort: ");
	scanf("%d", &i);
	
	if (i == 1)  {
		//Iterative
	}
	else  {
		//Recursive
		mergesort_rec(A, 0, n - 1);
	}
	
	printf("The sorted array is: ");	
	for (i = 0; i < n; ++i)  {
		printf("%d ", A[i]);
	}
	return 0;
}

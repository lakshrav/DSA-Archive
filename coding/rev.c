#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void rev_iter(int a[], int n)
{
	int i, j;
	i = 0, j = n - 1;
	while (i < j)  {
		swap(&a[i], &a[j]);
		i++, j--;
	}
}
void rev_rec(int a[], int i, int j)
{
	if (i < j)  {
		swap(&a[i], &a[j]);
		rev_rec(a,i+1, j-1);
	}
}

void show (int a[], int n)
{
	int i;
	for (i = 0; i < n; ++i) 
		printf("%d ", a[i]);
	printf("\n");
}
int main ()
{
	int n;
	scanf("%d", &n);
	int a[n], i;
	for (i = 0; i < n; ++i)  
		scanf("%d", &a[i]);
	rev_iter(a, n);
	show(a, n);
	rev_rec(a, 0, n - 1);
	show(a, n);
	return 0;
}


#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;	
	*b = temp;
}
void move(int a[], int n)
{
	int i, j = 0;
	for (i = 0; i < n; ++i)  {
		if (a[i] < 0)  {
			if (i != j)  
				swap(&a[i], &a[j]);
			j++;
		}
	}
}

void show(int a[], int n)
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
	move(a, n);
	show(a, n);
	return 0;
}

#include <stdio.h>

int kth_small(int a[], int n)
{
	
int main ()
{
	int n, k;
	scanf("%d",  &n);
	scanf("%d", &k);
	int a[n], i;
	for (i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	printf("%d\n",kth_small(a, n));
	return 0;
}
	

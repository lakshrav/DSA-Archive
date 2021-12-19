#include <stdio.h>
#include <limits.h>

int max(int a, int b)
{
	return a > b? a:b;
}
int min(int a, int b)
{
	return a < b? a:b;
}
void min_max(int a[], int n)
{
	int i;
	int l = INT_MAX, h = INT_MIN;
	for (i = 0; i < n; ++i)  {
		if (a[i] < l)
			l = a[i];
		if (a[i] > h)
			h = a[i];
	}
	printf("%d %d\n", l, h);
}
int main ()
{
	int n;
	scanf("%d", &n);
	int a[n], i;
	for (i = 0; i < n; ++i) 
		scanf("%d", &a[i]);
	min_max(a, n);
	return 0;
}

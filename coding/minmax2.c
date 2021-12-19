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
	if (n % 2) //n is odd
		l = h = a[0];
	else  {
		
	for (i = 0; i+1 <= n; ++i)  {
		if (a[i] > a[i+1] )  {
			if (a[i] > max)  {
				max = a[i];
			}
			
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

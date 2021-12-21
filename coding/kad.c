#include <stdio.h>
#include <limits.h>

int max(int a, int b)
{
	return a > b? a:b;
}
int kadane(int a[], int n)
{
	int i, cur_max, total_max;
	total_max = INT_MIN, cur_max = 0;
	for (i = 0; i < n; ++i)  {
		cur_max += a[i];
		total_max = max(total_max, cur_max);
		cur_max = max(0, cur_max);
	}
	return total_max;
}
int main ()
{
	int n;
	scanf("%d", &n);
	int a[n], i;
	for (i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	printf("%d\n", kadane(a, n));
	return 0;
}

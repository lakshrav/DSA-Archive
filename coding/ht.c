#include <stdio.h>
#include <limits.h>
int main ()
{
	int n, k;
	scanf("%d%d", &n, &k);
	int a[n], i;
	for (i = 0; i < n; ++i)  
		scanf("%d", &a[i]);
	int sum = 0;
	int mean;
	
	for (i = 0; i < n; ++i)  {
		sum += a[i];
	}
	mean = sum/n;
	for (i = 0; i < n; ++i)  {
		if (a[i] > mean && a[i] - k > 0)
			a[i] = a[i] - k;
		else 
			a[i] = a[i] + k;
	}
	int max = INT_MIN, min = INT_MAX;
	for (i = 0; i < n; ++i)  {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("%d\n", max - min);
	return 0;
}

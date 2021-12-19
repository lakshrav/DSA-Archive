#include <stdio.h>
#include <limits.h>

int main ()
{
	long long int t, n, p, i, j, flag = 0;
	scanf("%lld", &t);
	long long int res[t];
	for (p = 0; p < t; ++p)  {
		flag = 0;
		scanf("%lld", &n);
		long long int a[n];
		for (i = 0; i < n; ++i)   
			scanf("%lld", &a[i]);
		int max = INT_MIN;
		
		for (i = 0; i < n; ++i)  {
			if (a[i] > max)  
				max = a[i];
		}
		int d = 2;
		for (i = 0; i < n; ++i)  {
			if ((a[i] % d == 0 && a[i+1]%d == 0)||(a[i]%d != 0 && a[i+1]%d != 0)) {
				d++;	
				if (d > max)
					break;
			}
		}
		if (

	}
	for (i = 0; i < t; ++i)  {
		printf("%lld\n", res[i]);
	}
	return 0;
}
	

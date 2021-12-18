#include <stdio.h>

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
		for (i = 0; i < n; ++i)  {
			for (j = 0; j + 1 <=n; ++j)  {
				if ((a[j] % a[i] == 0 && a[j + 1]%a[i] == 0)||(a[j]%a[i] != 0 && a[j+1]%a[i] != 0))
					break;
					printf("loop\n");
			}
			printf("%lld", j);
			if (j + 1 > n)  {
				res[p] = a[i];
				flag = 1;
				printf("hi");
				break;
			}
		}
		if (flag == 0)  {
			res[p] = 0;
		}
	}
/*	for (i = 0; i < t; ++i)  {
		printf("%lld\n", res[i]);
	}*/
	return 0;
}
	

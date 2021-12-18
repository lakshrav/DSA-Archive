#include <stdio.h>

int main ()
{
	int t, n, p, i, j, flag = 0;
	scanf("%d", &t);
	int res[t];
	for (p = 0; p < t; ++p)  {
		flag = 0;
		scanf("%d", &n);
		int a[n];
		for (i = 0; i < n; ++i)  
			scanf("%d", &a[i]);
		for (i = 0; i < n; ++i)  {
			for (j = 0; j + 1 <=n; ++j)  {
				if (a[j] % a[i] == 0 && a[j + 1]%a[i] == 0)
					break;
				else if (a[j]%a[i] != 0 && a[j+1]%a[i] != 0)
					break;
			}
			if (j + 1 > n)  {
				res[p] = a[i];
				flag = 1;
				break;
			}
		}
		if (flag == 0)  {
			res[p] = 0;
		}
	}
	for (i = 0; i < t; ++i)  {
		printf("%d\n", res[i]);
	}
	return 0;
}
	

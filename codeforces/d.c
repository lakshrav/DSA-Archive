#include <stdio.h>

int in(int n, int a[])
{
	int i = 0;
	if(a[i] != a[i + 1] && a[i] != a[i + 2])
		return i+1;
	if(a[n - 1] != a[n - 2] && a[n - 1] != a[n - 3])
		return n;
	for(i = 1; i <= n - 2; ++i)  {
		if (a[i] != a[i - 1] && a[i] != a[i + 1])
			return i+1;
		}
	return i+1;
}
int main ()
{
	int t, n;
	scanf("%d", &t);
	int res[t];
	for (int i = 0; i < t; ++i)  {
		scanf("%d", &n);
		int a[n];
		for (int j = 0; j < n; ++j) 
			scanf("%d", &a[j]);
		res[i] = in(n, a);
	}
	for (int i = 0; i < t; ++i)
		printf("%d\n", res[i]);
	
	return 0;
}

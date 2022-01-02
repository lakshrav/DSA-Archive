#include <stdio.h>

int main ()
{
	int n, num, i;
	scanf("%d%d", &n, &num);
	int a[n - 1];
	for(i = 0; i < n - 1; ++i)
		scanf("%d", &a[i]);
	i = 0;
	while (i < n - 1)  {
		if (i + 1 == num)  {
			printf("YES");
			return 0;
		}
		i += a[i];
	}
	printf("NO");
	return 0;
}

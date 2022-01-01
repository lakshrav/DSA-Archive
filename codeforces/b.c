#include <stdio.h>
#include <math.h>

int count(int n)
{
	int c = 0;
	while (n/2)  {
		if (n%2)
			c++;
		n = n/2;
	}
	return c+1;
}
int main ()
{
	int n;
	scanf("%d", &n);
	printf("%d", count(n));
	return 0;
}

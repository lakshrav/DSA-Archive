//UNION AND INTERSECTION OF TWO SORTED ARRAYS
#include <stdio.h>

void un(int a[], int b[], int m, int n)
{
	int i, j, k;
	i = j = k = 0;
	while (i < m && j < n)  {
		if (a[i] == a[i-1] && i)
			i++;
		if (b[j] == b[j-1] && j)
			j++;
		if (a[i] < b[j])  {
			printf("%d ", a[i]);
			i++;
		}
		
		else if (a[i] > b[j])  {
			printf("%d ", b[j]);
			j++;
		}
		else  {
			printf("%d ",a[i]);
			i++, j++;
		}
	}
	for (; i < m; ++i)  {
		if (a[i] != a[i - 1] && i != 0)  {
			printf("%d ", a[i]);
 		}
	}
	for (; j < n; ++j)  {
		if (b[j] != b[j - 1] && j != 0)  {
			printf("%d ", b[j]);
 		}
	}
}
	
void inter(int a[], int b[], int m, int n)
{
	int i, j;
	i = j = 0;
	while (i < m && j < n)  {
		if (a[i] == a[i-1])
			i++;
		if (b[j] == b[j-1])
			j++;
		if (a[i] ==b[j])  {
			printf("%d ", a[i]);
			i++, j++;
		}
		else if (a[i] < b[j])  {
			i++;
		}
		else 
			j++;
	}
		
}		
int main ()
{
	int m, n, i, j;
	scanf("%d%d", &m, &n);
	int a[m], b[n];
	
	for (i = 0; i < m; ++i)  
		scanf("%d", &a[i]);

	for (i = 0; i < n; ++i)  
		scanf("%d", &b[i]);

	un(a,b,m,n);
	printf("\n");
	inter(a, b, m, n);
	return 0;

}

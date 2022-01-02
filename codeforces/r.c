#include <stdio.h>
#include <limits.h>

int absol(int a, int b)
{
	return (a - b < 0 ? (a - b)* (-1) : a - b);
}
void merge(int a[], int l, int mid, int h)
{
	int b[h + 1];
	int i = l, k = l, j = mid + 1;
	while (i <= mid && j <= h)  {
		if (a[i] < a[j])
			b[k++] = a[i++];
		else 
			b[k++] = a[j++];
	}
	for(; i <= mid; ++i) 
		b[k++] = a[i];
	for(; j <= h; ++j)
		b[k++] = a[j];
	for (i = l; i <= h; ++i)
		a[i] = b[i];
}
void mergesort(int a[], int l, int h)
{
	if (l < h)  {
		int mid = (l + h)/2;
		mergesort(a, l, mid);
		mergesort(a, mid + 1, h);
		merge(a, l, mid, h);
	}
}
int main ()
{
	int t, i, n, j;
	scanf("%d", &t);
	int res[t];
	for(i = 0; i < t; ++i)  {		
		scanf("%d", &n);
		int a[n];
		for(j = 0; j < n; ++j)
			scanf("%d", &a[j]);
		mergesort(a, 0, n - 1);
		int min = INT_MAX;
		for (j = 0; j < n - 1; ++j)  {
			if (absol(a[j],a[j + 1]) < min)
				min = absol(a[j],a[j + 1]);
		}
		res[i] = min;
	}
	for (i = 0; i < t; ++i)
		printf("%d\n", res[i]);
	return 0;
}


















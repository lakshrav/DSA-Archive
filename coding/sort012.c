#include <stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int a[], int n)
{
	int l, h, mid;
	l = 0;
	mid = 0;
	h = n - 1;
	int i = 0;	
	while(mid <= h && i < n)  {
		switch(a[mid])  {
			case 0:  {
				swap(&a[l++], &a[mid++]);
				break;
			}
			case 1:	 {
				mid++;
				break;
			}
			case 2:  {
				swap(&a[mid], &a[h--]);
				i--;
				break;
			}
		}
		i++;
		
	}
}
int main ()
{
	int n;
	scanf("%d", &n);
	int a[n], i;
	for (i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	sort(a, n);
	for (i = 0; i < n; ++i)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
 

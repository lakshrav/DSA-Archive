#include <stdio.h>
#define SIZE 100

void merge(float a[], int l, int mid, int h)
{
	float b[SIZE];
	int i, j, k;
	i = l;
	k = l;
	j = mid;

	while (i <= mid && j <= h)  {
		if (a[i] < a[j])  
			b[k++] = a[i++];
		else 
			b[k++] = a[j++];
	}
	for (; i <= mid; ++i)  
		b[k++] = a[i];

	for (; j <= h; ++j)  
		b[k++] = a[j];
	for (i = l; i <= h; ++i)  
		a[i] = b[i];
}
	
void mergesort(float a[],int l, int h)
{
	if (l < h)  {
		int mid = (l + h)/2;
		mergesort(a, l, mid);
		mergesort(a,  mid+1, h);
		merge(a, l, mid, h);
	}
}
		
int main ()
{
	int n;
	printf("Enter number of entries: ");
	scanf("%d", &n);
	int i, w[n], p[n]; 
	float pw[n];
	printf("Enter the weights of the objects: ");
	
	for (i = 0; i < n; ++i)  {
		scanf("%d", &w[i]);
	}

	printf("Enter the profits of the objects: ");
	
	for (i = 0; i < n; ++i)  {
		scanf("%d", &p[i]);
	}
	for (i = 0; i < n; ++i)  {
		pw[i] = (float) p[i] / w[i];
	}
	//sorting the pw array
	int j;
	for (i = 0; i < n; ++i)  
		printf("%.2f\n",pw[i]); 
	int max, sum = 0;
	printf("Enter the maximum capacity: ");
	scanf("%d", &max);
	int final[n];
	for (i = 0; i < n; ++i)  {	
		if (sum > max)  {
			break;
		}
		sum = sum + w[n - i];
		final[i] = 

		

}


	 
	

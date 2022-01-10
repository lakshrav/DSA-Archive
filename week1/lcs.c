//LONGEST COMMON SUBSEQUENCE

#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
	return (a > b) ? a : b;
}

void find_lcs(char a[], char b[])
{
	
	int m, n;
	m = strlen(a);
	n = strlen(b);
	int lcs[m + 1][n + 1];
	int size = m < n? m : n; //returns the minimum length of the two

	char final[size];	
	int i, j, k = 0;

	for (i = 0; i < m + 1; ++i) { 
		for (j = 0; j < n + 1; ++j) {
			lcs[i][j] = 0;
		}
	}
	for (i = 0; i < m + 1; ++i)  {
		for (j = 0; j < n + 1; ++j)  {
			if (i == 0 || j == 0)
				lcs[i][j] = 0;
			else if (a[i - 1] == b[j - 1]) {
				lcs[i][j] = lcs[i - 1][ j - 1] + 1;
			}
			else 
				lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
		}
	}
	i = m, j = n;
	int num = lcs[m][n];
	while (i > 0)  {
		while (j > 0)  {
			if (lcs[i-1][j-1] == lcs[i][j] - 1)  {
				final[k++] = b[j-1];	
				i--, j--;
				if (!lcs[i][j])
					break;
			}
			else  
				j--;
		}
		if (lcs[i][j] == 0)
			break;
		i--, j = n;
	}
	final[k] = '\0'; 
	for (i = k - 1; i >= 0 ; --i)  
		printf("%c", final[i]);
	printf("\n");
}

int main ()
{
	char a[100], b[100];
	printf("Enter first string: ");
	scanf("%s%*c", a);
	printf("Enter second string: ");
	scanf("%s%*c", b);	
	find_lcs(a, b);
	
	return 0;
}

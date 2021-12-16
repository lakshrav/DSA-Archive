//LONGEST COMMON SUBSEQUENCE

#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int find_lcs(char a[], char b[])
{
	int m, n;
	m = strlen(a);
	n = strlen(b);
	int lcs[m + 1][n + 1];
	int i, j;
	for (i = 0; i < m + 1; ++i) { 
		for (j = 0; j < n + 1; ++j) {
			lcs[i][j] = 0;
		}
	}
	for (i = 0; i < m + 1; ++i)  {
		for (j = 0; j < n + 1; ++j)  {
			if (i == 0 || j == 0)
				lcs[i][j] = 0;
			else if (a[i - 1] == b[j - 1])
				lcs[i][j] = lcs[i - 1][ j - 1] + 1;
			else 
				lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
		}
	}
	return lcs[m][n];
}

int main ()
{
	char a[100], b[100];
	printf("Enter first string: ");
	scanf("%s%*c", a);
	printf("Enter second string: ");
	scanf("%s%*c", b);	
	printf("LCS is %d\n", find_lcs(a, b));
	
	return 0;
}








	

	

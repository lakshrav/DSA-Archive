#include <stdio.h>
#include <limits.h>
#define I INT_MAX

int cost[8][8] =  {
		{I, I, I, I, I, I, I, I},
		{I, I, 25, I, I, I, 5, I},
		{I, 25, I, 12, I, I, I, 10},
		{I, I, 12, I, 8, I, I, I},
		{I, I, I, 8, I, 16, I, 14},
		{I, I, I, I, 16, I, 20, 18},
		{I, 5, I, I, I, 20, I, I},
		{I, I, 10, I, 14, 18, I, I}};

int t[2][6];
int near[8] = {I, I, I, I, I, I, I, I};

int findmin(int a, int b)
{
	return a < b ? a : b;
}

int main ()
{
	int i, j, k, u, v;
	int n = 7;
	int min = I;
	
	for (i = 1; i <= n; ++i)  {
		for (j = 1; j <= n; ++j)  {
			if (cost[i][j] < min)  {
				min = cost[i][j];	
				u = i, v = j;
			}
		}
	}
	t[0][0] = u, t[1][0] = v;
	near[u] = 0, near[v] = 0;
	
	for (i = 1; i <= n; ++i)  {
		if (near[i])  {
			if (cost[u][i] < cost[i][v])
				near[i] = u;
			else 
				near[i] = v;
		}
	}
	
	for (i = 1; i < n - 1; ++i)  {
		min = I;
		for (j = 1; j <= n; ++j)  {
			if (near[j] && cost[j][near[j]] < min)  {						min = cost[j][near[j]];
				k = j;
			}
		}
		t[0][i] = k;
		t[1][i] = near[k]; //connects to the previous
		near[k] = 0; //need not put near[near[k]] = 0 since it is already included

		for (j = 1; j <= n; ++j)  {
			if (near[j] && cost[j][k] < cost[j][near[j]]) 
				near[j] = k;
		}
		
	}
	
	//display

	for (j = 0; j < n - 1; ++j)  
		printf("%d %d\n", t[0][j], t[1][j]);
	return 0;
}

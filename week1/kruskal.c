#include <stdio.h>
#include <limits.h>
#define I INT_MAX

int edges[3][9] = {
	{1, 1, 2, 2, 3, 4, 4, 5, 5},
	{2, 6, 3, 7, 4, 5, 7, 6, 7},
	{25, 5, 12, 10, 8, 16, 14, 20, 18}};
	
int set[8] = {-1};
int included[9] ={0};
int t[2][6];
	

void join(int x, int y)
{
	if (set[x] < set[y])  {
		set[x] += set[y];
		set[y] = x;
	}
	else  {
		
		set[y] += set[x];
		set[x] = y;
	}
}

int par(int x)
{
	int a = x, b = 0;
	while (set[a] > 0)  
		a = set[a];
/*	while (x != a)  {
		b = set[x];
		set[x] = a;
		x = b;
	}*/
	return a;
}


int main()
{
	int i = 0, j, k, u, v, min = I, n = 7, e = 9;
	while (i < n - 1)  {
		min = I;
		for (j = 0; j < e; ++j)  {
			if (included[j] == 0 && edges[2][j] < min)  {
				min = edges[2][j];
				u = edges[0][j], v = edges[1][j];
				k = j;
			}
		}
		if (par(u) != par(v))  {
			t[0][i] = u, t[1][i] = v;
			join(par(u), par(v));
			i++;
		}
		included[k] = 1;
	}
	for (i = 0; i < n - 1; ++i) 
		printf("%d %d\n", t[0][i], t[1][i]);
	return 0;
} 

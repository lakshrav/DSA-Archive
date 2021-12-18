#include <stdio.h>
#include <limits.h>
#define I INT_MAX

int edges[3] = {
	{1, 1, 2, 2, 3, 4, 4, 5, 5},
	{2, 6, 3, 7, 4, 5, 7, 6, 7},
	{25, 5, 12, 10, 8, 16, 14, 20, 18}};
	
int set[8] = {-1};
int included[9] ={0};
int t[2]][6];
	

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
	int 

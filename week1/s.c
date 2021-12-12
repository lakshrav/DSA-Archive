#include <stdio.h>

void dijkstra(int n, int G[][n], int source, int t[][n-1]) 
{
	
int main ()
{
	int G[][] = {
		{0, 0, 0, 0, 0, 0},
		{0, 0, 10, 0, 30, 100},
		{0, 0, 0, 50, 0, 0},
		{0, 0, 0, 0, 0, 10},
		{0, 0, 0, 20, 0, 60},
		{0, 0, 0, 0, 0, 0}};
	int source = 1;
	int t[2][5];
	
	dijkstra(6, G, source, t);
	int i;
	for (i = 0; i < 5; ++i)  {
		printf("%d %d\n", t[0][i], t[1][i]);
	}
	return 0;
}
		

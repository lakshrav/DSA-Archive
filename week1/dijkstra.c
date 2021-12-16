#include <stdio.h>
#include <limits.h>

int min_dist(int n, int dist[n], int included[n])
{

	int min = INT_MAX;
	int min_v;
	
	for (int i = 1; i < n; ++i)  {
		if (included[i] == 0 && dist[i] <= min)  {
			min = dist[i];
			min_v = i;
		}
	}
	return min_v;
}

void dijkstra(int n, int G[][n], int source, int distance[n]) 
{
	int included[n];
	int i;
	int min;
	for (i = 1; i < n; ++i)  {
		distance[i] = INT_MAX;
		included[i] = 0;
	}
	distance[source] = 0;
	included[source] = 1;
	
	for (i = 0; i < n - 2; ++i)  {
		min = min_dist(n, distance, included);
		included[min] = 1;
	
		for (int j = 1; j < n; ++j)  {
			if (included[j] == 0 && G[min][j]  && distance[min] != INT_MAX && distance[min] + G[min][j] < distance[j]) 
				distance[j] = distance[min] + G[min][j];
		}
	}
	
	for (i = 1; i < n; ++i)  {
		printf("%d ", included[i]);
	}
}	
	
int main ()
{
	int G[7][7] = {
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 2, 4, 0, 0, 0},
		{0, 0, 0, 1, 7, 0, 0},
		{0, 0, 0, 0, 0, 3, 0},
		{0, 0, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 2, 0, 5},
		{0, 0, 0, 0, 0, 0, 0}};
	int dist[7];
	dijkstra(7, G, 1, dist);
	
	for (int i = 1; i < 7; ++i)  
		printf("%d ", dist[i]);	
	
	return 0;
}
		

#include <stdio.h>
#include <string.h>
#include <limits.h>

int max(int a, int b)
{
	return a > b? a:b;
}
int main ()
{
	char st[100];
	scanf("%s%*c", st);
	int n = strlen(st);
	
	int i, curr, total, prev;
	curr = 0, total = INT_MIN;

	prev = st[0];
	for (i = 0; i < n; ++i)  {
		if (prev == st[i])  
			curr++;
		else 
			curr = 1;
		prev = st[i];
		total = max(total , curr);
	}
	if (total >= 7)  
		printf("YES");
	else 
		printf("NO");
	return 0;
}
	
			
	
	

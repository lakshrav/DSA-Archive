#include <stdio.h>
#include <string.h>

int main ()
{
	char st[100];
	scanf("%s%*c", st);
	int n = strlen(st);
	
	int i, total, current, prev;
	total = 0;
	prev = current = st[0];
	for (i = 0; i < n; ++i)  {
		current = st[i];
		if (prev == current)  
			total++;
		else 
			total = 1;
		prev = current;
	}
	if (total >= 7)  
		printf("YES");
	else 
		printf("NO");
	return 0;
}
	
			
	
	

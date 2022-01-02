#include <stdio.h>

int main ()
{
	int r, col;
	scanf("%d", &r);
	scanf("%d", &col);
	char a[r][col]; 
	int i, j;
	
	for(i = 0; i < r; ++i)  {
		for(j = 0; j < col; ++j)  {
			scanf("%c%*c", &a[i][j]);
		}
	}
	for (i = 0; i < r; ++i)  {
		for(j = 0; j < col; ++j)  {
			printf("%c ", a[i][j]);
		}
	}
	int flag = 0;
	for (i = 0; i < r; ++i)  {
		for(j = 0; j < col; ++j)  {
			if(a[i][j] == 'C' || a[i][j] == 'Y' || a[i][j] == 'M')  {
				printf("#Color");
				return 0;
			}		
			
		}
	}
	if (flag == 0)
		printf("#Black&White");
	return 0;
}

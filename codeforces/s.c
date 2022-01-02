#include <stdio.h>
#include <string.h>

void remdup(char s[])
{
	int len = strlen(s);
	int count = 0, i = 0, x, size = 0;
	while (i < len)  {
		x = str[i] - 97;
		if((count & (1 << x)) == 0)  {//unset
			str[size] = x - 'a';
			count = count | (1 << x);
			size++;
		}
		i++;
	}
}
void sort(char s[])
{
	int len = strlen(s), i;
	for (i = 0; i < len; ++i)  {	
		

int main ()
{
	char str[] = "hello";
	remdup(str);
	sort(str, 5);
	printf("%s", str);
	return 0;
}

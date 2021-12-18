#include <stdio.h>

int main ()
{
    int n, index1, index2;
    scanf("%d", &n);
    int a[n],i;
    for (i = 0; i < n; ++i)  {
        scanf("%d", &a[i]);
    }
    
    int c1 = 0, c2 = 0;
    for (i = 0; i < n; ++i)  {
        if (a[i] % 2 == 0) {
            c1++;
            index1 = i + 1;
        }
        else {
            c2++;
            index2 = i + 1;
        }
    }
    if (c1 == 1) {
        printf("%d", index1);
    }
    else 
        printf("%d", index2);
    return 0;
}

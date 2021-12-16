#include <stdio.h>
#include <limits.h>
int max(int a, int b)
{
   if (a > b)
      return a;
   else
      return b;
}
int findSum(int arr[], int size)
{
   int current_max, total_max;
   current_max = 0;
   total_max = INT_MIN;
   for (int i = 0; i < size; ++i)  {
      current_max += arr[i];
      total_max = max(total_max, current_max);
      current_max = max(current_max, 0);
   }
   return total_max;
}
int main ()
{
   int n;
   printf("Enter number of inputs: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter array values: ");
   for (int i = 0; i < n; ++i)  {
      scanf("%d", &arr[i]);
   }
   printf("The maximum sum is %d\n", findSum(arr, n));
   return 0;
}

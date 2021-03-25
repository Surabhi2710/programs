/*
Print a pattern of numbers from to as shown below. Each of the numbers is separated by a single space
 4 4 4 4 4 4 4
 4 3 3 3 3 3 4
 4 3 2 2 2 3 4
 4 3 2 1 2 3 4
 4 3 2 2 2 3 4
 4 3 3 3 3 3 4
 4 4 4 4 4 4 4 
 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

 int n, size;
  scanf("%d", &n);
  size=2*n-1;
  int arr[size][size];

  for(int i=0; i<n;i++)
      for(int row=i; row<size-i; row++)
          for(int col=i; col<size-i; col++)
            arr[row][col] = n-i;

  for(int row=0; row<size; row++) {
    for(int col=0; col<size; col++)
      printf("%d ",arr[row][col]);
    printf("\n");
  }
  return 0;
}

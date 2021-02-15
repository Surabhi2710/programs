/*
Find out the number of inversion in the matrix M. Number of inversions, in a matrix is defined as the number of unordered pairs of cells {(i,j),(p,q)}  
such that M [i][j] > M[p][q] & i<=p and j <=q.

First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of one integer denoting N. Following N lines consists of N space separated integers denoting the matrix M.

sample i/p:
2
3
1 2 3
4 5 6
7 8 9
2
4 3
1 4

sample o/p:
0
2
*/

#include<stdio.h>

int a[21][21]; 

int main(){
	  
	  int t,i,j,x,y,n,count;  /* t = Test case, n = columns/rows of matrix M */   
	  scanf("%d", &t);
	  while(t--){        
		  scanf("%d", &n);
		 count = 0; 
		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				scanf("%d",&a[i][j]);
			}	
		}

		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				for (x = i; x < n; ++x) {
					for (y = j; y < n; ++y) {
						if (a[x][y] < a[i][j]) 
            count++; /* count the number of inversions */
					}
				}
			}
		}

		printf("%d \n",count);
		
	}

	return 0;
}

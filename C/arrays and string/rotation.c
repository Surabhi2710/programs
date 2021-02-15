/* 
The first line will consists of one integer T denoting the number of test cases.
For each test case:
1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation to right.
2) The next line consists of N space separated integers , denoting the elements of the array A.

Print the required array.
Here T=1; N=5; K=2.
Sample i/p
1
5 2
1 2 3 4 5
Sample o/p
4 5 1 2 3
*/

---------*** Program ***----------

#include<iostream>
using namespace std;

int main()
{    int t;  /* t = Test case */   
     cin>>t;
     while(t--)    
     {        
          int n,k,p;  /* n = number of elements in array; k = steps of rotation */
          cin>>n;
          cin>>k;
          int a[n];
          
          for(int i=0; i<n; i++){
              cin>>a[i];        
          }        
          k %= n;  /* k falls in range of n */
          
          for(int i=0;i<n;i++)
          {
               p = a[(i+(n-k))%n]; /* Rotate right by k */
               cout<<p<<" ";
          } cout<<"\n";
      }
return 0;
}

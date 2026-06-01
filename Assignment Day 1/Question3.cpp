#include <stdio.h>
using namespace std;

int main(){
          int n,i;
          long long fact=1;
          
          printf("Enter the number:");
          scanf("%d",&n);

          for(i=1; i<=n; i++)
          {
            fact=fact*1;
          }

          printf("Factorial= %lld",fact);

          return 0;
}
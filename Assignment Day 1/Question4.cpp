/*to calculate/count the digits of a number*/
#include <stdio.h>
using namespace std;

int main(){
          int n,count=0;

          printf("Enter number:");
          scanf("%d", &n);

          while (n!=0)
          {
            n=n/10;
            count++;
          }
          printf("Digits = %d",count);

          return 0;
}
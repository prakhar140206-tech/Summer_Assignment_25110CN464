/*To calculate the sum of first n natural numbers*/
#include <stdio.h>
using namespace std;

int main(){
    
    int n,i,sum=0;

    printf("Enter N:");
    scanf("%d", &n);

    for(i= 1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum=%d",sum);

    return 0;


}
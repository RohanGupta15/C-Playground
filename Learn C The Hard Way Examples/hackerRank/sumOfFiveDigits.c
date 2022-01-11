#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,temp=0;
    scanf("%d", &n);
    while(n){
        temp = n%10;
        sum +=temp;
        n /=10;
    }
    printf("%d",sum);
    return 0;
}
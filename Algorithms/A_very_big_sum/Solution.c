#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int j,k,l;
    scanf("%d",&j);
    unsigned long long int t[j],r=0;
    
    for(k=0;k<j;k++)
        {
        scanf("%lld",&t[k]);
        }
    for(k=0;k<j;k++)
        {
        r=r+t[k];
        }
    printf("%lld",r);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
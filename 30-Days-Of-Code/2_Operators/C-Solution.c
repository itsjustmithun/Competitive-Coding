#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
         float mc,tp,tx,tc;
    int tip,tax,l,m;
    scanf("%f\n%d\n%d",&mc,&tip,&tax);
    tp=mc*tip/100;
    tx=mc*tax/100;
    tc=mc+tp+tx;
    l=tc;
    m=(tc*100)-(l*100);
    l=(m>=50)?l+1:l;
    printf("%d",l);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

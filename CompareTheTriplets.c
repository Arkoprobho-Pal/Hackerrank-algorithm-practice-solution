
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<stdlib.h>
int main(){
    int i,alice=0,bob=0,a[3],b[3];
    for(i=0;i<3;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
        {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
        {
        if(a[i]>b[i])
            {
            alice=alice+1;
        }
        if(a[i]<b[i])
            {
            bob=bob+1;
        }
    }
    printf("%d %d",alice,bob);
    return 0;
}

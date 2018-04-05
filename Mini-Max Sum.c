#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int i,j,temp,min=0,max=0;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
        {
        for(j=i;j<5;j++)
            {
            if(a[i]>a[j])
                {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                }
            }
        }
        for(i=0;i<5;i++)
            {
            if(i<4)
                {
                min=min+a[i];
            }
            if(i>0)
                {
                max=max+a[i];
            }
        }
    printf("%ld %ld",min,max);
    return 0;
}

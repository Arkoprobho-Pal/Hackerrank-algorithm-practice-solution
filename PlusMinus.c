#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
   
    int pos=0, zer = 0, neg =0;
   for( int arr_i=0; arr_i<n ; arr_i++){
       if(arr[arr_i] > 0){
           pos = pos+1;
           
       }
       else if(arr[arr_i] == 0){
           zer=zer+1;
       }
       else{
           neg = neg+1;
       }
   }
int pn,nn,zn;
    float pns,nns,zns;
    pn =((pos*pow(10,6)) /n);
        if((pn %10)>5){
            pn= pn+1;
        }
    pns =pn*pow(10,-6);
    
    nn =((neg*pow(10,6))/n);
    if((nn %10)>5){
            nn= nn+1;
        }
    nns =nn*pow(10,-6);
    zn =((zer*pow(10,6))/n);
    if((zn % 10)>5){
            zn= (zn+1);
        }
    zns =zn*pow(10,-6);
    printf("%f\n%f\n%f\n", pns,nns,zns);
return 0;
}

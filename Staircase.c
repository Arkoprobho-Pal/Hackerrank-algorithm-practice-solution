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
    
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            printf(" ");
        }
        for(int k=i;k>=0;k--){
            
            printf("#");
        }
    printf("\n");
    }
    
    
    return 0;
}

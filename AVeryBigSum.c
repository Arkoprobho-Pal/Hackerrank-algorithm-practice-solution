#include <math.h>
#include <stdio.h>


int main(){
    int n; 
    long int sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%ld",&arr[arr_i]);
        sum = sum + arr[arr_i];
    }
 
    printf("%ld",sum);
    return 0;
}

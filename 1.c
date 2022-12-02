#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int array1[n];
    int array2[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &array1[i]);
    }
    for(int i= 0; i<n-k; i++){
        array2[k+i]= array1[i];
        array2[i]= array1[k+i];
    }
    for(int i; i<(n-1); i++){
        printf("%d ", array1[i]);
    }
    printf("%d ", array1[n]);
    return 0;
}
#include <stdio.h>

int prime_number(int a){
    int b= -1;
    for(int i=2; i*i <= a; i++){
        if( (a%i) ==0 ){
            b= 0;
            return b ;
        }
    }
    return b;
}
int main(){
    int p;
    scanf("%d", &p) ; 
    int P= prime_number(p) ;  
    if(P==0){
        printf("-1 -1 -1 -1");
    }else{
        if(p<=100){
            printf("%d %d %d %d", 2, p, 2, p);
        }else{
            printf("%d %d %d %d", p, 100, p, 100);
        }
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c= 0, d;
    char e, f= 'a', g= '+';
    scanf("%d", &d);
    while(e != '\n'){
        int i= scanf("%d", &a);
        if(i == 0){
            a= 1;
            scanf(" %c", &e);
        }else{
            scanf(" %c", &e);
            scanf(" %c", &e);
        }
        scanf(" %c", &e);
        scanf(" %d", &b);
        c= (c+(a*(pow(d,b))))*(g == '+') + (c-(a*(pow(d,b))))*(g == '-');
        scanf("%c", &e);
        if(e == '\n'){
            break;
        }else{
            scanf("%c ", &f);
            g= f;
        }
    }
    printf("%d", c);
    return 0;
}
#include <stdio.h>
int main() {
    int n,i;
    int fact = 1;
    scanf("%d",&n);
    if(n == 1 || n ==0 ){
        fact = 1;
    }
    else{
        for(i=n;i>0;i--){
            fact = fact * i;
        }
    }
    printf("%d",fact);
}

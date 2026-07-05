#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    if(a>=b){
        i=a;
    }
    else{
        i=b;
    }
    while(!(a%i==0 && b%i==0)){
        i--;
    }
    printf("%d",i);
    return 0;

}


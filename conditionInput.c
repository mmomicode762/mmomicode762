#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a is greater than b/n");
    } else {
        printf("a is not greater than b/n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int tk;
    printf("Enter your tk:");
    scanf("%d",&tk);
    if(tk>=1000){
        printf("I will buy a burger\n");
    }else if(tk>=500){
        printf("I will buy a sandwich\n");
    }else if(tk>=200){
        printf("I will buy a samosa/n");
    }else{
        printf("I will drink water/n");
    }
return 0;
    
}
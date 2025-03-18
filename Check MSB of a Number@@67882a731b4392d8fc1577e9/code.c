#include<stdio.h>
int main(){
    int a;
    scanf("%u",&a);
    if(num&(1<<31)){
        printf("Set");
    }else{
        printf("Not Set");
    }return 0;
}
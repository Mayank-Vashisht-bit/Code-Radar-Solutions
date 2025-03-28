#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int bitValue = (a>>b)&1;
    if (bitValue=0){
        printf("%d",a);    }
    return 0;
}
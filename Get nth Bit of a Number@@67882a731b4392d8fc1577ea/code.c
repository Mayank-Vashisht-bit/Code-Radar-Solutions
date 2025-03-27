// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if (a=5 && b==0){
//         printf("1");
//     }else if (a=5 && b==1){
//         printf("0");
//     }return 0;
// }

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int bitValue = (a>>b)&1;
    printf("The value of bit %d is: %d\n",b,bitValue);
    return 0;
}
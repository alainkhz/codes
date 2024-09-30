#include<stdio.h>

int main(){
    int a = 13, b = 7;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n", a & b); // 5
    printf("%d\n", a | b); // 15
    printf("%d\n", a ^ b); // 10
    return 0;
}
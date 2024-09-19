#include<stdio.h>
#include<time.h>

int main(){
    long long  a,b;
    //用%lld而非%d
    scanf("%lld %lld",&a,&b);
    printf("%lld + %lld = %lld \n",a,b,a+b);
    printf("%lld - %lld = %lld \n",a,b,a-b);
    printf("%lld * %lld = %lld \n",a,b,a*b);
    printf("%lld / %lld = %lld",a,b,a/b);
}
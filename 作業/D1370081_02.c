#include<stdio.h>
#include<time.h>

int main(){
    int n,c=0;
    scanf("%d",&n);
        if(n>=10){
        c+=n/10;
        n=n%10;
       }

       if(n>=5){
        c+=n/5;
        n=n%5;
       }

       if(n>=1){
        c+=n/1;
        n=n%1;
       }
       printf("%d",c);

    
}
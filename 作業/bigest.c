#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>b&&a>c)    
    {
        if (c>b)
        {
        printf("%d",a+c);
        }
        else printf("%d",a+b);
        
    }

    if (b>c&&b>a)
    {
        if (a>c)
        {
            printf("%d",b+a);
        }
        else printf("%d",b+c);
    }

    if (c>b&&c>a)
    {
        if (a>b)
        {
            printf("%d",c+a);
        }
        else printf("%d",b+c);
    }
    
}
#include<stdio.h>
#include<time.h>

int main(){
    int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        if(b+c>a){printf("YES\n");}
        else printf("NO\n");
    }

    if(b>a&&b>c)
    {
        if(a+c>b){printf("YES\n");}
        else printf("NO\n");
    }

    if(c>a&&c>b)
    {
        if(b+a>c){printf("YES\n");}
        else printf("NO\n");
    }

    if(a==b&&a==c)
    { 
        printf("Yes\n");
    }


}
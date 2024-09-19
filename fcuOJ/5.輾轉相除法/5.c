#include<stdio.h>
int gcd(int x ,int y){
    if(y==0)
    {
        return x;
    }
    else 
    {
        return gcd(y,x%y);
    }
}

int lcm (int x , int y)
{
    return x*y/gcd(x,y);
}

int main(){
    int n1=0;
    int x[2][10];
    scanf("%d",&n1);
    for (int i=0;i<n1;i++)
    {
        printf("%d",i);
        scanf("%d",&x[1][i]);
        scanf("%d",&x[2][i]);
        
    }

    for (int i=0;i<n1;i++)
    {
     printf("%d\n",x[2][i]);
     printf("%d\n",x[2][i]);
    }
    return 0;
}
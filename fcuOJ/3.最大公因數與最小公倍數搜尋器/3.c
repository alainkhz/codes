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
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("%d",gcd(n1,n2));
    printf(" %d",lcm(n1,n2));
    return 0;
}
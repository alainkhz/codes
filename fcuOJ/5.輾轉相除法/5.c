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
    int n1,n2,n3,n4,n5,n6,n7;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    scanf("%d",&n6);
    scanf("%d",&n7);
    printf("%d\n",lcm(n2,n3));
    printf("%d\n",lcm(n4,n5));
    printf("%d\n",lcm(n6,n7));
    return 0;
}
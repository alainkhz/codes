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
    int n1=0,n2,n3;
    int x[2][10];
    scanf("%d",&n1);
    int j=0;
    for (int i=0;i<n1;i++)
    {
        scanf("%d",&n2);
        scanf("%d",&n3);
        x[1][j]=n2;
        x[2][j]=n3;
        j++;
        
    }
    j=0;
    for (int i=0;i<n1;i++)
    {
     printf("%d\n",lcm(x[1][j],x[2][j]));
     j++;
    }
    return 0;
}
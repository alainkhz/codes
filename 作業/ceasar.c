#include<stdio.h>
#include<time.h>

int main(){
    char inl='b';
    int inn;
    int p=0;
    scanf("%c",&inl);
    scanf("%d",&inn);

    if((int)inl+inn>26){
        inl = (int)inl+inn-26;
    }
    else inl = (int)inl+inn;
    printf("%c",inl);
}
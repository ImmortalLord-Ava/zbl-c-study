#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=100;i++){
        if(i%3==0 && i%5!=0){
                printf("%d",i);
                j++;
                if(j%5==0)
                printf("\n");}}
                if(j%5!=0)
                printf("\n");
printf("一共有%d个",j);

#include<stdio.h>
int main()
{
int num[5] = {0,1,2,3,4};
int i,j=0;
for(i=0;i<5;i++){
        printf("%d ", 2*num[i]);
        j+=2*num[i];}
        printf("所有数组的和为%d",j);
return 0;}

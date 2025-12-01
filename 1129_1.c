#include<stdio.h>
int a[5]={0,1,2,3,4};
int main()
{
	int i=0;
	int sum=0;
	for(i=0;i<5;i++){
		printf("%d ",2*a[i]);
	        sum+=2*a[i];
	}
        printf("数组元素总和：%d",sum);
return 0;}



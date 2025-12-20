#include<stdio.h>
int main()
{
int a,n;
int sum=0;
printf("请输入一个数字：\n");
scanf("%d",&n);
for(a=0;a<=n;a++){
	sum+=a;
}
printf("%d",sum);        
return 0;}

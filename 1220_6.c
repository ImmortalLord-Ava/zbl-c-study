#include<stdio.h>
int main()
{
int i,n;
printf("请输入数字：\n");
scanf("%d",&n);
for(i=0;i<=n;i++){
	printf("%d * %d = %d\n",n,i,n*i);}
return 0;
}

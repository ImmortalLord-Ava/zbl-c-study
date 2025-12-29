#include<stdio.h>
int squareSum(int x,int y);
int main(){
	int x,y;

	printf("输入第一个数：\n");
	scanf("%d",&x);
	printf("输入第二个数：\n");
	scanf("%d",&y);
	
	squareSum(x,y);
	printf("%d² + %d² = %d",x,y,squareSum(x,y));

return 0;}
int squareSum(int x,int y){
        int sum=0;
	sum=x*x+y*y;
        return sum;	
}


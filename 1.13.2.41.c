#include<stdio.h>
void update_if_greater(int *p, int threshold);
int main(){
	int a,b;
	printf("请输入a，b的值为：\n");
	scanf("%d %d",&a,&b);
   update_if_greater(&a, b);
   printf("a = %d , b = %d",a,b);
return 0;}
void update_if_greater(int *p, int threshold){
        if(*p>threshold){
	   *p = *p * 2;
	}else{*p = 0;}

}

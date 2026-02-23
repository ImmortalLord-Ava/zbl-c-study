#include<stdio.h>
void hanshu(int *q,int *p);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	hanshu(&a,&b);
    printf("%d %d",a,b);
return 0;}

void hanshu(int *q,int *p){
     int temp=0;
     temp=*q;
     *q=*p;
     *p=temp;
}

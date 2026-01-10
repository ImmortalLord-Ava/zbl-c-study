#include<stdio.h>
int main(){
	void jiaohuan(int *q,int *p);
    int a,b;
    
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
    
    jiaohuan(&a,&b);
    return 0;
}
void jiaohuan(int *q,int *p){
    int temp=0;
    temp=*q;
    *q=*p;
    *p=temp;
    printf("%d %d",*q,*p);
}


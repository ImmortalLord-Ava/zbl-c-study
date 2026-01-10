#include<stdio.h>
void update_value(int *p){
        if(*p%2==0){
           *p=*p/2;
        }else{*p=(*p * 3)+1;}
    }
int main(){
int a;
    printf("请输入数值：");
    scanf("%d",&a);

    printf("原始值为：%d\n",a);
    update_value(&a);
    printf("改后的值：%d",a);
return 0;}

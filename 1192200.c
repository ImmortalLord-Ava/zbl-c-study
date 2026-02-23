#include<stdio.h>
void findMax(int *arr, int size, int *maxResult);
int main(){
     int arrrr[5];
     int n=5;
     int max=0;
     printf("请输入数字:");
     for(int i=0;i<n;i++){
     scanf("%d",&arrrr[i]);
 }
	findMax(arrrr, n, &max);
        
        printf("最大值为：%d",max);
return 0;}
void findMax(int *arr, int size, int *maxResult){
     int *p=arr;
     for(int i=0;i<size;i++){
        if(*(p+i)>*maxResult){
	   *maxResult=*(p+i);
	}
     }
}

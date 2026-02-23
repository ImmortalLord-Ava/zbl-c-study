#include<stdio.h>
int main(){
    int a[10];
    int n=10;
    printf("请输入10个数字：");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int j=0;j<n-1;j++){
        for(int x=0;x<n-1-j;x++){
	   if(a[x]>a[x+1]){
	      int temp=a[x];
	      a[x]=a[x+1];
	      a[x+1]=temp;
	   }
	}
    }
    printf("排序结果：");
    for(int i=0;i<10;i++){
    printf("%d ",a[i]);
 }
return 0;}

#include<stdio.h>
void find_and_replace(int *arr, int size, int target, int new_val){
        int *p=arr;
	printf("交换前遍历为：");        
	for(int i=0;i<size;i++){
		       	printf("%d ",*p++);
	}	p=arr;
		printf("后遍历为：");
		for(int i=0;i<size;i++){
		    if(*p==target){// if(*arr++==target)
		       *p=new_val;
		    }
		    printf("%d ",*p++);
		}
}
int main(){
     int arrrr[10];
     int sizeee=10;
     int targgg,new;
printf("请输入10个数字：");
     for(int i=0;i<sizeee;i++){
         scanf("%d",&arrrr[i]);
     }
  printf("targgg=");
     scanf("%d",&targgg);
  printf("new=");
     scanf("%d",&new);
find_and_replace(arrrr, sizeee, targgg, new);
 printf("交换后遍历为：");
for(int i=0;i<sizeee;i++){
      printf("%d ",arrrr[i]);}
return 0;}


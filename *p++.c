#include<stdio.h>

int main(){
	void f(int *q);
        int a[5]={1,2,3,4,5};
	printf("数组");
	for(int i=0;i<5;i++){
	    printf("%d ",a[i]);
	}
            f(a);
	return 0;}

void f(int *q){
	printf("指针");
for(int i=0;i<5;i++){
   printf("%d ",*(q+i));
 }
}

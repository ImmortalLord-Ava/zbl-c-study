#include<stdio.h>
#include<stdlib.h>
#define N 50
int a[N];
void gen_random(int upper_bound){
	int i;
	for(i=0;i<N;i++)
{
	a[i]=rand()%upper_bound;
}
}

int howmany(int num){
	int count=0,i;
	for(i=0;i<N;i++){
	   if(a[i]==num)
           ++count;}
	return count;
}

int main(void){
	gen_random(6);
	int i;
	printf("num     howmany\n");
        for(i=0;i<6;i++)
	  printf("%d     %d\n",i,howmany(i));

return 0;}
	




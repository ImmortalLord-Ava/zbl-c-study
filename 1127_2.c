#include<stdio.h>
#include<stdlib.h>
#define N 20
int score[N]={0};
void count_students()
{
	int count_1=0,count_2=0,count_3=0,i;
	  for(i=0;i<N;i++){
	  if(score[i]>90&&score[i]<100){
		  ++count_1;
	  }
	  else if(score[i]>0&&score[i]<60){
	          ++count_2;
	  }
	  else{
		  ++count_3;
	  }
	
	}
  printf("90分以上的优秀学生人数为%d\n",count_1);
  printf("60分以下的挂科学生人数为%d\n",count_2);
  printf("60-89分的良好学生人数为%d\n",count_3);
}
  int main(){
        int i;
        for(i=0;i<N;i++){
        scanf("%d",&score[i]);}
   count_students();
         return 0;
}

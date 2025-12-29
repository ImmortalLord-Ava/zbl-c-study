#include<stdio.h>
int main()
{
	int i;
        char a[]={0};
    for(i=0;i<10;i++){
	    scanf("%c",&a[i]);}
    getchar();
            printf("%zu",sizeof (a));

return 0;}

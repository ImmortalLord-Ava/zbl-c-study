#include <stdio.h>
int main() {
    int choice;
    printf("请输入数字(1-3): ");
    scanf("%d", &choice);
    switch(choice){
case 1:
	printf("优秀\n");
	break;
case 2:
	printf("良好\n");
        break;
case 3:
	printf("及格\n");
	break;
default:
	printf("输入错误\n");
	break;
    }

    return 0;
}

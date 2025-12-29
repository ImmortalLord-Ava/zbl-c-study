#include <stdio.h>

int main() {
    int x, y;
    int *p1 = &x, *p2 = &y;
    
    printf("请输入两个数：");
    scanf("%d %d", &x, &y);
    
    printf("交换前：x=%d, y=%d\n", x, y);
    
    // 使用指针交换
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("交换后：x=%d, y=%d\n", x, y);
    
    return 0;
}

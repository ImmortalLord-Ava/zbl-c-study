#include<stdio.h>
int main() {
	void calculate(int a, int b, int *s, int *d);
    int x = 10, y = 5;
    int s = 0, d = 0;

    printf("计算前：s=%d, d=%d\n", s, d);
       
    calculate(x, y, &s, &d);

    printf("计算后：s=%d, d=%d\n", s, d);

    return 0;
}


void calculate(int a, int b, int *s, int *d) {
    *s=a+b;
    *d=b;
}


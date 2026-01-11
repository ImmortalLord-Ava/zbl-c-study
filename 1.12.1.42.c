#include<stdio.h>
int my_strlen(char *s){
         char *p=s;//设置了一个指针变量，专门用来装s这个数组的开头（大门）的地址，防止越界。/因为是数组里面的值不可以改，所以不能通过指针直接改数组里的值，来得到最终结果。所以用return。
	 while(*p!='\0'){
	       p++;
	 }
	 return (int)(p-s);
}
int main(){
         char str[] = "KernelWarrior";
    printf("字符串: %s, 长度: %d\n", str, my_strlen(str));
return 0;}

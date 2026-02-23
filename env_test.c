#include <stdio.h>

/* * CSAPP Phase 1: Endianness Check
 * 目的：直观观察数据在你的内存中是如何排列的。
 */

typedef unsigned char *byte_pointer;

// 书中 2.1 节展示字节排列的核心函数
void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        // 以十六进制打印每个字节的内容
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

int main() {
    printf("--- 字节序探测器 ---\n");
    
    // 这是一个 4 字节的整数
    int test_val = 0x12345678;
    
    printf("原始数据: 0x12345678\n");
    printf("内存排布:");
    
    // 调用函数查看内存
    show_int(test_val);

    printf("\n[指令] 请观察输出结果：\n");
    printf("1. 如果是 78 56 34 12 -> 说明是小端序 (Little Endian)\n");
    printf("2. 如果是 12 34 56 78 -> 说明是大端序 (Big Endian)\n");

    return 0;
}

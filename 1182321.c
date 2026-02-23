#include <stdio.h>
#include <stdlib.h>

/**
 * 实验：探测系统内存极限
 * 警告：这个程序会耗尽你的 RAM，可能会导致电脑卡顿，实验完请及时关闭。
 */
int main(void) {
    void *p;
    int cnt = 0;
    size_t block_size = 100 * 1024 * 1024; // 每次申请 100MB

    printf("[SYSTEM] 开始内存探测，每步 100MB...\n");

    // 尝试不断申请内存
    while (1) {
        p = malloc(block_size);
        
        if (p == NULL) {
            // 当 malloc 返回 NULL 时，说明系统真的掏空了
            printf("\n[REPORT] 探测结束！系统已无法提供更多内存。\n");
            break;
        }

        cnt++;
        // 关键：实时打印，让你看到程序还在活着
        printf("\r[WORKING] 已分配: %d MB", cnt * 100);
        
        // 注意：这里我们故意不 free(p)，为了测试极限
        // 但在正式开发中，这属于严重的内存泄漏！
    }

    printf("\n最终探测结果：你的系统允许此程序申请约 %d MB 内存。\n", cnt * 100);

    // 暂停窗口，防止运行完直接消失
    printf("\n按下回车键退出...");
    getchar(); 

    return 0;
}

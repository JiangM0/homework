#include <stdio.h>

int main() {
    // 输出 Hello World
    printf("Hello World!\n");

    // 定义一个字符数组，用来存字符串
    char str[100];

    // 输入字符串
    printf("请输入一段文字：");
    scanf("%s", str);

    // 输出字符串
    printf("你输入的是：%s\n", str);

    return 0;
}

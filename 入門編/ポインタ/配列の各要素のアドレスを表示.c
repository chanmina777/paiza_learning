// 配列の各要素のアドレスを表示させる
#include <stdio.h>

int main(void)
{
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        // ここで data[i] のアドレスを出力して、改行する
            printf("%p\n", &data[i]);
    }
}

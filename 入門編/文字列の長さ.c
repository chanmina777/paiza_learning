// 文字列の長さを求めよう - while
#include <stdio.h>

int main(void)
{
    char str[] = "paiza";

    int i = 0;
    while (str[i] != '\0') {   //ヌル文字が出るまで続けるというイメージ
        i++;
    }

    int length = i;
    printf("%d\n", length);
}


// 文字列の長さを求めよう - for

int main(void)
{
    char str[] = "paiza";

    int i;
    for (i = 0; str[i] != '\0'; i++);

    int length = i;
    printf("%d\n", length);
}

// 文字列の長さを求めよう(関数)
#include <string.h>

int main(void)
{
    char str[] = "paiza";

    int length = strlen(str);
    printf("%d\n", length);
}

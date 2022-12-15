// 整数データを読み込む
#include <stdio.h>

int main(void)
{
    char buf[100];
    int n;

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    printf("入力データ : %d\n", n);
}

//文字列をスペース区切りで分割する---文字列
#include <stdio.h>

int main(void)
{
    char str[] = "hello paiza learning";
    char s1[10];
    char s2[10];
    char s3[10];

    sscanf(str, "%s %s %s", s1, s2, s3);　　　　　//sscanf で %s を使うと、空白文字以外では分割できません。

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
}

//strtok(ストラトック）で文字列分割
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello,world,paiza";

    char *tp;
    tp = strtok(str, ",");　　　//strtok を使うと、空白文字以外でも文字列を分割できます。
    printf("%s\n", tp);

    tp = strtok(NULL, ",");
    printf("%s\n", tp);

    tp = strtok(NULL, ",");
    printf("%s\n", tp);
}

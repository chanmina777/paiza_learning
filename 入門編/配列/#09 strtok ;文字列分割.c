// strtok で文字列を分割しよう
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[100];
    fgets(buf, sizeof(buf), stdin);

    char *tp;
    // strtok で文字列を . で分割 ( 1 回目 )
    tp = strtok(buf, ".");
    printf("%s\n", tp);

    // strtok で文字列を . で分割 ( 2 回目 )
    tp = strtok(NULL, ".");
    printf("%s\n", tp);

    // strtok で文字列を . で分割 ( 3 回目 )
    tp = strtok(NULL, ".");
    printf("%s\n", tp);
}


/*入力：hello.paiza.learning
  出力：hello
        paiza
        learning*/

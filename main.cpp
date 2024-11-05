#include<stdio.h>
#include"Enemy.h"
int main() {
    Enemy enemy;
    while (true) {
        enemy.Update();
        int s;
        printf("0で続いて、１で終わる（抜ける）\n");
        scanf_s("%d", &s);
        if (s == 1) {
            break;
        }
    }

    return 0;
}
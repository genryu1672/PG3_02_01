#include<stdio.h>
#include"Enemy.h"
int main() {
    Enemy enemy;
    while (true) {
        enemy.Update();
        int s;
        printf("0�Ŏ��̃t�F�[�Y�A�P�Ń��[�v�𔲂���\n");
        scanf_s("%d", &s);
        if (s == 1) {
            break;
        }
    }

    return 0;
}
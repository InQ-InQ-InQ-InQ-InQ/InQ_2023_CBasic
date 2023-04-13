#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int money;

    if (x == y && y == z) {
        money = 10000 + x * 1000;
    }

    else if ((x == y && y != z) || (x == z && z != y) || (y == z && y != x)) {
        int same;
        if (x == y && y != z) {
            same = x;
        }
        else if (x == z && z != y) {
            same = x;
        }
        else if (y == z && z != x) {
            same = y;
        }
        money = 1000 + same * 100;
    }

     else {
            int max;
            if (x > y && x > z) {
                max = x;
            }
            else if (y > x && y > z) {
                max = y;
            }
            else {
                max = z;
            }
            money = max * 100;
        }
   
    printf("%d",money);

    return 0;
}

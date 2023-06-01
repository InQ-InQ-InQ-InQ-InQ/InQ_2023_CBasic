#include <stdio.h>

int main() {
    char str[8];
    int ovrl[10] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        ovrl[str[i] - '0']++;
    }

    int sixNineCount = ovrl[6] + ovrl[9];
    ovrl[6] = ovrl[9] = (sixNineCount + 1) / 2;

    int setCount = 0;
    for (int i = 0; i < 10; i++) {
        if (ovrl[i] > setCount) {
            setCount = ovrl[i];
        }
    }

    printf("%d", setCount);

    return 0;
}
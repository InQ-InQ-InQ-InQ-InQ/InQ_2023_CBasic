#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int h, m;
    scanf("%d %d", &h, &m);

    int total_time = h * 60 + m;
    int new_time = total_time - 45;

    if (new_time < 0) 
        new_time += 1440;
  
    h = new_time / 60;
    m = new_time % 60;

    printf("%d %d", h, m);

    return 0;
}

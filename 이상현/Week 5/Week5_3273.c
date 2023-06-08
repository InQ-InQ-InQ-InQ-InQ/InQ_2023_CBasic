#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int countPairs(int* sequence, int n, int x) {
    int count = 0;
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (sequence[i] + sequence[j] == x) {
            count++;
            i++;
            j--;
        }
        else if (sequence[i] + sequence[j] < x) {
            i++;
        }
        else {
            j--;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int* sequence = (int*)malloc(n * sizeof(int));
    if (sequence == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }

    int x;
    scanf("%d", &x);
    qsort(sequence, n, sizeof(int), compare);
    int result = countPairs(sequence, n, x);
    printf("%d\n", result);
    
    free(sequence);

    return 0;
}
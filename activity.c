#include <stdio.h>

int main() {
    int start[]  = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};
    int n = 6;
    int i, j = 0;

    printf("Selected activities:\n");
    printf("Activity %d\n", j + 1);

    for(i = 1; i < n; i++) {
        if(start[i] >= finish[j]) {
            printf("Activity %d\n", i + 1);
            j = i;
        }
    }

    return 0;
}
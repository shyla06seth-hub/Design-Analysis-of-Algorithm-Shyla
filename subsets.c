#include <stdio.h>

int a[] = {3, 4, 5, 2};
int n = 4;
int target = 9;

void subset(int i, int sum) {

    if(sum == target) {
        printf("Subset found\n");
        return;
    }

    if(i == n || sum > target)
        return;

    // Include element
    subset(i + 1, sum + a[i]);

    // Exclude element
    subset(i + 1, sum);
}

int main() {
    subset(0, 0);
    return 0;
}
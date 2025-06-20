#include <stdio.h>
int main() {
    int arr [5] = {10, 20, 30, 40, 50};
    int *prt = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(prt+i));
    }
    printf("\n");
    return 0;
}
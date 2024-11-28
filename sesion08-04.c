#include <stdio.h>

int main() {
    int array[3][4] = {{5, 1, 9, 3},{7, 2, 8, 6},{4, 0, 11, 10}};
    int max = array[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}


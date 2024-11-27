
#include<stdio.h>
int main() {
    int n;
    int i,j,k,p;
    printf("Enter the number of numbers to be stored in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (j = 0; j < n - 1; j++) {
        for (k = 0; k < n - j - 1; k++) {
            if (a[k] < a[k + 1]) {
                int t = a[k];
                a[k] = a[k + 1];
                a[k + 1] = t;
            }
        }
    }


    int sum = 0;
    for (p = 0; p < n; p++) {
        printf("%d\n",a[p]);
    }


    return 0;
}


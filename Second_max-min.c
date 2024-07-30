#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sec_max = arr[n-2];
    int max_ind = n-2;
    int sec_min = arr[1];
    int min_ind = 1;
    while (sec_max==arr[n-1] && max_ind>0)
    {
        sec_max = arr[--max_ind];
    }
    while (sec_min==arr[0] && min_ind<n-1)
    {
        sec_min = arr[++min_ind];
    }

    printf("second max = %d", sec_max);
    printf("second min = %d", sec_min);
    return 0;
}

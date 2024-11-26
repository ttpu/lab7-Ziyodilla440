#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n], rotated[n];

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    k = k % n;
    for (int i = 0; i < n; i++) rotated[(i + k) % n] = arr[i];
    for (int i = 0; i < n; i++) printf("%d ", rotated[i]);

    return 0;
}


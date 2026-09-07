```c
#include <stdio.h>

struct box {
    int length;
    int width;
    int height;
};

int main() {
    int n;
    scanf("%d", &n);

    struct box b[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d",
              &b[i].length,
              &b[i].width,
              &b[i].height);
    }

    for (int i = 0; i < n; i++) {

        if (b[i].height < 41) {
            int volume = b[i].length * b[i].width * b[i].height;
            printf("%d\n", volume);
        }
    }

    return 0;
}
```

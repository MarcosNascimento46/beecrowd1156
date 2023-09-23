#include <stdio.h>

int main() {
    float n = 1.0;
    int i;
    for(i=1; i<=19; i++) {
        n += (2*i+1)/ (float)(1 << i);
    }
    printf("%.2f\n", n);
    return 0;
}
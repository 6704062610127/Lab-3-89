#include <stdio.h>

int main() {
    int h, m, s;
    int next_min;

    scanf("%d %d %d", &h, &m, &s);

    printf("Hour:%d\n", h);
    printf("Minute:%d\n", m);
    printf("Second:%d\n", s);

    scanf("%d", &next_min);

    int total_seconds = h * 3600 + m * 60 + s;

    total_seconds += next_min * 60;

    total_seconds %= (24 * 3600);

    h = total_seconds / 3600;
    m = (total_seconds % 3600) / 60;
    s = total_seconds % 60;

    printf("Hour:%d\n", h);
    printf("Minute:%d\n", m);
    printf("Second:%d\n", s);

    return 0;
}

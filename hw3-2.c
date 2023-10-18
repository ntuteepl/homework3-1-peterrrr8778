#include <stdio.h>

int main() {
    int go1, back1, go2, back2, go3, back3;
    scanf("%d %d %d %d %d %d", &go1, &back1, &go2, &back2, &go3, &back3);
    int car=1;
    if(back1>go2||back2>go3)
    {
    car++;
    }
    printf("%d",car);
}

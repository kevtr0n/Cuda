#include <stdio.h>

int main(int argc, char** argv) {
    int x, *px;
    px = &x;
    int y = *px;
    printf("%d\n", y);
    return 0; 
}
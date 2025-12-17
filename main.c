#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a = 5, b = 5;
    int result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);
    return 0;
}

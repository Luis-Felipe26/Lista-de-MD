#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int euclides(int a, int b)
{

if(b == 0)
{
    return a;
}
 else
{
    return euclides(b , a % b);
}
}

void central(int x, int y)
{

if(y < x)
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("MDC(%d,%d) = %d\n", a, b, euclides(a, b));
    central(x, y + 1);
}
}

int main()
{

int n;
scanf("%d", &n);

central(n, 0);

   return 0;
}

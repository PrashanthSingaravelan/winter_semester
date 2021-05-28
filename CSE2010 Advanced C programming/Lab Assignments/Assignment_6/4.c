#include <stdio.h>
#include <math.h>

int nextMultipleof10(float value)
{
    int floorValue = (int)value;
    while (floorValue % 10 != 0)
        floorValue += 1;
    return floorValue;
}
int main()
{
    float value;
    int ans;
    printf("Enter Float: ");
    scanf("%f", &value);
    value=floor(value);
    ans = nextMultipleof10(value);
    printf("Next Multiple of %0.2f is %d", value, ans);
}

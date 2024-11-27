#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool naive_equal(float a, float b, float epsilon)
{
    return fabs(a - b) < epsilon;
}

bool approximately_equal(float a, float b, float epsilon)
{
    return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

bool essentially_equal(float a, float b, float epsilon)
{
    return fabs(a - b) <= ( (fabs(a) > fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

bool definitely_greater(float a, float b, float epsilon)
{
    return (a - b) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

bool definitely_less(float a, float b, float epsilon)
{
    return (b - a) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

int main()
{
    const float a = 1.4567;
    const float b = 1.4568;
    const float epsilon = 0.001;

    bool res = naive_equal(a, b, epsilon);
    printf("Res: %d\n", (int)res);

    return 0;
}

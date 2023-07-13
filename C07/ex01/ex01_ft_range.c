#include <stdlib.h>

int *ft_range(int min, int max)
{
    int diff;
    int *buffer;
    int i;

    i = -1;
    diff = max - min;
    if (diff <= 0)
        return (NULL);
    buffer = (int*) malloc(sizeof(int) * (diff));
    if (buffer == NULL)
        return (NULL);
    while (++i < diff)
    {
        buffer[i] = min++;
    }
    return (buffer);
}

// Test
#include <stdio.h>
#include <assert.h>

int main()
{

    // Test 1
    int min1 = 1;
    int max1 = 6;
    int expected1[] = {1, 2, 3, 4, 5};
    int *result1 = ft_range(min1, max1);
    assert(result1 != NULL);
    for (int i = 0; i < max1 - min1; i++)
    {
        assert(result1[i] == expected1[i]);
    }
    free(result1);

    // Test 2
    int min2 = -10;
    int max2 = -5;
    int expected2[] = {-10, -9, -8, -7, -6};
    int *result2 = ft_range(min2, max2);
    assert(result2 != NULL);
    for (int i = 0; i < max2 - min2; i++)
    {
        assert(result2[i] == expected2[i]);
    }
    free(result2);

    // Test 3 (Invalid range)
    int min3 = 7;
    int max3 = 3;
    int *result3 = ft_range(min3, max3);
    assert(result3 == NULL);

    return 0;
}

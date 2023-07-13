#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int diff;
    int i;

    i = -1;
    diff = max - min;
    if (diff <= 0)
    {
        *range = NULL;
        return (-1);
    }
    *range = (int*)malloc(sizeof(int) * diff);
    if (*range == NULL)
        return (-1);
    while (++i < diff)
        (*range)[i] = min++;
    return diff;
}

// Tests
#include <assert.h>
#include <stdio.h> 
int main()
{
    int *arr1;
    int min1 = 1;
    int max1 = 6;
    int expected1[] = {1, 2, 3, 4, 5};
    int size1 = ft_ultimate_range(&arr1, min1, max1);
    assert(arr1 != NULL);
    assert(size1 == max1 - min1);
    for (int i = 0; i < size1; i++) {
        assert(arr1[i] == expected1[i]);
    }
    free(arr1);

    // Test 2
    int *arr2;
    int min2 = -10;
    int max2 = -5;
    int expected2[] = {-10, -9, -8, -7, -6};
    int size2 = ft_ultimate_range(&arr2, min2, max2);
    assert(arr2 != NULL);
    assert(size2 == max2 - min2);
    for (int i = 0; i < size2; i++) {
        assert(arr2[i] == expected2[i]);
    }
    free(arr2);

    // Test 3 (Invalid range)
    int *arr3;
    int min3 = 7;
    int max3 = 3;
    int size3 = ft_ultimate_range(&arr3, min3, max3);
    assert(arr3 == NULL);
    assert(size3 == -1);

    printf("All tests passed.\n");
    return 0;
}

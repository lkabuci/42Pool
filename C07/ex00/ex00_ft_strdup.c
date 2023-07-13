#include <stdlib.h>

char* ft_strdup(char *str)
{
    int     i;
    int     stringlength;
    char    *buffer;

    i = -1;
    stringlength = 0;
    while (str[stringlength])
        stringlength++;
    buffer = (char *)malloc(sizeof(char) * (stringlength + 1));
    if (buffer != NULL)
    {
        while (str[++i])
            buffer[i] = str[i];
        buffer[i] = 0;
    }
    return (buffer);
}

// main test
#include <string.h>
#include <stdio.h>
#include <assert.h>

int main()
{

// Test 1
    char* str1 = "Hello, World!";
    char* result1 = ft_strdup(str1);
    assert(result1 != NULL);
    assert(strcmp(result1, str1) == 0);
    free(result1);

    // Test 2
    char* str2 = "";
    char* result2 = ft_strdup(str2);
    assert(result2 != NULL);
    assert(strcmp(result2, str2) == 0);
    free(result2);

    // Test 3
    char* str3 = "12345";
    char* result3 = ft_strdup(str3);
    assert(result3 != NULL);
    assert(strcmp(result3, str3) == 0);
    free(result3);

    printf("All tests passed.\n");
    return 0;
}


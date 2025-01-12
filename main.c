#include <stdio.h>

// Function to compare two strings
int my_strcmp(char *source_str, char *compare_str)
{
    while (*source_str && *compare_str && *source_str == *compare_str)
    {
        source_str++;
        compare_str++;
    }
    return *source_str - *compare_str;
}

int main()
{
    char first_input[100];
    char second_input[100];

    // Read the first string
    gets(first_input);

    // Read the second string
    gets(second_input);

    // Call the custom strcmp function and print the result
    printf("%d\n", my_strcmp(first_input, second_input));

    return 0;
}

#include <stdio.h>
#include <string.h>

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
    fgets(first_input, sizeof(first_input), stdin);

    // Read the second string
    fgets(second_input, sizeof(second_input), stdin);

    // Remove newline characters if present
    if (first_input[strlen(first_input) - 1] == '\n')
        first_input[strlen(first_input) - 1] = '\0';
    if (second_input[strlen(second_input) - 1] == '\n')
        second_input[strlen(second_input) - 1] = '\0';

    // Call the custom strcmp function and print the result
    printf("%d\n", my_strcmp(first_input, second_input));

    return 0;
}

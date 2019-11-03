#include <stdlib.h>

int word_count(char *str)
{
    int i;

    i = 0;
    while (*str != '\0')
    {
        if (*str == '\t' || *str == '\n' || *str == '\0' || *str == ' ')
            i++;
        str++;
    }
    return (i);
}
int *word_length(char *str)
{
    int *i;
    int count;

    count = 0;
    i = (int *)malloc(sizeof(int) * word_count(str));
    while (*str != '\0')
    {
        if (*str == '\t' || *str == '\n' || *str == '\0' || *str == ' ')
        {
            i++;
            count = 0;
        }
        else
        {
            count++;
            *i = count;
        }
    }
    return (i);
}
char **ft_split_whitespaces(char *str);
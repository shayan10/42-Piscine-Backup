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
char **ft_split_whitespaces(char *str)
{
    char **arr;
    int *lengths;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    lengths = word_length(str);
    //Allocating memory
    arr = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
    while (i < word_count(str))
    {
        arr[i] = malloc(sizeof(char) * (lengths[i] + 1));
        i++;
    }
    i = 0;
    while (*str != '\0')
    {
        if (*str == '\t' || *str == '\n' || *str == '\0' || *str == ' ')
        {
            i++;
            k++;
        }
        else
        {
            while (j < lengths[k])
            {
                arr[i][j] = *str;
                j++;
            }
        }
        str++;
    }
    return (arr);
}
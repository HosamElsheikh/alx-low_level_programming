#include <stdlib.h>

/**
 * is_space - Checks if a character is a whitespace character.
 * @c: The character to check.
 * Return: 1 if true, 0 otherwise.
 */
int is_space(char c)
{
    return (c == ' ');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (is_space(*str))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * strtow - Splits a string into words based on spaces.
 * @str: The string to split.
 * Return: Pointer to an array of strings (words), or NULL if failure.
 */
char **strtow(char *str)
{
    int num_words;
    char **words;
    int word_index = 0;
    int word_start = 0;
    int word_length = 0;
    int i;
    
    if (str == NULL || *str == '\0')
        return NULL;

    num_words = count_words(str);
    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    while (str[word_start])
    {
        while (is_space(str[word_start]))
            word_start++;

        word_length = 0;
        while (str[word_start + word_length] && !is_space(str[word_start + word_length]))
            word_length++;

        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL)
        {
            for (i = 0; i < word_index; i++)
                free(words[i]);
            free(words);
            return NULL;
        }

        for (i = 0; i < word_length; i++)
            words[word_index][i] = str[word_start + i];
        words[word_index][word_length] = '\0';

        word_index++;
        word_start += word_length;
    }

    words[word_index] = NULL; 

    return words;
}

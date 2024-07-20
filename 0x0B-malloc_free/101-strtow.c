#include "main.h"

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n'); // Add other space characters as needed
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;
    
    while (*str) {
        if (is_space(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }
    
    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0')
        return NULL;
    
    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;
    
    int word_index = 0;
    int word_start = 0;
    int word_length = 0;
    
    while (str[word_start]) {
        while (is_space(str[word_start]))
            word_start++;
        
        word_length = 0;
        while (str[word_start + word_length] && !is_space(str[word_start + word_length]))
            word_length++;
        
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            // Clean up allocated memory
            for (int i = 0; i < word_index; i++)
                free(words[i]);
            free(words);
            return NULL;
        }
        
        for (int i = 0; i < word_length; i++)
            words[word_index][i] = str[word_start + i];
        words[word_index][word_length] = '\0';
        
        word_index++;
        word_start += word_length;
    }
    
    words[word_index] = NULL; // Null-terminate the array of words
    
    return words;
}

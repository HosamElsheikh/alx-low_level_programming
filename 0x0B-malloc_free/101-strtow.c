#include "main.h"

char **strtow(char *str) {

	if (str == NULL || str[0] == '\0') {
		return (NULL);
	}

	int i, j = 0, k = 0, count = 0;

	for (i = 0; str[i]; i++)
		if (str[i] == ' ')
			count++;

	char **words = malloc((count + 2) * sizeof(char *));

	if (words == NULL) {
		return (NULL);
	}

	words[j] = &str[k];
	for (i = 0; str[i]; i++) {
		if (str[i] == ' ') {
			str[i] = '\0';
			j++;
			words[j] = &str[i + 1];
		}
	}
	words[j + 1] = NULL;

	return (words);

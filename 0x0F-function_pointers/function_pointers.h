#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function pointer type for functions that print a name */
typedef void (*print_name_t)(char *);

/* Function prototypes */
void print_name(char *name, print_name_t f);

#endif /* FUNCTION_POINTERS_H */

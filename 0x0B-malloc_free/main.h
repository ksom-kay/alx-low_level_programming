#ifndef MAIN_H
#define MAIN_H

char *_strdup(char *str);
char *create_array(unsigned int size, char c);
int _putchar(char c);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height)
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */


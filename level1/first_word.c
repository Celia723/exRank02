

/*
Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> */

#include <stdio.h>
#include <stdlib.h>

/*char    *find_word(const char *args)
{
    int is_word = 0;
    char    *word = NULL;
    int i  = 0;
    int j = 0;

    if (!args || !*args)
        return (NULL);
    while (args[i] || is_word == 0)
    {
        if (args[i] == ' ')
        {
            i++;
            continue;
        }
        else if (args[i])
            is_word++;
    }
    if (is_word == 0)
        return (NULL);
    while (args[i] && (args[i] != ' '))
    {
        word[j] = args[i];
        i++;
        j++;
    }
    return (word);
}*/

char    *find_word(const char *str)
{
    int     i = 0;
    char    *word;
    int     start;
    int     len;

    while (str[i] && (str[i] == ' '))
        i++;
    if (!str[i])
        return NULL;
    start = i;
    while (str[i] && (str[i] != ' '))
    {
        i++;
    }
    len = i - start; 
    word = malloc (len);
    i = 0;
    while (str[start] && (str[start] != ' '))
    {
        word[i] = str[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return (word);
}


int main(int argc, char const *argv[])
{
    char *word;

    if (argc != 2)
    {
        printf("\n");  // si no hay exactamente 1 argumento, solo salto de línea
        return 0;
    }

    word = find_word(argv[1]);
    if (word)
    {
        printf("%s\n", word);
        free(word);
    }
    else
        printf ("No hay palabra\n");
    return 0;
}

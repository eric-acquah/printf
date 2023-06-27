#include "main.h"
#include <unistd.h>


/**
 *_print - print to standard output
 *@letter: character to be printed
 *Return: number of bytes written to stdout
 */

int _print(char letter)
{
	return (write(1, &letter, 1));
}


/**
 *print_words - print strings
 *@word: string pointer
 *Return: lenght of string
 */

int print_words(char *word)
{
	int byts;

	if (word == NULL)
		return (-1);

	for (byts = 0; word[byts] != '\0'; byts++)
	{
		_print(word[byts]);
	}

	return (byts);
}

#include "main.h"

/**
 *print_number - convert integer values to strings and print to stdout
 *@num: number to be converted and printed
 *@size: the total capacity of
 *@base: argument for speciefing the desired
 *@sign: flag for sign of unsigned values
 *Return: number of bytes written
 */

int print_number(int num, unsigned int size, int base, int sign)
{
/*includes all variable decleartions and dynamic memory allocation*/
#include "print_num_declearations.h"

	num_siz = 0;/*initialize size of array*/

/*includes control stmts for negative and single zero digits*/
#include "print_num_specials_cases.h"

do {
	mod = num % base;
	num_array[num_siz] = mod + '0';
	num = num / base;
	num_siz++;
} while (num != 0);/*extract and convert digits to characters*/

num_array[num_siz] = '\0';
num_array = resize(num_siz, size, num_array);/*resize array to fit elements*/

neg = 0;
if (num_array[0] == '-')
	neg = neg + 1;/*if value is negative start reversing from 2nd indx*/

lent = num_siz - 1;
for (idx = neg; idx < lent; idx++)/*reorder reversed string*/
{
	tmp = num_array[idx];
	num_array[idx] = num_array[lent];
	num_array[lent] = tmp;
	lent--;
}

len += print_words(num_array);/*print string to stdout*/

free(num_array);
return (len);
}

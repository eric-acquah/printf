#include "main.h"

/**
 *print_number - convert integer values to strings and print to stdout
 *@num: number to be converted and printed
 *Return: number of bytes written
 */

int print_number(int num)
{
/*includes all variable decleartions and dynamic memory allocation*/
#include "print_num_declearations.h"

<<<<<<< HEAD
	num_siz = 0;/*initialize size of array*/
=======
        num_siz = 0;/*initialize size of array*/
>>>>>>> 6304504bebc1f7eeac211824bfb73d0c5df0c032

/*includes control stmts for negative and single zero digits*/
#include "print_num_specials_cases.h"

<<<<<<< HEAD
	do {
		mod = num % 10;
		num_array[num_siz] = mod + '0';
		num = num / 10;
		num_siz++;
	} while (num != 0);/*extract and convert digits to characters*/

	num_array[num_siz] = '\0';
	num_array = resize(num_siz, 12, num_array);/*resize array to fit elements*/

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
=======
        do {
                mod = num % 10;
                num_array[num_siz] = mod + '0';
                num = num / 10;
                num_siz++;
        } while (num != 0);/*extract and convert digits to characters*/

        num_array[num_siz] = '\0';
        num_array = resize(num_siz, 12, num_array);/*resize array to fit elements*/

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
>>>>>>> 6304504bebc1f7eeac211824bfb73d0c5df0c032
}

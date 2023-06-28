#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 *resize - resize dynamically allocated memory space
 *@size: new memory size
 *@elem: number of elements in old memory block
 *@old: pointer to old memory block
 *Return: pointer to new block
 */

void *resize(unsigned int size, unsigned int elem, void *old)
{
<<<<<<< HEAD
	unsigned int i;
	void *new;
	char *clone;
	char *clone1;


	if (old == NULL)
		return (NULL);

	new = malloc(size);

	if (new == NULL)
		return (NULL);

	clone = (char *)old;
	clone1 = (char *)new;

	for (i = 0; i < size && i < elem; i++)
	{
		clone1[i] = clone[i];
	}

	free(old);

	return (new);
=======
        unsigned int i;
        void *new;
        char *clone;
        char *clone1;


        if (old == NULL)
                return (NULL);

        new = malloc(size);

        if (new == NULL)
                return (NULL);

        clone = (char *)old;
        clone1 = (char *)new;

	 for (i = 0; i < size && i < elem; i++)
        {
                clone1[i] = clone[i];
        }

        free(old);

        return (new);
>>>>>>> 6304504bebc1f7eeac211824bfb73d0c5df0c032
}

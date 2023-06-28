#ifndef DECLEAR_MALLOC
#define DECLEAR_MALLOC

char *num_array;
int len = 0;
int idx, lent, num_siz, neg, mod;
char tmp;

num_array = (char *)malloc(sizeof(char) * 12); /*Maximum size of num*/

if (num_array == NULL)
	return (-1);


#endif

#ifndef SPECIAL
#define SPECIAL

if (num == 0)
{
	num_array[0] = '0';
	num_array[1] = '\0';
}

if (num < 0)
{
	if (sign < 0)
	{
		num_array[0] = '-';
		num = num * -1;
		num_siz = 1;
	}
	else
		num = num * -1;
}

#endif

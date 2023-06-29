#ifndef SPECIAL
#define SPECIAL

if (num == 0)
{
	num_array[0] = '0';
	num_array[1] = '\0';
}
else
{
	if (num < 0)
	{
		num_array[0] = '-';
		num = num * -1;
		num_siz = 1;
	}
}


#endif

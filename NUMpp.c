#include <stdio.h>
#include "NUMpp.h"

long int powr(int inv, int pow)
{
	int ggf;
	long int gh = inv;
	ggf = gh;
	for (size_t i = 0; i < pow; i++)
	{
		gh * ggf;
	}
	return gh;
}

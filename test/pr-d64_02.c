#if defined HAVE_CONFIG_H
# include "config.h"
#endif	/* HAVE_CONFIG_H */
#include <stdlib.h>
#include <stdio.h>
#include "dfp754_d64.h"

#if !defined countof
# define countof(x)	(sizeof(x) / sizeof(*x))
#endif	/* !countof */

int
main(void)
{
	_Decimal64 x[] = {
		10.0dd / 3.0dd, 1.00dd / 3.00dd, 2.dd / 3.dd, 21.dd / 7.11dd,
	};

	for (size_t i = 0U; i < countof(x); i++) {
		char buf[64U];
		int l = d64tostr(buf, sizeof(buf), x[i]);
		buf[l] = '\0';
		puts(buf);
	}
	return 0;
}

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
		0.dd, 1.dd, 1.23dd, 0.23dd, 1.234dd, 12.34dd,
		12.dd, 100.dd, 123.dd,
	};

	for (size_t i = 0U; i < countof(x); i++) {
		char buf[64U];
		int l = d64tostr(buf, sizeof(buf), x[i]);
		buf[l] = '\0';
		puts(buf);
	}
	return 0;
}

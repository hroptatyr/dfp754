#if defined HAVE_CONFIG_H
# include "config.h"
#endif	/* HAVE_CONFIG_H */
#include <stdlib.h>
#include <stdio.h>
#include "dfp754_d32.h"

#if !defined countof
# define countof(x)	(sizeof(x) / sizeof(*x))
#endif	/* !countof */

int
main(void)
{
	_Decimal32 x[] = {
		10.0df / 3.0df, 1.00df / 3.00df, 2.df / 3.df, 21.df / 7.11df,
	};

	for (size_t i = 0U; i < countof(x); i++) {
		char buf[32U];
		int l = d32tostr(buf, sizeof(buf), x[i]);
		buf[l] = '\0';
		puts(buf);
	}
	return 0;
}

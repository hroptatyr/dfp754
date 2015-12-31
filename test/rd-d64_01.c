#if defined HAVE_CONFIG_H
# include "config.h"
#endif	/* HAVE_CONFIG_H */
#include <stdlib.h>
#include <stdio.h>
#include "dfp754_d64.h"

#if !defined _Static_assert
# define _Static_assert(cond, msg)
#endif	/* !_Static_assert */
#define static_assert(x)	_Static_assert(x, paste("in line ", __LINE__))

#if !defined countof
# define countof(x)	(sizeof(x) / sizeof(*x))
#endif	/* !countof */

int
main(void)
{
	static const char *src[] = {
		"0", "1", "1.23", "0.23", "1.234", "12.34",
		"12", "100", "123",
		"9898", "989.8", "98.98", "9.898", ".9898",
	};
	_Decimal64 ref[] = {
		0.df, 1.df, 1.23df, 0.23df, 1.234df, 12.34df,
		12.df, 100.df, 123.df,
		9898.df, 989.8df, 98.98df, 9.898df, .9898df,
	};
	int res = 0;

	static_assert(countof(src) == countof(ref));
	for (size_t i = 0U; i < countof(src); i++) {
		char *on;
		_Decimal64 x = strtod64(src[i], &on);
		if (x != ref[i]) {
			printf("%x v %x\n", bits64(ref[i]), bits64(x));
			res = 1;
		}
	}
	return res;
}

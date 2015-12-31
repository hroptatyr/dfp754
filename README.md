dfp754
======

Source-only library of some common I/O routines on IEEE 754-2008
decimal floating point numbers (_Decimal32 and _Decimal64), trimmed
down for speed.

In particular, `strtod32` and `strtod64` won't accept exponents,
and conversely their counterparts `d32tostr` and `d64tostr` won't
print exponents.

In addition, there's an autoconf macro `SXE_CHECK_DFP754` to check
for headers, library support as well as compiler internals, like
the representation of number literals and casts.


See also
--------

See WG14's effort to standardise decimal floats in the C programming
language: http://www.open-std.org/jtc1/sc22/wg14/www/projects

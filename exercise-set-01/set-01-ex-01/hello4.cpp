/*
 * PZhelp is a header file defining a set of C macros that are meant to
 * facilitate first-year students learning C++. All these macros are written in
 * UPPERCASE letters, so they can be easily distinguished from things existing in
 * regular C.
 *
 * Link to the official PZhelp repository: https://github.com/softlab-ntua/pzhelp
 */

#include "pzhelp"

const int n = 20;
int i;

PROC num_hello () {
  WRITELN(i, "hello world");
}

PROGRAM {
  FOR(i, 1 TO n) num_hello();
}

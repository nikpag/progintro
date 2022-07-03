/*
 * PZhelp is a header file defining a set of C macros that are meant to
 * facilitate first-year students learning C++. All these macros are written in
 * UPPERCASE letters, so they can be easily distinguished from things existing in
 * regular C.
 *
 * Link to the official PZhelp repository: https://github.com/softlab-ntua/pzhelp
 */

#include "pzhelp"

PROC hello () {
  WRITELN("hello world");
}

PROGRAM {
  int n, i;
  WRITE("Give number of greetings then press <enter>: ");
  n = READ_INT();
  if (n < 0) WRITELN("The number", n, "is negative");
  else FOR(i, 1 TO n) hello();
}

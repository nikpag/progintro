/*
 * PZhelp is a header file defining a set of C macros that are meant to
 * facilitate first-year students learning C++. All these macros are written in
 * UPPERCASE letters, so they can be easily distinguished from things existing in
 * regular C.
 *
 * Link to the official PZhelp repository: https://github.com/softlab-ntua/pzhelp
 */

#include "pzhelp"

int main() {
  REAL a = READ_REAL(), b = READ_REAL();
  if (a != 0) {
    if (b == 0) WRITELN("0.000000");
    else WRITELN(FORM((-1) * b / a, 0, 6));
  }
  else if (a == 0 and b == 0) WRITELN("trivial");
  else WRITELN("impossible");
}

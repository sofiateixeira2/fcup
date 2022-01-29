#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXSYM   32
/*
 * Obtain a backtrace and print it to stdout. Adapted from:
 * https://www.gnu.org/software/libc/manual/html_node/Backtraces.html
 */
void print_trace (void) {
  void *array[MAXSYM];
  char **strings;
  int size, i;
  size = backtrace (array, MAXSYM);
  strings = backtrace_symbols (array, size);
  if (strings != NULL) {
    printf ("Obtained %d stack frames.\n", size);
    for (i = 0; i < size; i++)printf ("%s\n", strings[i]);
  }
  free (strings);
}
/* Threaded function calls to show the backtrace */

void f4 (void) { print_trace (); }
void f3 (void) { f4 (); print_trace (); }
void f2 (void) { f3 (); print_trace (); }
void f1 (void) { f2 (); print_trace (); }
int  main (void) { f1 (); print_trace (); return 0; }

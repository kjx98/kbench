#include <string.h>

#include "benchmark.h"

/* The implementation */
#include "hashit.h"

/* =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

#define H_HT_TYPE  OADDRESS_H

static int cmp_int_fn (void * a, void * b)
{
  return * (unsigned *) a - * (unsigned *) b;
}


static int cmp_str_fn (void * a, void * b)
{
  return strcmp (a, b);
}

/* =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

#include "hashit-open-udb.c"
#include "hashit-open-grow.c"


int main (int argc, char * argv [])
{
  return udb_benchmark (argc, argv, udb_int, udb_str, grow_int, grow_str);
}

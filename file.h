#ifndef FILE_H
#define FILE_H

#include <stddef.h>
#include <stdio.h>

/* returns the number after a colon, or -1 in case of an error */
ssize_t obj_num(FILE *f);

#endif


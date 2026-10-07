#include "file.h"

ssize_t
obj_num(FILE *f) {
	size_t sz;

	if(fscanf(f, "%*[^:]:%zu;\n", &sz) != 1) return -1;
	return sz;
}


#include "test.h"
#include <stdio.h>
#include <stdlib.h>

#include "file.h"

#define DIE(...) \
	do { \
		fprintf(stderr, __VA_ARGS__); \
		exit(1); \
	} while(0);

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;

	struct obj{
		char teacher[32];
		char name[32];
		char room[8];
		int day;
		int starts;
		int ends;
	};

	

	FILE *tp = fopen("table1", "r");
	int n=obj_num(tp);
	if(n < 0) DIE("expected a string, a colon, a number, and a semicolon");
	printf("%i", n);
	printf("\n");
}

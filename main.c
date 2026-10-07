#include "test.h"
#include <stdio.h>


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
	test();
	printf("%d\n", NWD(15,36));

FILE *tp = fopen("table1", "r");
int n=howManyObjs(tp);
printf("%i", n);
}

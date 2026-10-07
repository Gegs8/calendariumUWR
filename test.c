#include "test.h"
#include <stdio.h>

int power(int a, int b){
	if(b==0)return 1;
	while(b!=1){
		b--;
	a*=a;
	}
	return a;
}
void test() {
	puts("test");
}
int NWD(int a, int b)
{
	int t;
	while(b!=0){
	t=b;
	b=a%b;
	a=t;
	}
	return a;
}


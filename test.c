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
int howManyObjs(FILE *tp){
	char buffer[10];
	if(fgets(buffer, sizeof(buffer),tp)!=NULL){
		printf("%s", buffer);
	}
	int i = 2;
	int n = 0;
	while(buffer[i]!=';'){
	i++;
	}
	int a = i-1;
	while(i!=2){
		
		n+=(buffer[i-1]-'0')*power(10, a-i+1);
		i--;
	}
	
	return n;
}


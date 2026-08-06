#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float a,b,c;
	float x,y,z;
	
	a = 8;
	b = 19;
	x = a/b;
	y = a-b;
	z = a+b;
	c = a*b;
	
	
	printf("As operações de %f e %f são / %f - %f + %f * %f" , a,b,x,y,z,c);
	
	return 0;
}


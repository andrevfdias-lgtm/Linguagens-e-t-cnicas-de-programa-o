#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, c, r, m, n;
	
	a = 10;
	b = 1;
	c = 0;
	
	r = a == b;
	
	m = a > b;
	
	n = a != b;
	
	printf ("%d, %d, %d", r, m, n);
	
	return 0;
}

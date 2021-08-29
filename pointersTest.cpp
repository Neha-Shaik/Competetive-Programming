#include <stdio.h>

int main() {
    // Write C code here
  	float x = 5.66;
 	void *p = &x;
  	printf("%f", *(float *)p);
	return 0;
}

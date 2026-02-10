#include <stdio.h>


//function prototype
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 
//or void swapArray(int *a, int *b, int size); 


int main() {
	int a = 1, b = 2, c = 3, i;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a, &b, &c);
	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
}


void swapValue(int *a, int *b, int *c) {
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

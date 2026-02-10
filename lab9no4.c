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
	
	
	int x[] = {1, 2, 3};
	int y[] = {4, 5, 6};
	
	printf("\nBefore swapArray:\n");
	for(i=0; i<3; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	for(i=0; i<3; i++) {
		printf("%d ", y[i]);
	}
	swapArray(x, y, 3);
	printf("\nAfter swapArray:\n");
	for(i=0; i<3; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	for(i=0; i<3; i++) {
		printf("%d ", y[i]);
	}
}


void swapValue(int *a, int *b, int *c) {
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}


void swapArray(int *a, int *b, int size) {
	int temp, i;
	for(i=0; i<size; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

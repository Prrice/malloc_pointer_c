#include <stdio.h>
#include <stdlib.h>

int *ptr;
int counter;

char *src = "studying operating systems is fun!";
char *dst;

int main(){
	ptr = (int*) malloc(100 * sizeof(int));

	counter = 0;

	while(counter < 100){
		ptr[counter] = counter;
		counter++;
	}

	for(int i = 0; i < 100; i++){
		printf("%d\n", ptr[i]);
	}

	dst = (char*) malloc(sizeof(src) * sizeof(char));
	counter = 0;

	char *tempPtr = src;

	while(*tempPtr != '\0'){
		printf("%c", *tempPtr);
		dst[counter] = *tempPtr;
		tempPtr++;
		counter++;
	}

	printf("\n");
	tempPtr = dst;

	while(*tempPtr != '\0'){
		printf("%c", *tempPtr);
		tempPtr++;
	}

	printf("\n");

	printf("%p\n", (void*)src);
	printf("%p\n", (void*)dst);

	free(ptr);
	printf("Done\n");
	free(dst);
	printf("Done\n");

	return 0;
}

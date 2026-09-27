#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 2){
		fprintf(stderr, "Usage: %s <number>\n", argv[0]);
		return 1;
}

	int number = atoi(argv[1]);

	if (number < 0) {
		fprintf(stderr, "Error: enter a nonnegative number.\n");
		 return 1;

}
	
	unsigned long long factorial = 1;

	for (int i = 1; i <= number; i++){
		factorial *= i;
	}


	printf("%llu\n", factorial);
	return 0;

}

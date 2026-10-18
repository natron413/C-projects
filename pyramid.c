#include <stdio.h>


int main(){

	int i;
	int j;
	int n;


	printf("what'll be the height of your pyramid?: ");
	
	scanf("%d", &n);


	for(i = 0;i < n; i++){

		for(j = 0; j < n - 1 - i; j++){
			printf(" ");
			}

	
		for(j = 0; j < i * 2 + 1; j++){
			printf("*");
		}

		printf("\n");	
	}

	return 0;
}




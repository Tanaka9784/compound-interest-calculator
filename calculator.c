#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	printf(argv[0]);
	printf("\n");
	float principal = atof(argv[1]);
	float interest = atof(argv[2]); 
	float years = atof(argv[3]); 
	float answer = principal;
	int i;
	printf("%f\n", principal);
	for(i = 0; i < years; i++){
		answer = answer * (1 + interest/100);
	}
	printf("%f\n",answer);
	return 0;
}



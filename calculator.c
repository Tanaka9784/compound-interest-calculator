#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	float principal = atof(argv[1]);
	float interest = atof(argv[2]); 
	float years = atof(argv[3]); 
	float answer = principal;
	int i;
	for(i = 0; i < years; i++){
		answer = answer * (1 + interest/100);
	}
	printf("%f become %f.\n", principal, answer);
	//anser = principal * ( 1.05 ^ years )
	return 0;
}



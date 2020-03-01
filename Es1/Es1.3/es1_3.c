#include<stdio.h>

int main(){
	float far, cel, step , l, u;
	l = 0; //Hardcoded !
	u = 300; 
	step = 10;
	far = 0;
	printf("Temperature degree conversion: \n ");
	while(far <= u){
		cel = (far -32)*(5.0/9.0);
		printf("Far: %.3f  Cel: %.3f \n", far, cel);
		far += step;
	}
	return 0;
}

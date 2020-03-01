#include<stdio.h>

int main(){
	float far, cel , u, l, step;
	l = 0;
	u = 300;
	step = 10;
	cel = 0;
	printf("Table temperature conversion:\n");
	while(cel <= u){
		far = cel*(9.0/5.0) +32;
		printf("Far: %.3f  Cel: %.3f\n", far, cel);
		cel += step;
	}
	return 0;
}


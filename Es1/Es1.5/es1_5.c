#include<stdio.h>

int main(){
	float far, cel , u , l , step;
	step = 10;
	l = 0;
	u = 300;
	far = 300;
	printf("Tabel conversion Temperature \n");
	while(far >= l ){
		cel = (far -32 )*(5.0/9.0);
		printf("Far: %.3f  Cel: %.3f \n",far ,cel);
		far -= step;
	}

	return 0;
}

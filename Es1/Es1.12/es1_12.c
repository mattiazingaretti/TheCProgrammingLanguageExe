#include<stdio.h>

int main(){
	//Word per line printer.
	int c, printed = 0;
	while( (c = getchar()) != EOF){
		if(c != ' ' && c != '\t' && c != '\n' ){
			printf("%c", c);
			printed = 0;
		}else if(!printed){
			printed = 1;
			printf("\n");
		}
		
	}
	return 0;
}


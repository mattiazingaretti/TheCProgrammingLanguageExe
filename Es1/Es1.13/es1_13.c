#include<stdio.h>

int main(){
	int c ,i= 0, printed =0;
	char currentWord[100];
	while((c = getchar()) != EOF && c != '*'){
		if(c != ' ' || c == '\n'){
			currentWord[i] = (char) c;
		}
		if(c == ' ' || c == '\n'){
			if(printed ==0){ printf("Histogram of the input: \n"); printed = 1;}
			currentWord[i] = '*';
			int j = 0;
			while(currentWord[j] != '*'){
				putchar(currentWord[j]); 	
				j++;
			}
			printf("  :  ");
			int k = 0;
			while(k < j){ putchar('*'); k++;}
			putchar('\n');
			
			i = -1;
		}
		if(c == '\n'){printed = 0;}
		
		i++;
			
		
	}
	return 0;
}

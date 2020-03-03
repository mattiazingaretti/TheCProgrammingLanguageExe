#include<stdio.h>

int main(){
	int c;
	while((c = getchar()) != EOF && c != '*'){	
		if(c != '\n'){
			if(c =='	'){putchar('\\'); putchar('t');}
			else if(c == ' '){putchar('\\'); putchar('b');}
			else if(c == '\\'){putchar('\\'); putchar('\\');}
			else putchar(c);
		}
	}
	return 0;
}


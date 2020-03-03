#include<stdio.h>

int main(){	
	int c;
	printf("Star escape char\n");
	while((c =getchar()) != '*' && c != EOF){
		while(c != '\n'){
			if(c != ' '){
				putchar(c);	
			}else  {
				while(c == ' '){c = getchar();}
				putchar('*');
				putchar(c);
				}	
			c = getchar();
		}
		putchar('\n');
	}

	return 0;
}

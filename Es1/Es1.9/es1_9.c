#include<stdio.h>

int main(){	
	int c,entrato = 0 ;
	printf("Star escape char\n");
	while((c =getchar() != '*' && c != EOF){
		while(c != '\n'){
			if(c != ' '){
				putchar(c);	
			}else {while(c == ' '){;}
				putchar(' ');}
			}
			c = getchar();
		}
	}

	return 0;
}

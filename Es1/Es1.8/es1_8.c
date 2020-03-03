#include<stdio.h>

int main(){
	//Counts blanks 
	//Counts Tabs
	//counts newlines
	int c, blank=0 , newLine=0, tabs=0; //int riesce a contenere EOF
	while((c = getchar()) != EOF){
		if(c == ' ' ) blank++;
		else if(c == '\n') newLine++;
		else if(c == '\t') tabs++;
	}
	printf("Total: b %d : n %d : t %d \n", blank, newLine, tabs);
	return 0;

}

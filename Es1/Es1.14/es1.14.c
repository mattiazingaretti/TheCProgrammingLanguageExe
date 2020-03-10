#include<stdio.h>

//Write a program to print a histogram of the frequencies of different characters in its input.

int main(){
    int c, countChar = 0;
    while ((c = getchar()) != EOF) {
        if(c != '\n'){
            countChar++;
            
        }else{
            
        }
    }
    
    
/*int c,j, i,count[100],in =0, f, len = 0, index = 0;
    char  charSet[100];
    int k = 0;
    while(k <100){
        count[k] = 0;
        charSet[k] = 0;
        k++;
    }
    while ((c = getchar()) != EOF) {
        if(c == '\n'){
            //Calcolo numeri caratteri nella riga
            k = 0;
            while(charSet[k] != 0 && k < 100){ len++;}
            k = 0;
            for(int s = 0; s < 100; s++){
                f =  count[s] / len;
                printf("Char : %c  Freq: ",charSet[s] );
                while(k < f){
                    printf("*");
                    k++;
                }
                printf("\n");
            }
            len = 0;
            k = 0;
            
            while(k <100){
                count[k] = 0;
                charSet[k] = 0;
                k++;
            }
            
            
        }else {
            in = 0;
            for(i = 0; i< 100 && in == 0; i++){
                if (c == charSet[i]) {
                    in = 1;
                    index = i;
                }
            }
            if(in == 0){
                //Salva l'elemento in charSet e incrementa di uno il corrispondente indice in count
                for (j = 0; j< 100 && charSet[j] != 0; j++) {;}//printf("charset[j] %c\n", charSet[j]);}
                charSet[j] = c;
                
            }else{
                //Aggiorna il valore in count
                count[index]++;
                
            }
            printf("%c %d %c \n", c , count[i], charSet[j]);
        }
    }
*/
    return 0;
}

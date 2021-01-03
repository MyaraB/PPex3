#include <stdio.h>
#include <string.h>
#include "txtfind.h"

int main(){
    char c = ' ';
    char buf[LINE];
    fgets(buf, 256, stdin);
    char word1[WORD];
    char word2[WORD];
    int i = 0;
    while(i < 256){
        if (buf[i] == ' ' || buf[i] == '\n' || buf[i] == '\t')
            break;
        word1[i] = buf[i];
        i++;
    }
    word1[i] = '\0';
    i++;
    c = buf[i];
    fgets(buf, 256, stdin);
    int counter;
    if( c == 'a'){
        while (fgets(buf, 256, stdin)){
            counter = 0;
            int j = 0;
            while(buf[j] != '\n'){
                if(buf[j] != ' ' && buf[j] != '\t' && buf[j] != '\0' ){
                    word2[counter] = buf[j];
                    counter++;
                }
                else
                    counter = 0;
                if (substring(word2, word1)){
                    printf("%s", buf);
                    counter = 0;
                    break;
                }
                j++;
            }
            
        }
        
    }
    if( c == 'b'){
        while (fgets(buf, 256, stdin)){
            counter = 0;
            int j = 0;
            while(buf[j] != '\n'){
                if(buf[j] != ' ' && buf[j] != '\t' && buf[j] != '\0'){
                    word2[counter] = buf[j];
                    counter++;
                }
                else{
                    if (similar(word2, word1))
                        printf("%s\n", word2);
                    counter = 0;
                    memset(word2, 0, strlen(word2));
                }
                j++;
            }
            
        }
        
    }
    return 0;
}

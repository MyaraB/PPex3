#include <stdio.h>
#include "txtfind.h"
#include <string.h>

int substring(char* stra,char* strb){
    int counter = 0;
    int lena = (int)strlen(stra);
    int lenb = (int)strlen(strb);
    if(lena == lenb){
        for(int i = 0; i < lena; i++)
            if(stra[i]!=strb[i])
                return 0;
        return 1;
    }
    if(lenb>lena)
        return 0;
    
    for(int i=0; i<lena; i++){
        if(stra[i]==strb[0] && i+lenb <= lena)
            for(int j = 0; j < lenb; j++)
                if(stra[i+j] == strb[j])
                    counter++;
        if(counter == lenb)
            return 1;
        counter = 0;
    }
    return 0;
}

int similar(char* stra, char* strb){
    int counter=0;
    
    int lena= (int)strlen(stra);
    int lenb= (int)strlen(strb);
    if(lena == lenb){
        for(int i = 0; i < lena; i++){
            if(stra[i]!=strb[i])
                return 0;
            return 1;   
    	}
    }
    if(lenb > lena)
    	return 0;
    for(int i = 0; i < lenb; i++)
    	for(int j = 0; j < 2; j++)
    		if(strb[i] == stra[i + j]){
    		counter++;
    		break;
   		}
   if(counter == lenb)
   	return 1;
return 0;
}

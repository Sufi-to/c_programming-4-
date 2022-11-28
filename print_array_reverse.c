#include<stdio.h>

int main (void){
    
    char lword[68][41];
    int i;
    int j;

    for (i = 0; i<68;i++){
        scanf("%s", lword[i]);
    }
    for (j =67; j>=0; j--){
       
        if (j == 0){
             printf("%s", lword[j]);
        }else{
            printf("%s ", lword[j]);
        }
 
    
        
    }
    return 0;
}
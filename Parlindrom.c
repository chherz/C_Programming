#include <stdio.h>




int main (){
    
    int count = 0;
    char parlindrom[100];
    /*printf("Bitte geben Sie die laenge Ihres Wortes ein: \n");
    scanf("%d", &count);
    char parlindrom[count];*/
    
    printf("Bitte geben Sie ein Wort ein: \n");
    scanf("%s", parlindrom);
    
    while(parlindrom[count] != '\0'){
        if (parlindrom[count] >= 65 && parlindrom[count] <= 90){
            parlindrom[count] += 32;
        }
        count++;
    }
    
    if(count < 1){
        printf("Das Wort %s ist kein Parlindrom", parlindrom);
        return 0;
    }
    
    for(int i=0; i< count/2; i++){
        if(parlindrom[i] != parlindrom[count-1-i]){
            printf("Das Wort %s ist kein Parlindrom", parlindrom);
            return -1;
        }
    }
    
    printf("Das Wort %s ist ein Parlindrom", parlindrom);
    
    
    return 0;
    
    
    
    
}

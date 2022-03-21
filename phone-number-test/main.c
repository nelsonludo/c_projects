#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 8;
    int pNumber[size];

    printf("Please enter your phone number \n");
    for(int i=0; i<size; i++){
         scanf("%d", pNumber[i]);
    }

    printf("The number is %d", pNumber);

    return 0;
};

/*int startWith(char number[],int x){
    if(number[0] == x){
        return 1;
    } else {
        return 0;
    }
};*/


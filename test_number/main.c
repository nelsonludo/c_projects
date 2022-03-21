#include <stdio.h>
#include <stdlib.h>

int phoneNumber[100];
int finalNumber[100];

int main()
{
    getValues(phoneNumber,8);
    printf("\n");
    final(phoneNumber);
}

void getValues(int number[], int size)
{
    printf("Enter your phone number here: !\n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&number[i]);
    }
}

int startsWith(int number[], int x){
    if (number[0] == x)
    {
        return 1;
    } else
    {
        return 0;
    }
}

int secondnumber(int number[8],int lowerL,int upperL){
    if (number[1] >= lowerL && number[1] <= upperL){
        return 1;
    } else{
        return 0;
    }
}
int isMtn(int number[]){
    if (startsWith(number, 7)==1){
        return 1;
    } else{
        if (startsWith(number, 5)==1 || startsWith(number, 8)==1){
            if (secondnumber(number, 1, 4)){
                return 1;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    }
}
int isOrange(int number[]){
    if (startsWith(number, 9)==1){
        return 1;
    } else{
        if (startsWith(number, 5)==1){
            if (secondnumber(number, 5, 9)==1){
                return 1;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    }
}

int isNextel(int number[]){
    if (startsWith(number, 6)==1){
        return 1;
    } else{
        if (startsWith(number, 8)==1){
            if (secondnumber(number, 5, 9)==1){
                return 1;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    }
}
int isCamtel(int number[]){
    if (startsWith(number, 2)==1){
        return 1;
    } else{
            return 0;
    }
}



void addSomething(int number[],int whatToAdd, int size, int index){
    size++;


    for (int i=size - 1;i>=index;i--)
    {
        number[i]=number[i-1];
    }

    number[index]=whatToAdd;

    for (int i=0;i<size;i++)
    {
        finalNumber[i]=number[i];
    }
}


void final(int number[]){
    if (isMtn(number)==1){
        printf("Your phone number is an MTN number and your new number is: ");
        addSomething(number,6,8,0);
        for (int i = 0;i<9;i++)
        {
            printf("%d",finalNumber[i]);
        }
    }
    else if (isOrange(number)==1){
        printf("Your phone number is an Orange number and your new number is: ");
        addSomething(number,6,8,0);
        for (int i = 0;i<9;i++)
        {
            printf("%d",finalNumber[i]);
        }
    }
    else if (isNextel(number)==1){
        printf("Your phone number is a Nextel number and your new number is: ");
        addSomething(number,6,8,0);
        for (int i = 0;i<9;i++)
        {
            printf("%d",finalNumber[i]);
        }
    }
    else if(isCamtel(number)){
        printf("Your phone number is a Camtel number and your new number is: ");
        addSomething(number,2,8,0);
        for (int i = 0;i<9;i++)
        {
            printf("%d",finalNumber[i]);
        }
    } else{
        printf("The number entered is not valid in Cameroon or was wrongly entered \n");
        getValues(phoneNumber,8);
        printf("\n");
        final(phoneNumber);
    }
}




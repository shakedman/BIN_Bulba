#include <iostream>

void Func_Init();
void Func_Input_Num_Sys();
void Func_Input_Number();

// declaration of global variables, which we get from user
int Num_Sys=0;
int Number=0;

void Func_translate(int NUMBER_SYSTEM, int USER_NUMBER);
int Func_Dec(int USER_NUMBER);
int Func_Bin(int USER_NUMBER);
int Func_Oct(int USER_NUMBER);
int Func_Hex(int USER_NUMBER);


int main()
{
    void Func_Init();
    void Func_translate(Num_Sys, Number);
       
    return 0;
}

void Func_Init(){
    printf("Hello, you in <BiN CaLCuLaToR>!\n");

    printf("There`re presented such number systems, as:\n");
    printf("Binary, values from 0 to 1, <2> to choose;\n");
    printf("Octal, values from 0 to 7, <8> to choose;\n");
    printf("Decimal, values from 0 to 9, <10> to choose;\n");
    printf("Hexadecimal, values from 0 to F, <16> to choose;\n");

    printf("Please, enter corresponding number to choose number system:\n");
    Func_Input_Num_Sys();

    Func_Input_Number();

}

//used in Func_Init()
void Func_Input_Num_Sys(){
    bool Accepted_Num_Sys=false;

    do{
    printf("Please, enter corresponding number to choose number system:\n");
    scanf("%d", Num_Sys );

    switch (Num_Sys)
    {
    case 2:
    case 8:
    case 10:
    case 16:
        printf("Okay, your choise is \"");
        printf(Num_Sys);
        printf("\" and it is accepted.\n");
        Accepted_Num_Sys=true;
        break;
    
    default:
        printf("Wrong number! Please, try again.\n")
        break;
    }
    }while (!Accepted_Num_Sys)
}

//used in Func_Init()
void Func_Input_Number(){

    printf("Please, enter the number to calculate it to another number system:\n");
    scanf("%d", Number );

    printf("Okay, your number is \"");
    printf(Number);
    printf("\".\n");
}



void Func_translate(int NUMBER_SYSTEM, int USER_NUMBER);
{
    switch (NUMBER_SYSTEM)
    {
    case 2:
    printf("Your number in octal is : ");
    printf("%d\n", Func_Oct());
    printf("Your number in decimal is : ");
    printf("%d\n", Func_Dec());
    printf("Your number in Hexadecimal is : ");
    printf("%d\n", Func_Hex());
        break;

    case 8:
    printf("Your number in binary is : ");
    printf("%d\n", Func_Bin());
    printf("Your number in decimal is : ");
    printf("%d\n", Func_Dec());
    printf("Your number in Hexadecimal is : ");
    printf("%d\n", Func_Hex());
        break;

    case 10:
    printf("Your number in binary is : ");
    printf("%d\n", Func_Bin());
    printf("Your number in octal is : ");
    printf("%d\n", Func_Oct());
    printf("Your number in Hexadecimal is : ");
    printf("%d\n", Func_Hex());
        break;

    case 16:
    printf("Your number in binary is : ");
    printf("%d\n", Func_Bin());
    printf("Your number in octal is : ");
    printf("%d\n", Func_Oct());
    printf("Your number in decimal is : ");
    printf("%d\n", Func_Dec());
        break;
    
    default:
        break;
    }
}


int Func_Dec(int USER_NUMBER){}
int Func_Bin(int USER_NUMBER){}
int Func_Oct(int USER_NUMBER){}
int Func_Hex(int USER_NUMBER){}
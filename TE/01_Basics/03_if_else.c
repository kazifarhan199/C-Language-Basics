#include<stdio.h>

int  main(){
    int age;
    float code;

    printf("Enter you'r age : ");
    scanf("%d", &age);

// if else
    if (age >= 18){
        printf("So you are an adult 🤔️ \n");

    }
    else{
        printf("So you are not an adult 🙄️\n");

    }

// else if
    printf("Enter the code : ");
    scanf("%f", &code);
    if (code == 3.14f){
        printf("That is correct \n");
    }
    else if(code == 3.1f){
        printf("Quite close 🙄️ \n");
    }
    else{
        printf("Nop code is wrong !\n");
    }
}
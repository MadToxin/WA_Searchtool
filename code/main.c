#include <stdio.h>
#include <json.h>
#include "functions.h"
//vittu mitä paskaa
//compile with "gcc -I./json_lib -I./funcs code/main.c code/indexer.c -o exes/program" koska vittu

int main(void)//man its the main i dunno what to tell you
{
    int choice = 0;

    printf("Choose program to run:\n1) Indexer\n");
    //tähän lisää sit kun tulee
    scanf("%i", &choice);
    while ((getchar()) != '\n');

    int keep_going = 0;
    while(keep_going == 0){
        if(choice == 1){
            reader_main();
            keep_going = 1;
        }
        else{
            printf("Choose one");
        }
    }

    return(0);
}
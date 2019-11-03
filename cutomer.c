//
// Created by Irina on 01-Nov-19.
//

#include <stdio.h>

void readPersonalData(char firstName[], char lastName[],char phoneNumber[], char address[]){
    // Input personal data
    printf("Please input your data\n");
    printf("---First name:\n");
    gets(firstName);
    printf("---Last name:\n");
    gets(lastName);
    printf("---Phone number\n");
    gets(phoneNumber);
    printf("---Address\n");
    gets(address);
}

void showCustomerData(char firstName[], char lastName[], char phoneNumber[], char address[]){
    printf("Customer data:\n");
    printf("-name: %s %s\n", firstName, lastName);
    printf("-phone number: %s\n", phoneNumber);
    printf("-address: %s\n", address);
}
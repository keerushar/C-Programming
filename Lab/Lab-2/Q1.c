// Question: Write a program to take information of a student as input and display it.
#include <stdio.h>

int main() {
    char name[50];
    int roll_no, age;
    long long phone_number;
    char email[100];
    
    // Input
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll_no);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter phone number: ");
    scanf("%lld", &phone_number);
    printf("Enter email address: ");
    scanf("%s", email);
    
    // Output
    printf("Student Information:\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll_no);
    printf("Age: %d\n", age);
    printf("Phone Number: %lld\n", phone_number);
    printf("Email Address: %s\n");
    
    return 0;
}

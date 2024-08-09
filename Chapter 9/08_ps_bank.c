#include <stdio.h>

struct BankAccount
{
    int accountNumber;
    char accountHolderName[100];
    char accountType[20];
    double balance;
    char branchName[50];
};

int main()
{
    struct BankAccount customer1;

    customer1.accountNumber = 12345678;
    snprintf(customer1.accountHolderName, sizeof(customer1.accountHolderName), "John Doe");
    snprintf(customer1.accountType, sizeof(customer1.accountType), "Savings");
    customer1.balance = 1000.50;
    snprintf(customer1.branchName, sizeof(customer1.branchName), "Main Street Branch");

    printf("Account Number: %d\n", customer1.accountNumber);
    printf("Account Holder Name: %s\n", customer1.accountHolderName);
    printf("Account Type: %s\n", customer1.accountType);
    printf("Balance: %.2f\n", customer1.balance);
    printf("Branch Name: %s\n", customer1.branchName);
    return 0;
}
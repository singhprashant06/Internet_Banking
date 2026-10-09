#include <stdio.h>
#include <string.h>        // is header file under which strcmp, strcpy, stringlen (string compare, string copy, string length)

int main() {
    char Username[50];   
    const char SecAdmin[] = "Prashant";     // Use Const Char/int when value of any variable is fix.
    const int SecPass = 001;
    int Pass;
    int login_Succesful = 0;

    printf("Username: ");
    scanf("%49s", Username);           // Using 49 bit only beacuse 1 bit left for space

    printf("Password: ");
    scanf("%d", &Pass);

   if (strcmp(Username, SecAdmin) == 0 && Pass == SecPass){           // use strcmp when used to compare 
    printf("\nLogin Succesful!"); 
    printf("\n\n\n =====NOIDA BANK=====");
  printf("\nWelcome %s", Username);
  printf("\n1. Check Balance\n");
  printf("2. Deposit Money\n");
  printf("3. Withdraw Money\n");
  printf("4. Add Account\n");
  printf("5. Transfer Money\n");
  printf("6. Transaction Summary\n");
  printf("7. Logout");
   }
   else { printf("Invalid Username or Password");
   }

   

    return 0;}
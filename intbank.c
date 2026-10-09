#include <stdio.h>
#include <string.h>        // is header file under which strcmp, strcpy, stringlen (string compare, string copy, string length)

int main() {
    char Username[50], Ac_name[50], Ac_nickname [49];   
    const char SecAdmin[] = "Prashant";     // Use Const Char/int when value of any variable is fix.
    const int SecPass = 001;
    const int BankingPass = 0261001;
    int Pass, acc_no, re_acc_no, IFSC_codes;

    printf("Username: ");
    scanf("%49s", Username);           // Using 49 bit only beacuse 1 bit left for space

    printf("Password: ");
    scanf("%d", &Pass);

   if (strcmp(Username, SecAdmin) == 0 && Pass == SecPass){           // use strcmp when used to compare 
    printf("\nLogin Succesful!"); 
    printf("\n\n\n =====NOIDA BANK====="); 
  printf("\nWelcome %s", Username);

  int choice, wd_choice;                                           // wd --> Withdrawl 

  printf("\n1. Check Balance\n");
  printf("2. Deposit Money\n");
  printf("3. Withdraw Money\n");
  printf("4. Add Benificary\n");
  printf("5. Transfer Money\n");
  printf("6. Transaction Summary\n");
  printf("7. Logout");

  printf("\n\nEnter the Serivce want to avail: ");
  scanf("%d", &choice);


     
  switch (choice)
  {                  // check balance
  case 1:
  printf("Your current balance is: 10,000/- INR");                // balance fixed 10k
    break;


                     // deposit money with option
  case 2:                     
    printf("\nDeposit moeny\n");
    printf("1. Nearby Bank\n");
     printf("2. Visit nearby ATM\n");
     printf("Enter your choice: ");                     // choice to avail serivce
    scanf("%d", &wd_choice);

    switch(wd_choice){                                           // switch inside switch to avail the option of selection between to

     case 1 :
     printf("==== Nearby ATM ====\n");
     printf("\n1. Branch KP-3 \n   Plot 19 Second Floor 206\n");
     printf("\n2. Branch KP-3 \n   Plot 15 First Floor 106\n");
     printf("\n3. Branch Pari Chowk \n   Nearby XYZ 4th Floor 402\n");
    break;

    case 2 :
    printf("==== Nearby ATM ====\n");
     printf("1. Branch KP-3 \n   Plot 19 Second Floor 206\n");
     printf("\n2. Branch KP-3 \n   Plot 15 First Floor 106\n");
     printf("\n3. Branch Pari Chowk \n   Nearby XYZ 4th Floor 402\n");
    break;}
    break;  

            // withdraw money
  case 3:
  printf("\nWithdraw money\n");
  printf("1. Nearby Bank\n");
     printf("2. Visit nearby ATM\n");
     printf("Enter your choice: ");                     // choice to avail serivce
    scanf("%d", &wd_choice);

    switch(wd_choice){                                           // switch inside switch to avail the option of selection between to

     case 1 :                             
     printf("==== Nearby ATM ====\n");
     printf("\n1. Branch KP-3 \n   Plot 19 Second Floor 206\n");
     printf("\n2. Branch KP-3 \n   Plot 15 First Floor 106\n");
     printf("\n3. Branch Pari Chowk \n   Nearby XYZ 4th Floor 402\n");
    break;

    case 2 :
    printf("==== Nearby ATM ====\n");
     printf("1. Branch KP-3 \n   Plot 19 Second Floor 206\n");
     printf("\n2. Branch KP-3 \n   Plot 15 First Floor 106\n");
     printf("\n3. Branch Pari Chowk \n   Nearby XYZ 4th Floor 402\n");
    break;}
    break;


                      // add new account   details
  case 4:
  printf("\n === Add New Benificary ===");                             // under the switch break condition enterd all requireemnts
   printf("\nEnter Account Number: ");
   scanf("%d", &acc_no);
   printf("\nRe-enter Account Number: ");
   scanf("%d", &re_acc_no);
   printf("\nEnter IFSC Code: ");
   scanf("%d", &IFSC_codes);
   printf("\nAccount Holder Name: ");
   scanf("%49s", &Ac_name);
   printf("\nNickname: ");
   scanf("%49s", &Ac_nickname);

  if (acc_no == re_acc_no){                             // used if-else for verification purpose 
    printf("\n -- Benificiary added Succesfully-- \n Acoount Number: %d \n IFSC Code: %d \n Account Holder Name: %s \n Nickname: %s ", acc_no, IFSC_codes, Ac_name, Ac_nickname);
   } 
 else {
    printf("Credentials didnt match Retry!!");        // condition as security and recheck
 }
    break;

 
                                  // money transfer 
  case 5:
  printf("\nMoney Transfer Succesfully");     
                
    break;


                                            // transaction summary
  case 6:                           
  printf("\nTransaction Summary Displayed");
    break;
    
            
                              // logout 
  case 7:
  printf("\nLogout completed");
    break;

                                // default
    default:      
  printf("\nInvalid Choice!");
    break;
  }
   }


   else { printf("Invalid Username or Password");
   }

   

    return 0;}
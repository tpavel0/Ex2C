#include <stdio.h>
#include <stdlib.h>
#include "myBank.h"

int main()
{
    double x;
    int accountNumber,interestRate;
    char c,o,b,d,w,C,i,p,e;
    c='A'; o='O'; b='B'; d='D'; w='W'; C='C';i='I'; p='P'; e='E';
    int count=0;
    
    do{
        
        // getting Transaction type
        printf("Transaction type?:");
        scanf("%c", &c);
        if (c!=o && c!=b && c!=d && c!=w && c!=C && c!=i && c!=p && c!=e){
            printf("wrong input, the only possible Transaction are: O,B,D,W,C,I,P,E\n");
            while ((getchar()) != '\n');
            printf("%c", c);
        }
        // exit
        if(c==e){
            break;
        }
        
        // creating account
        if(c==o){
            while ((getchar()) != '\n');
            printf("Initial deposit?:");
            scanf("%lf",&x);
            OpenAccount(x);
        }
        
        // printing the acount info
        if(c==b){
            while ((getchar()) != '\n'); 
            printf("Account number?:");
            scanf("%d",&accountNumber);
            PrintAccountInfo(accountNumber);
        }
        
        // deposite into existing account
        if(c==d){
            while ((getchar()) != '\n');
            printf("Account number?:");
            scanf("%d",&accountNumber);
            printf("Amount?:");
            scanf("%lf",&x);
            Deposite(accountNumber,x);
        }
        
        // withdrawal from existing account
        if(c==w){
            while ((getchar()) != '\n'); 
            printf("Account number?:");
            scanf("%d",&accountNumber);
            printf("Amount?:");
            scanf("%lf",&x);
            Withdrawal(accountNumber,x);
        }
        
        // close account
        if(c==C){
            while ((getchar()) != '\n');
            printf("Account number?:");
            scanf("%d",&accountNumber);
            CloseAccount(accountNumber);
        }
        // adding interest to all accounts
        if(c==i){
            while ((getchar()) != '\n');
            printf("Interest rate?:");
            scanf("%d",&interestRate);
            Interest(interestRate);
            
        }
        // print all accounts info
        if(c==p){
            while ((getchar()) != '\n');
            PrintAllAccountInfo();
        }
        while ((getchar()) != '\n');

    }while(c!=e);
    
    return 0;
}




















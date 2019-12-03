  #include "myBank.h"
#include <stdio.h>
#include <stdlib.h>

int NumOfAccounts=0;

double mat[2][50]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
 

      

void OpenAccount(double input){
    if(NumOfAccounts>49){
        printf("there is already 50 accounts\n");
        while ((getchar()) != '\n');
        return ;
    }
    if(input<0){
        printf("you cant deposite negative sum\n");
        while ((getchar()) != '\n');
        return ;
    }
    mat[0][NumOfAccounts]=input;
    mat[1][NumOfAccounts]=1;
    NumOfAccounts++;
}
void PrintAccountInfo(int AccNum){
    if(AccNum>950 || AccNum<901){
        printf("wrong account number\n");
        while ((getchar()) != '\n');
        return ;
    }
    if(mat[1][AccNum-901]==0){
        printf("the account is closed\n");
        while ((getchar()) != '\n');
        return ;
    }
    printf("\n%.2f ",mat[0][AccNum-901]);
    while ((getchar()) != '\n');
    printf("  %d",NumOfAccounts);
}

void Deposite(int AccNum,double input){
    
    if(AccNum>950 || AccNum<901){
        printf("wrong account number\n");
        while ((getchar()) != '\n');
        return ;
    }
    if(mat[1][AccNum-901]==0){
        printf("the account is closed\n");
        while ((getchar()) != '\n');
        return ;
    }
     if(input<0){
        printf("you cant deposite negative sum\n");
        while ((getchar()) != '\n');
        return ;
    }
    mat[0][AccNum-901]+=input;
}
void Withdrawal(int AccNum,double amount){
     if(AccNum>950 || AccNum<901){
        printf("wrong account number\n");
        while ((getchar()) != '\n');
        return ;
    }
     if(mat[1][AccNum-901]==0){
        printf("the account is closed\n");
        while ((getchar()) != '\n');
        return ;
    }
    if(mat[0][AccNum-901]<amount){
        printf("not enough money on the account to withdrawal that much\n");
        while ((getchar()) != '\n');
        return ;
    }
    mat[0][AccNum-901]-=amount;
}
void CloseAccount(int AccNum){
    if(AccNum>950 || AccNum<901){
        printf("wrong account number\n");
        while ((getchar()) != '\n');
        return ;
    }
    if(mat[1][AccNum-901]==0){
        printf("the account already closed\n");
        while ((getchar()) != '\n');
        return ;
    }
    else
        mat[1][AccNum-901]=0;
}
void Interest(int interestNum){

    if(interestNum<1){
        printf("interest need to be above zero precentage\n");
        while ((getchar()) != '\n');
        return ;
    }
    for(int j=0;j<50;j++)
        mat[0][j]*=1+(double)interestNum/100;
     
}
void PrintAllAccountInfo(){
  
     for(int j=0;j<NumOfAccounts; j++)
     {
         printf("%.2f ",mat[0][j]);
     }
}
void CloseAllAccounts(){
    
    for(int j=0;j<50;j++)
        mat[1][j]=0;
       
    exit(0); 
}

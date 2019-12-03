  
#ifndef myBank_H
#define myBank_H


void OpenAccount(double input);

void PrintAccountInfo(int AccNum);

void Deposite(int AccNum,double input);

void Withdrawal(int AccNum,double amount);

void CloseAccount(int AccNum);

void Interest(int interestNum);

void PrintAllAccountInfo();

void CloseAllAccounts();



#endif

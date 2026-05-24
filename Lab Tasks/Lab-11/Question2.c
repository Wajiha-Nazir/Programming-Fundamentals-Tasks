#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_ACCOUNTS 100

typedef struct {
    char date[11];
    char type[10];
    float amount;
} Transaction;

typedef struct {
    int accountNo;
    char name[50];
    char type[20]; 
    float balance;
    float interestRate;
    char creationDate[11];
    char lastTransactionDate[11];
    Transaction transactions[50];
    int transactionCount;
} Account;

Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

void addAccount();
void deposit(Account *acc);
void withdraw(Account *acc);
void displayAccount(Account acc);
void showAllAccounts();
void updateDate(char *date);

int main() {
    int choice, i;
    do {
        printf("\n--- Bank Account System ---\n");
        printf("1. Add Account\n2. Deposit\n3. Withdraw\n4. Display All Accounts\n0. Exit\n");
        printf("Enter choice: "); scanf("%d",&choice);

        switch(choice){
            case 1: addAccount(); break;
            case 2: { int accNo; printf("Enter account no: "); scanf("%d",&accNo);
                      for(i=0;i<accountCount;i++) if(accounts[i].accountNo==accNo) {deposit(&accounts[i]); break;} } break;
            case 3: { int accNo; printf("Enter account no: "); scanf("%d",&accNo);
                      for(i=0;i<accountCount;i++) if(accounts[i].accountNo==accNo) {withdraw(&accounts[i]); break;} } break;
            case 4: showAllAccounts(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    }while(choice!=0);
    return 0;
}

void updateDate(char *date){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(date,"%02d/%02d/%04d",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
}

void addAccount(){
    if(accountCount>=MAX_ACCOUNTS){ printf("Max accounts reached!\n"); return;}
    Account a;
    a.accountNo = accountCount+1;
    printf("Enter account holder name: "); getchar(); fgets(a.name,50,stdin); a.name[strcspn(a.name,"\n")]=0;
    int typeChoice;
    printf("Account Type: 1.Savings 2.Current 3.Fixed: "); scanf("%d",&typeChoice);
    if(typeChoice==1){ strcpy(a.type,"Savings"); a.balance=1000; a.interestRate=4; }
    else if(typeChoice==2){ strcpy(a.type,"Current"); a.balance=5000; a.interestRate=0; }
    else { strcpy(a.type,"Fixed Deposit"); a.balance=10000; a.interestRate=7; }
    updateDate(a.creationDate);
    strcpy(a.lastTransactionDate,a.creationDate);
    a.transactionCount=0;
    accounts[accountCount++]=a;
    printf("Account created successfully! Account no: %d\n", a.accountNo);
}

void deposit(Account *acc){
    float amount; printf("Enter deposit amount: "); scanf("%f",&amount);
    acc->balance+=amount;
    updateDate(acc->lastTransactionDate);
    Transaction t; strcpy(t.type,"Deposit"); t.amount=amount; updateDate(t.date);
    acc->transactions[acc->transactionCount++]=t;
    printf("Deposit successful! Current balance: %.2f\n", acc->balance);
}

void withdraw(Account *acc){
    float amount; printf("Enter withdrawal amount: "); scanf("%f",&amount);
    float minBalance = (strcmp(acc->type,"Savings")==0)?1000: (strcmp(acc->type,"Current")==0?5000:10000);
    if(acc->balance-amount<minBalance) {printf("Cannot withdraw. Minimum balance required!\n"); return;}
    acc->balance-=amount;
    updateDate(acc->lastTransactionDate);
    Transaction t; strcpy(t.type,"Withdrawal"); t.amount=amount; updateDate(t.date);
    acc->transactions[acc->transactionCount++]=t;
    printf("Withdrawal successful! Current balance: %.2f\n", acc->balance);
}

void displayAccount(Account acc){
	int i;
    printf("Account No: %d, Name: %s, Type: %s, Balance: %.2f, Interest: %.2f%%, Created: %s, Last Transaction: %s\n",
           acc.accountNo, acc.name, acc.type, acc.balance, acc.interestRate, acc.creationDate, acc.lastTransactionDate);
    printf("Transactions:\n");
    for(i=0;i<acc.transactionCount;i++)
        printf("%s - %s: %.2f\n", acc.transactions[i].date, acc.transactions[i].type, acc.transactions[i].amount);
}

void showAllAccounts(){
	int i;
    if(accountCount==0){ printf("No accounts to display.\n"); return;}
    for(i=0;i<accountCount;i++) displayAccount(accounts[i]);
}


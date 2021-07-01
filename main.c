#include <stdio.h>
#include <string.h>

int main() {
    int defmoney=10000;
    int tmp=0;
    int now=defmoney;
    int id,pwd;
    char op[10];
    int user[1000]={123,123,123,123,123,123,123};
    printf("********* Welcome to SkyLand Bank *********\n");
    printf("********** Please input your ID. **********\n");
    scanf("%d",&id);
    if(id>=1000){
        printf("Your input is illegal!");
    }
    else{
        printf("Please input your password.\n");
        scanf("%d",&pwd);
        if(pwd!=user[id]){
            printf("Your ID or password is incorrect.");
        }
        else{
            while(1) {
                printf("********* Welcome to SkyLand Bank *********\n");
                printf("******* Please input an operation. ********\n");
                printf("*** You can Deposit,Withdraw and Check this time. ***\n");
                printf("*** If you want exit, Please type exit. ***\n");
                scanf("%s",&op);
                if(strcmp(op,"Deposit")==0){
                    printf("******* Please input the amount. ********\n");
                    scanf("%d",&tmp);
                    now+=tmp;
                    if(now > 100000){printf("WARNING! You are having too much money.\nWe suspect you are having fraud actions.\n");}
                    else printf("Done. Your balance is %d now.\n",now);
                }
                if(strcmp(op,"Withdraw")==0){
                    printf("******* Please input the amount. ********\n");
                    scanf("%d",&tmp);
                    now-=tmp;
                    if(now <= 0){printf("Your balance is not enough.\n");}
                    else printf("Done. Your balance is %d now.\n",now);
                }
                if(strcmp(op,"Check")==0){
                    printf("******* Account Info for %d ********\n",id);
                    printf("Your balance is $%d now.\n",now);
                    printf("We expect you can deposit $%d at most.\n",100000-now);
                }
                if(strcmp(op,"Bye")==0){
                    printf("Bye");
                    break;
                }
            }
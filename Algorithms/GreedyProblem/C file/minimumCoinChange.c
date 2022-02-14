/*
You are given infinite supply of n number of coins (ex. 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000).
Your task is to make a change for a sum S (ex. 2573) with smallest possible number of coins.

*/

#include<stdio.h>

int main(){
    int coins[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int amount, n, a;

    printf("Enter the amount: ");
	scanf("%d",&amount);

    printf("Following is smallest possible number of coins: \n");
    int j = 10-1;
        while(amount > 0){
            int coinAmount = amount/coins[j];
            printf("%d is %d\n",coins[j],coinAmount);
            amount = amount - coinAmount*coins[j];
            j--;
        }
}


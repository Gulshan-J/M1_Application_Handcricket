#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main()
{
    printf("Welcome to the Game\n");
    printf("Enter Odd(0) or Even(1) in numbers\n");
    int odd_or_even;
    scanf("%d",&odd_or_even);
    if(odd_or_even==1 || odd_or_even==0)
    {
        int Toss,user_input,Bat_Bowl,user_bat_or_bowl,com_bat_or_bowl;
        printf("Enter a no in the range of 1 to 6\n");
        scanf("%d",&user_input);
        if(user_input==1||user_input==2||user_input==3||user_input==4||user_input==5||user_input==6)
        {
            Toss=toss(user_input,odd_or_even);
        }
        else
        printf("Invalid");
    }
    else
    printf("Invalid");
}
   

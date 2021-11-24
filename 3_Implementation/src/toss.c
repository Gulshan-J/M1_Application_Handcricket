#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int toss(int user_input,int odd_or_even)
    {
    int Bat_Bowl,user_bat_or_bowl,flag=0,com_bat_or_bowl;
    int computer_input,low=1,upp=6;
    srand(time(NULL));
    computer_input=(rand()%(upp+low+1))+low;
    if(odd_or_even==1)
        {
        if((computer_input+user_input)%2==0)
        {
            printf("Its Even\n");
            printf("Computer has chosen the value %d\n",computer_input);
            printf("You won the Toss\n");
            printf("Enter Bat(1) or Bowl(0) in numbers\n");
            scanf("%d",&user_bat_or_bowl);
            if(user_bat_or_bowl==1)
            {
                printf("You chose to Bat\n");
                Bat_Bowl=user_bat();
            }
            else if(user_bat_or_bowl==0)
            {
                printf("You chose to Bowl\n");
                Bat_Bowl=user_bowl();
            }
            else
            printf("Invalid");
            
        }
        else
        {
           
            printf("You lost the Toss\n");
            printf("Computer has chosen the value %d \n",computer_input);
            if(user_input<3){
            printf("Computer has chosen to BAT\n");
            com_bat_or_bowl=com_bat();
            }
            else{
            printf("Computer has chosen to BOWL\n");
            com_bat_or_bowl=com_bowl();}
        }
        }
    else
        {
        if((computer_input+user_input)%2 !=0)
        {
            printf("Its Odd\n");
            printf("You won the Toss\n");
            printf("Computer has chosen the value %d\n",computer_input);
            printf("Enter Bat(1) or Bowl(0) in numbers\n");
            scanf("%d",&user_bat_or_bowl);
            if(user_bat_or_bowl==1)
            {
                printf("You chose to Bat\n");
                Bat_Bowl=user_bat();
            }
            else if(user_bat_or_bowl==0)
            {
                printf("You chose to Bowl\n");
                Bat_Bowl=user_bowl();
            }
            else
            printf("Invalid");
        }
        else
        {
            printf("You lost the Toss\n");
            printf("Computer has chosen the value %d\n",computer_input);
            if(user_input<3)
            {printf("Computer has chosen to BAT\n");
            com_bat_or_bowl=com_bat();}
            else
           { printf("Computer has chosen to BOWL\n");
           com_bat_or_bowl=com_bowl();}
        }
        }
    }


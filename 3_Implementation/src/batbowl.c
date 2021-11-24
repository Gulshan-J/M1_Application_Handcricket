

void display_bat(int over,int score)
    {
        
        printf("----------------------------------\n");
        printf("\t\t\t\t\t Balls: %d",over);
        printf("\n\t\t\t\t\t Runs: %d",score);
    }
void display_bowl(int over,int score)
    {
        printf("----------------------------------\n");
        printf("\t\t\t\t\t Balls: %d",over);
        printf("\n\t\t\t\t\t Runs: %d",score); 
    }
int user_bat2(int sum1)
    {
        int computer_bat,low=1,upp=6;
        srand(time(NULL));
        computer_bat=(rand()%(upp+low+1))+low;
        printf("There are 12 Balls\n");
        int count1,sum2=0;
        for(int i=1;i<13;i++)
        {
            display_bat(i,sum2);
            computer_bat=(rand()%(upp+low+1))+low;
            printf("\nEnter the your value :");
            scanf("%d",&count1);
            printf("Computer value is %d\n",computer_bat);
            if(count1==computer_bat)
            {
                printf("WICKET\n");
                break;
            }
            else
                sum2=sum2+computer_bat;
        
            printf("\n Its %d runs\n", count1);
        }
        printf("The total  runs computer scored :%d\n",sum2);
        printf("Your score is : %d\n",sum1);
        if(sum2>sum1)
        printf("COMPUTER HAS WON");
        else if(sum2==sum1)
        printf("MATCH ENDED IN TIE");
        else
        printf("YOU WON");  
    }
int user_bowl2(int sum3)
    {
        int computer_bowl,low=1,upp=6,comp_bat;
        srand(time(NULL));
        computer_bowl=(rand()%(upp+low+1))+low;
        printf("There are 12 Balls\n");
        int count,sum4=0;
        for(int i=1;i<13;i++)
        {
            display_bat(i,sum4);
            computer_bowl=(rand()%(upp+low+1))+low;   
            printf("\nEnter the your value :");
            scanf("%d",&count);
            printf("\n The computer value is : %d\n ",computer_bowl);
            if(count==computer_bowl)
            {
                printf("WICKET\n");
                break;
            }
            else
            sum4=sum4+count;
            printf("\n Its %d runs\n", count);
        }
        printf("The total score is: %d\n",sum4);
        printf("The total scored by computer is: %d\n",sum3);
        if(sum4<sum3)
        printf("COMPUTER WINS");
        else if(sum4==sum3)
        printf("MATCH ENDED IN TIE");
        else
        printf("YOU WON");  
    }
int com_bat()
    {
        int computer_bowl,low=1,upp=6,comp_bat;
        srand(time(NULL));
        computer_bowl=(rand()%(upp+low+1))+low;
        printf("There are 12 Balls\n");
        int count,sum1=0;
        for(int i=1;i<13;i++)
        {
            display_bat(i,sum1);
            computer_bowl=(rand()%(upp+low+1))+low;   
            printf("\n Enter the your value :");
            scanf("%d",&count);
            printf("\n The computer value is : %d\n ",computer_bowl);
            if(count==computer_bowl)
            {
                printf("Its WICKET\n");
                break;
            }
            else
            sum1=sum1+count;
            printf("\n Its %d runs\n", count);
        }
        printf("The total computer score is: %d\n",sum1);
        printf("Its Your Turn to bat\n");
        user_bat2(sum1);   
    }
int com_bowl()
    {
        int computer_bat,low=1,upp=6;
        srand(time(NULL));
        computer_bat=(rand()%(upp+low+1))+low;
        printf("There are 12 Balls\n");
        int count1,sum3=0;
        for(int i=1;i<13;i++)
        {
            display_bowl(i,sum3);
            computer_bat=(rand()%(upp+low+1))+low;
            printf("\n Enter the your value :");
            scanf("%d",&count1);
            printf("Computer value is %d\n",computer_bat);
            if(count1==computer_bat)
            {
                printf("WICKET\n");
                break;
            }
            else
            sum3=sum3+computer_bat;
            printf("\n Its %d runs\n", count1);
        }
        printf("The total  runs computer scored is %d\n",sum3);
        printf("Its Your turn to bowl\n");
        user_bowl2(sum3);   
    }
int com_user_bat(int sum1)
    {
        int computer_bat,low=1,upp=6;
        int dummy;
        srand(time(NULL));
        computer_bat=(rand()%(upp+low+1))+low;
        printf("There are 12 Balls\n");
        int count1,sum2=0;
        for(int i=1;i<13;i++)
        {
            display_bat(i,sum2);
            computer_bat=(rand()%(upp+low+1))+low;
            printf("\n Enter the your value :");
            scanf("%d",&count1);
            printf("Computer value is %d\n",computer_bat);
            if(count1==computer_bat)
            {
                printf("WICKET\n");
                break;
            }
            else
                sum2=sum2+computer_bat;
        
            printf("\n Its %d runs\n", count1);
        }
        printf("The total  runs computer scored :%d\n",sum2);
        printf("Your score is : %d\n",sum1);
        if(sum2>sum1)
        printf("COMPUTER HAS WON");
        else if(sum2==sum1)
        printf("MATCH ENDED IN TIE");
        else
        printf("YOU WON");
    }
int com_user_bowl(int sum3)
    {
        int computer_bowl,low=1,upp=6,comp_bat;
        int dummy;
        srand(time(NULL));
        computer_bowl=(rand()%(upp+low+1))+low;
        printf("There are 12 Balls\n");
        int count,sum4=0;
        for(int i=1;i<13;i++)
        {
            display_bat(i,sum4);
            computer_bowl=(rand()%(upp+low+1))+low;   
            printf("\n Enter the your value :");
            scanf("%d",&count);
            printf("\n The computer value is : %d\n ",computer_bowl);
            if(count==computer_bowl)
            {
                printf("WICKET\n");
                break;
            }
            else
            sum4=sum4+count;
            printf("\n Its %d runs\n", count);
        }
        printf("The total score is: %d\n",sum4);
        printf("The total scored by computer is: %d\n",sum3);
        if(sum4<sum3)
        printf("COMPUTER WINS");
        else if(sum4==sum3)
        printf("MATCH ENDED IN TIE");
        else
        printf("YOU WON");
    }

int user_bat()
    {
        int computer_bowl,low=1,upp=6,comp_bat;
        int dummy;
        srand(time(NULL));
        computer_bowl=(rand()%(upp+low+1))+low;
        printf("There are 12 Balls\n");
        int count,sum1=0;
        for(int i=1;i<13;i++)
        {
            display_bat(i,sum1);
            computer_bowl=(rand()%(upp+low+1))+low;   
            printf("\n Enter the your value :");
            scanf("%d",&count);
            printf("\n The computer value is : %d\n ",computer_bowl);
            if(count==computer_bowl)
            {
                printf("WICKET\n");
                break;
            }
            else
            sum1=sum1+count;
            printf("\n Its %d runs\n", count);
        }
        printf("The total score is: %d\n",sum1);
        printf("Its Computer's Turn to bat\n");
        com_user_bat(sum1);
    }
int user_bowl()
    {
        
        int computer_bat,low=0,upp=6;
        int dummy;
        srand(time(NULL));
        computer_bat=(rand()%(upp+low+1))+low;
        printf("There are 12 Balls\n");
        int count1,sum1=0;
        for(int i=1;i<13;i++)
        {
            display_bowl(i,sum1);
            computer_bat=(rand()%(upp+low+1))+low;
            printf("\n Enter the your value :");
            scanf("%d",&count1);
            printf("Computer value is %d\n",computer_bat);
            if(count1==computer_bat)
            {
                printf("WICKET\n");
                break;
            }
            else
            sum1=sum1+computer_bat;
            printf("\n Its %d runs\n", count1);
        }
        printf("The total  runs computer scored is %d\n",sum1);
        printf("Its computer turn to bowl\n");
        com_user_bowl(sum1);
    }

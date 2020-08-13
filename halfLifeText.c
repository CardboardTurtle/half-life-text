#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char command[5000];
    int hev;
    start: printf("The security guard opens the door and walks to a keypad on the wall next to a large door to the facility\n");
    scanf(" %s", command);
    if(strcmp(command, "walktodoor") == 0)
    {
        printf("The guard opens the door. you step inside. There is a desk where a security guard sits. a scientist is behind them. they are looking at a computer.\nTo his right, there is a corridor that leads to the break room, the locker room, and the test labs.\n");
        scanf(" %s", command);
    }
        if(strcmp(command, "walktobreakroom") == 0)
        {
        breakroom: printf("You have entered the break room. There is a scientist inside, along with two vending machines and a microwave. The microwave has lasagna in it.\n");
        scanf(" %s", command);
        if(strcmp(command, "walktolockerroom") == 0 )
        {
        goto lockerroom;
        }else if(strcmp(command, "walktotestlabs") == 0 )
        {
        goto testlabs;
        }else if(strcmp(command, "usemicrowave") == 0 )
        {
        printf("You exploded your co-worker's food. Now he'll go hungry. Good job, asshole.\n");
        goto breakroom;
        }else
        {
        printf("Invalid command.\n");
        goto breakroom;    
        }
        }else if(strcmp(command, "walktolockerroom") == 0)
        {
            lockerroom: printf("You have entered the locker room. There are lockers, bathrooms, and an HEV suit.\n");
            scanf(" %s", command);
            if(strcmp(command, "grabhevsuit") == 0)
            {
            grabbedhev: printf("You have put on the HEV suit. You hear a robotic voice coming from the suit's internal speakers.\nHEV suit: Welcome to the H.E.V. mark 4 protective system for use in hazardous environments. have a very safe day.\nstartup music starts playing\n");
            hev = 1;
            goto lockerroom;
            }else if(strcmp(command, "usebathroom") == 0)
            {
            usebathroom: printf("You took a massive shit.\n");
            goto lockerroom;
            }else if(strcmp(command, "walktotestlabs") == 0)
            {
            goto testlabs;
            }else if(strcmp(command, "walktobreakroom") == 0 )
            {
            goto breakroom;
            }
            {
            printf("invalid command.\n");
            goto lockerroom;
            }
        }else if(strcmp(command, "walktotestlabs") == 0)
        {
            
            testlabs: if(hev == 0)
            {
               printf("You need your suit first!\n");
               scanf(" %s", command);
               if(strcmp(command, "walktolockerroom") == 0)
            {
            goto lockerroom;
            }else if(strcmp(command, "walktobreakroom") == 0 )
            {
            goto breakroom;
            }
            }else if(hev == 1)
            {
              printf("end of demo. thanks for playing!\n");
            }else
            {
            printf("Invalid command.\n");
            goto testlabs;
            }

        }else{
        printf("invalid command\n");
        goto start;
        }

    return 0;
}
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
        printf("The guard opens the door. you step inside. There is a desk where a security guard sits. a scientist is behind them. they are looking at a computer.\nTo his right, there is a corridor that leads to the break room, the locker room, and the test labs.\nThe guard looks at you and says 'Hey gordon. You had a bunch of messages for you, but we had a system crash about 20 minutes ago. just one of those days, i guess.\nI'm still trying to find my files. They were having some problems down in the test chamber, but I think thats all cleared up now.\nThey told me to get you headed down there as soon as you've got your hazard suit.'\n");
        desk: scanf(" %s", command);
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
            grabbedhev: printf("You have put on the HEV suit. You hear a robotic voice coming from the suit's internal speakers.\n'Welcome to the H.E.V. mark 4 protective system for use in hazardous environments. have a very safe day.'\nstartup music starts playing\n");
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
               goto desk;

            }else if(hev == 1)
            {
              printf("You go through the facility down some corridors and elevators, meeting colleagues along the way. You get almost to the test chamber when you see Eli and Kleiner. The computer next to them explodes, as they rush over to fix it.\nyou get a bad feeling about today's experiment.\nYou walk further into the facility and closer to the test chamber. You get right outside it when you are stopped by some other scientists.\nThey tell you that today's sample is different from the previous ones. It's unusually pure. As such, they've overclocked the anti-mass spectrometer.\nThe chance of a resonance cascade scenario is extremely unlikely, there's nothing to be worried about.\n");
                goto cascadecheckpoint;
            }else
            {
            printf("Invalid command.\n");
            goto testlabs;
            }

        }else 
        printf("What area would you like to load to? You should have written it down from last time you played.\n");
        scanf(" %s", command);
        if(strcmp(command, "cascade") ==0 ){
            goto cascade;              
        }else{
        printf("invalid command\n");
        goto start;
        }
cascadecheckpoint: printf("You have reached a checkpoint. Next time you start the game, type 'load', then type 'cascade' to return to this point.\n");
cascade: printf("You enter the test chamber. a scientist starts speaking. He tells you that a cart is coming to you, and all you have to do is push the cart into the anti-mass spectrometer.\nYour suit should keep you comfortable through all this, just push the cart, containing a crystal, into the beam.\nthe cart shows up.\n");
        scanf(" %s", command);
        if(strcmp(command, "usecart") ==0 ){
            printf("You push the cart into the anti-mass spectrometer. Unfortunately, it seems as though the spectrometer is going to explode.\nyou hear scientists should in the background 'Shutting down, attempting shutdown, its not- ITS NOT SHUTTING DOWN ITS NOT-'\nthe scientist in the room gets killed by a beam of brilliant green light coming from the spectrometer. You get shot by it.\nYou have been transported to a strange alien world. Everything you see is weird, and kinda creepy. you seem to be on a floating island, theres creatures roaming around, there's a cave and a small lake.\nYou've got teleported out of that area. You are now in a dark area surrounded by a bunch of weird looking creatures. They don't seem to want to hurt you, they seem more curious than anything else.\nThey're almost as tall as you are, gray, and have multiple big red eyes- or at least, you think they are eyes. You black out.\nYou awaken in the test chamber.\nSomething has gone horribly wrong, the antimass spectrometer exploded, the entire chamber is warped, distorted, destroyed.\n The door you entered through is open.\n");
        }else{
            printf("Invalid command.\n");
            goto cascade;
        }
    return 0;
}
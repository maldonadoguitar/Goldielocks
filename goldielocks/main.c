//
//  main.c
//  goldielocks
//
//  Created by Christian Maldonado on 6/12/15.
//  Copyright (c) 2015 Christian Maldonado. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int inOrOut;
    int poridgeSelection;
    int bed;
    printf("Goldielock is a little girl and for some reason she is walking thru the woods alone...... Why?  who just let their child walk around in the woods alone?!?!?!  Whilst traversing  the many twist and turns of the forest, she stumbbls upon a house.  Not sure what or who was inside, she sat and pondered. \nWhat should she do? type 1 to enter the house or 0 to keep aimlessly walking around the woods  ");
    scanf("%d", &inOrOut);
    
    if (inOrOut == 0) {
        printf("She turns away from the house, walks into the woods and is never seen again!");
    } else {
        
        printf("    She stupidly walks into a house that is not hers and starts making her self at home.  while creeping around, she walks into the dining room and finds three bowls of poridge.  she decides to eat the poridge.  which one should she eat? type h for the steaming hot bowl, type c for the cold one, or type 2 for the bowl that looks like it might be good enough to try?  ");
        scanf("%d",&poridgeSelection);
        
        if (poridgeSelection == 2){
            printf("She eats the entire bowl of poridge and starts to feel tired so she decide to look around the house for a place to lay down.  She finds the bedroom and sees three beds.  type f for the super firm bed, type s for the really soft bed and type 3 for the serta perfect sleeper with memory foam top");
            
        }else {
            printf("     This doesn't taste right, I'm getting out of here");}

        scanf("%d",&bed);
       
        if (bed ==3) {
            printf("     She lays down on an awesome mattress and passes out and happily dreams until she wakes up to a group of three bears preparing to eat her....she is never seen again!!!! womp womp");
        }else {
            printf("    she asks herself what the hell she's doing, and is in disbelief that she was dumb enough to consider falling a sleep in some strnage house in the woods and runs out of there");
        }
        
        
    
    return 0;
}
}

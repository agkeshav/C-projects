#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguess = 1;
    srand(time(0));
    number = rand()%100 +1;
    // Keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("Higher number please\n");
        }
        else{
            printf("You guess it in %d attempts. The computer generated number is %d", nguess,number);
        }
        nguess++;
    }while(guess!= number);
     
    
    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int desirednumber1,desirednumber2;
    srand(time(NULL));
    
    desirednumber1 = rand()%100;
    desirednumber2 = rand()%100;

    int i;
    int guess;
    int score1,score2;

    for(i = 1; i <= 10; i++) {
        printf("guess - %d: ",i);
        scanf("%d",&guess);

        if(guess == desirednumber1) {
            printf("true\n");
            score1 = 100 - ((i-1)*10);
            printf("%d point\n",score1);
            break;
        }

        else if(guess > desirednumber1) {
            printf("down\n");
        }

        else {
            printf("up\n");
        }

    }

    for(i = 1; i <= 10; i++) {
        printf("guess - %d: ",i);
        scanf("%d",&guess);

        if(guess == desirednumber2) {
            printf("true\n");
            score2 = 100 - ((i-1)*10);
            printf("%d point\n",score2);
            break;
        }

        else if(guess > desirednumber2) {
            printf("down\n");
        }

        else {
            printf("up\n");
        }

    }
    
    if(score1 > score2) {
        printf("1 is winner\n");
    }

    else if(score1 == score2) {
        printf("equal\n");
    }

    else {
        printf("2 is winner\n");
    }
    
    

    return 0;
}
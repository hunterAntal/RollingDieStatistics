#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
#include <time.h>
#define ARRAYSIZE 6
void rollDie(int n) {
    // Hold pick from array
    int frequencyRolled = 0;
    float percent = 0.0;
    int frequencyArray[ARRAYSIZE+1] = {0,0,0,0,0,0,0};

    // srand(time(NULL));   // Initialization, should only be called once.
    srand(time(NULL)+64);
    srand(time(NULL));

    int a = rand() % 6;      // Returns a pseudo-random integer between 0 and RAND_MAX.
    int b = rand() % 6;      // Returns a pseudo-random integer between 0 and RAND_MAX.

    // roll die n number of times
    for (int i = 0; i < n; i++) {
        a = 1+ rand() % 6;
        frequencyArray[a]++;
        //printf("You rolled two die %d times: %d & %d\n", n, a, b);
    }
    // print out array
    for (int i = 1; i < ARRAYSIZE+1; i++) {
        percent = (float)frequencyArray[i];
        percent = percent / n;
        percent = (percent * 100);
        printf("Frequency of %d = %d| %.2f%%\n", i, frequencyArray[i], percent);

    }

    // print out graph
    for (int i = 1; i < ARRAYSIZE+1; i++) {
        printf("%d: ", i);
        float sqrtFrequency = sqrt(frequencyArray[i]);
        for (int j = 1; j <= sqrtFrequency; j++) {
            printf("*");
        }
        printf("\n");
    }


}


int main(void) {
    printf("Hello, World!\n");
    int RollDicXTimes = 10;
    printf("Roll die %d times\n", RollDicXTimes);
    rollDie(RollDicXTimes);
    return 0;
}


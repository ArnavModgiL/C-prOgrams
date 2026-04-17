// High Score Player Game : --

#include<stdio.h>

int updateHighScore(int currentScore, int highScore) {
    if(currentScore > highScore){
        printf("New High Score : %d\n",currentScore);
        return currentScore;
    }
    else {
        printf("Score %d did not beat high Score (%d)\n",currentScore,highScore);
        return highScore;
    }
}

int main() {
    int n,score;
    int highScore = 0;

    printf("Enter Number Of Players: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++) {
        printf("Enter score for Players %d: ",i);
        scanf("%d",&score);

        highScore = updateHighScore(score,highScore);
    }

    printf("\n Final High SCORE : %d\n",highScore);

    return 0;
}


#include <stdio.h>

void best3sort(int score[4], int best[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (score[i] > score[j]) {
                int t = score[i];
                score[i] = score[j];
                score[j] = t;
            }
        }
    }
    best[0] = score[1];
    best[1] = score[2];
    best[2] = score[3];
}

int main() {
    int scoreA[4], scoreB[4];
    int best[3];

    for (int i = 0; i < 4; i++)  {
        scanf("%d", &scoreA[i]);
    }
    for (int i = 0; i < 4; i++) {
        scoreB[i] = scoreA[i];
    }

    best3sort(scoreB, best);
    printf("%d %d %d\n", best[0], best[1], best[2]);

    return 0;
}

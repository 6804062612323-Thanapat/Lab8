#include <stdio.h>

int checkscore(char std[]);
char keys[10]={'D','B','D','C','C','D','A','E','A','D'};

int q1correct(char std[][10]);
int qhardest(char std[][10]);
int correctcount[10];

int main() {
    int i,j;
    char ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},//7
            {'D','B','A','B','C','A','E','E','A','D'},//6
            {'E','D','D','A','C','B','E','E','A','D'},//5
            {'C','B','A','E','D','C','E','E','A','D'},//4
            {'A','B','D','C','C','D','E','E','A','D'},//8
            {'B','B','E','C','C','D','E','E','A','D'},//7
            {'B','B','A','C','C','D','E','E','A','D'},//7
            {'E','B','E','C','C','D','E','E','A','D'}};//7



   	for (i = 0 ; i < 8 ; i++) {
        printf("std %d => %d\n", (i+1), checkscore(ans[i]));
   	}
   	printf("Correct Question 1 = %d\n",q1correct(ans));
   	printf("Question Hardest = %d\n",qhardest(ans));


}
int checkscore(char std[]) {
    int score = 0;
    for (int i = 0;i<10;i++) {
        if (std[i] == keys[i])
            score++;
    }
    return score;
}
int q1correct(char std[][10]){
    int score = 0;
    for (int i = 0;i<10;i++) {
        if (std[i][0] == keys[0])
            score++;
    }
    return score;
}
int qhardest(char std[][10]){
    int q[10];
    int min = 10;
    int hardest;
    for (int i=0;i<8;i++) {
        for (int j = 0;j<8;j++) {
            if (std[i][j] == keys[j]) {
                q[j]++;
            }
        }
    }
    for (int i = 0;i<10;i++) {
        if (q[i]<min) {
            min = q[i];
            hardest = i+1;
        }
    }
    return hardest;

}

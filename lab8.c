#include <stdio.h>

int findMax(int num[]);
void printAr(int myAr[],int n);
void addone(int number[], int add[], int sizeNum);
void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos);
void addthree(int number[], int pos[][2], int size);

int main() {
	int number[5] = {20,50,100,99,9};
	int numberSize = sizeof(number)/sizeof(number[0]);
	int add[5] = {2,4,6,8,10};
	int pos[] = {1,3};
	int posSize = sizeof(pos)/sizeof(pos[0]);
	int pos2d1[][2] = {{0,3},{2,4}};
	int pos2d2 = sizeof(pos2d1)/sizeof(pos2d2);
	int max;

	max = findMax(number);
	printAr(number,numberSize);
	addone(number,add,numberSize);
	printf("\n");
	addtwo(number,pos,5,numberSize,posSize);
	printf("\n");
	addthree(number,pos2d1,pos2d2);
	printf("\n");
	printf("Maximum of these number is %d\n",max);
}

int findMax(int num[]) {
	int maximum,i=0;
	maximum = num[i];

	for(i=0;i<5;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}
void printAr(int myAr[],int n){
    for(int i=0;i<n;i++){
        printf("number[%d] : %d\n",i,myAr[i]);
    }
}

void addone(int number[], int add[], int sizeNum){
    for(int i=0;i<sizeNum;i++){
        number[i]+=add[i];
        printf("%d ",number[i]);
    }
}

void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos){
    for(int i=0;i<sizePos;i++){
        number[pos[i]]+=x;
        printf("%d ",number[i]);
    }
}

void addthree(int number[], int pos[][2], int size){
    for (int i = 0; i < size; i++) {
        int p1 = pos[i][0];
        int p2 = pos[i][1];

        if (p1 >= 1 && p1 <= size) {
            printf("Add %d to number[%d]\n", p2, p1);
            number[p1 - 1] += p2;
        }
    }
}

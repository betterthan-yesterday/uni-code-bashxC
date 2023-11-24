#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void init_arr(int x[],int len) {
	srand(time(NULL)); // Seed the random number generator with the current time
	int i;
	for (i = 0; i < len; i++) {
		x[i] = rand() % 100; // Generate random numbers between 0 and 99
	}
}

void rot_left_arr(int x[],int len) {
	int temp = x[0];
	for (int i = 0; i < len-1; i++) x[i] = x[i+1];
	x[len-1] = temp;
}

void rot_right_arr(int x[],int len) {
	int temp = x[len-1];
	for (int i = len-1; i > 0; i--) x[i] = x[i-1];
	x[0] = temp;
}

void rot_arr(int x[],int len,int r) {
	if (r < 0) for (int i = 0; i < (r*(-1)); i++) rot_left_arr(x, len);
	else for (int i = 0; i < r; i++) rot_right_arr(x, len);
}

void show_arr(int x[],int len) {
	for (int i = 0; i < len; i++) printf("%d ", x[i]);
	printf("\n");
}

int main(int argc,char** argv){

	int x[20];
	if (argc != 3) {
		printf("incorrect number of command line arguments\n");
		printf("usage: mprog3 <size> <rotation>\n");
		exit(0);
	}

	int len = atoi(argv[1]);
	if (len < 2 || len > 20) {
		printf("incorrect length %d\n", len);
		exit(0);
	}

	int r = atoi(argv[2]);
	printf("creating array of size %d, ", len);
	if (r < 0) printf("rotating it left by %d positions\n", r*-1);
	else printf("rotating it right by %d positions\n", r);
	init_arr(x, len);
	show_arr(x, len);
	rot_arr(x, len, r);
	show_arr(x, len);

	return 0;
}

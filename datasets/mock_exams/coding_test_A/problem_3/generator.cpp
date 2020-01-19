#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 500
#define M 1000

using namespace std;

int board[N][N];

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_15.in");
	outFile << N << ' ' << M << '\n';
	for(int i = 0; i < M + 1; i++) {
		int position_x = (rand() % N) + 1;
		int position_y = (rand() % N) + 1;
		while(board[position_x][position_y] == 1) {
			position_x = (rand() % N) + 1;
			position_y = (rand() % N) + 1;
		}
		board[position_x][position_y] = 1;
		outFile << position_x << ' ' << position_y << '\n';
	}
	outFile.close();
	return 0;
}

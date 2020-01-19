#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 50
#define M 10
#define H 1000

using namespace std;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_15.in");
	outFile << N << ' ' << M << ' ' << H << '\n';
	for(int i = 0; i < N; i++) {
		int block = (rand() % 10) + 1;
		for(int j = 0; j < M; j++) {
			outFile << block << ' ';
			block += (rand() % 80) + 1;
		}
		outFile << '\n';
	}
	outFile.close();
	return 0;
}

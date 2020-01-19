#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 8
#define K 10

using namespace std;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_15.in");
	outFile << N << ' ' << K << '\n';
	for(int i = 0; i < N; i++) {
		outFile << (rand() % 50) + 1 << ' ';
	}
	outFile.close();
	return 0;
}

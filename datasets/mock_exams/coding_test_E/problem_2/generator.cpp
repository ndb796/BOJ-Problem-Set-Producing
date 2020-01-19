#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 10000
#define M 100000
#define K 1
#define X 1

using namespace std;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_15.in");
	outFile << N << ' ' << M << ' ' << K << ' ' << X << '\n';
	for(int i = 0; i < M; i++) {
		int a = (rand() % N) + 1;
		int b = (rand() % N) + 1;
		while(a == b) {
			b = (rand() % N) + 1;
		}
		outFile << a << ' ' << b << '\n';
	}
	outFile.close();
	return 0;
}

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 300000
#define M 1000000
#define K 3
#define X 1000

using namespace std;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_20.in");
	outFile << N << ' ' << M << ' ' << K << ' ' << X << '\n';
	for(int i = 0; i < M; i++) {
		int a = (((rand() * 1000) + rand()) % N) + 1;
		int b = (((rand() * 1000) + rand()) % N) + 1;
		while(a == b) {
			b = (((rand() * 1000) + rand()) % N) + 1;
		}
		outFile << a << ' ' << b << '\n';
	}
	outFile.close();
	return 0;
}

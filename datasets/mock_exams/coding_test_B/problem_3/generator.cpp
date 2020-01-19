#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 200
#define K 1000
#define S 10000

using namespace std;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_15.in");
	outFile << N << ' ' << K << '\n';
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(rand() % 10 <= 8) {
				outFile << 0 << ' ';
			} else{
				outFile << (rand() % K) + 1 << ' ';
			}
		}
		outFile << '\n';
	}
	outFile << (rand() % S) << ' ' << (rand() % N) + 1 << ' ' << (rand() % N) + 1;
	outFile.close();
	return 0;
}

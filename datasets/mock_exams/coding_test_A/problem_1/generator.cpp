#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 200000

using namespace std;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_15.in");
	outFile << N << '\n';
	for(int i = 0; i < N; i++) {
		outFile << ((rand() * 300 + rand()) % 100000) + 1 << ' ';
	}
	outFile.close();
	return 0;
}

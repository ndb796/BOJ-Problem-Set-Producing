#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 100000

using namespace std;

int sum = 0;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_15.in");
	int k = 50000000;
	outFile << N << ' ' << k << '\n';
	for(int i = 0; i < N; i++) {
		int distance = (rand() % 1000) + 1;
		sum += distance;
		outFile << distance << ' ';
	}
	printf("%d %d\n", sum * 2, k);
	outFile.close();
	return 0;
}

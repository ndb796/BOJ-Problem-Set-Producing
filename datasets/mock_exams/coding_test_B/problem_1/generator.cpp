#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#define N 100000

using namespace std;

long long int sum = 0;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_25.in");
	long long int k = 3000000000;
	outFile << N << ' ' << k << '\n';
	for(int i = 0; i < N; i++) {
		int distance = (rand() % 50000) + 1;
		sum += distance;
		outFile << distance << ' ';
	}
	printf("%lld %lld\n", sum * 2, k);
	outFile.close();
	return 0;
}

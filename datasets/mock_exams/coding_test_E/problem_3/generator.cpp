#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <time.h>

using namespace std;

#define N 100000
#define K 100000

using namespace std;

map<int, int> m;

int main(void) {
	srand(time(NULL));
	ofstream outFile("data_15.in");
	outFile << N << ' ' << K << '\n';
	for(int i = 0; i < N; i++) {
		int a = ((rand() * 50000 + rand()) % 100000001);
		if(rand() % 2 == 0) {
			a = -a;
		}
		while(m[a] != 0) {
			a = ((rand() * 50000 + rand()) % 100000001);
			if(rand() % 2 == 0) {
				a = -a;
			}
		}
		m[a] = 1;
		outFile << a << ' ';
	}
	outFile.close();
	return 0;
}

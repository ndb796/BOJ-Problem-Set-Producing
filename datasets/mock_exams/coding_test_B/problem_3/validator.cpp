#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(1, 200, "n");
    inf.readSpace(); // Space(공백) 읽기
    int k = inf.readInt(1, 1000, "k");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inf.readInt(0, k, "virus");
            if (j != n - 1) inf.readSpace(); // Space(공백) 읽기
        }
        inf.readEoln(); // EOLN(한 줄의 끝) 읽기
    }

    int s = inf.readInt(0, 10000, "s");
    inf.readSpace(); // Space(공백) 읽기
    int x = inf.readInt(1, n, "x");
    inf.readSpace(); // Space(공백) 읽기
    int y = inf.readInt(1, n, "y");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
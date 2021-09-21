#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(1, 5, "n");
    inf.readSpace(); // Space(공백) 읽기
    int m = inf.readInt(1, 5, "m");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            inf.readInt(1, 100, "k");
            if (j != m - 1) inf.readSpace(); // Space(공백) 읽기
        }
        inf.readEoln(); // EOLN(한 줄의 끝) 읽기
    }

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
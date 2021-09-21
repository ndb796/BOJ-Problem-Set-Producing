#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(2, 300000, "n");
    inf.readSpace(); // Space(공백) 읽기
    int m = inf.readInt(1, 1000000, "m");
    inf.readSpace(); // Space(공백) 읽기
    int k = inf.readInt(1, 300000, "k");
    inf.readSpace(); // Space(공백) 읽기
    int x = inf.readInt(1, n, "x");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    for (int i = 0; i < m; i++) {
        int a = inf.readInt(1, n, "a");
        inf.readSpace(); // Space(공백) 읽기
        int b = inf.readInt(1, n, "b");
        ensuref(a != b, "A(%d) and B(%d) are should be different.", a, b);
        inf.readEoln(); // EOLN(한 줄의 끝) 읽기
    }

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
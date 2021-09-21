#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(1, 8, "n");
    inf.readSpace();
    int k = inf.readInt(1, 50, "k");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readInts(n, 1, 50); // n개의 구분된 [1, 50] 범위의 정수들 입력
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
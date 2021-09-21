#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(1, 100000, "n");
    inf.readSpace(); // Space(공백) 읽기
    int k = inf.readInt(1, 100000, "k");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readInts(n, -100000000, 100000000);
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
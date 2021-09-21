#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 200000, "n");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기
    
    inf.readInts(n, 1, 100000); // n개의 구분된 [1, 100000] 범위의 정수들 입력
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
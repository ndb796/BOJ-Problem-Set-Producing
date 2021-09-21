#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(10, 100000000, "n");
    inf.readSpace(); // Space(공백) 읽기
    int k = inf.readInt(1, 3, "k");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readInts(k, 1, 9); // k개의 구분된 [1, 9] 범위의 정수들 입력
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
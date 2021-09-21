#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 100000, "n");
    inf.readSpace(); // Space(공백) 읽기
    long long k = inf.readLong(0, 4999999999LL, "m");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    // n개의 구분된 [1, 50000] 범위의 정수들 입력
    vector<int> v = inf.readInts(n, 1, 50000);
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    long long summary = accumulate(v.begin(), v.end(), 0LL);
    ensuref(k < summary * 2, "K(%lld) is should be lower than summary * 2(%lld).", k, summary * 2);

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
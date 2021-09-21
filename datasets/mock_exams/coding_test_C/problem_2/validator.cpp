#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(1, 50, "n");
    inf.readSpace(); // Space(공백) 읽기
    int m = inf.readInt(1, 10, "m");
    inf.readSpace(); // Space(공백) 읽기
    int h = inf.readInt(1, 1000, "h");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        // 공백을 기준으로 구분된 정수를 읽으며
        while (ss >> tmp) {
            ensuref(atoi(tmp.c_str()) <= 1000, "Each height(%d) is should be lower than 1,000.", atoi(tmp.c_str()));
        }
    }

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
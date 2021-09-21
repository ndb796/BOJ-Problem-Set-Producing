#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int x = inf.readInt(1, 100, "x");
    inf.readSpace(); // Space(공백) 읽기
    int y = inf.readInt(1, 100, "y");
    inf.readSpace(); // Space(공백) 읽기
    int p_1 = inf.readInt(1, 100, "p_1");
    inf.readSpace(); // Space(공백) 읽기
    int p_2 = inf.readInt(1, 100, "p_2");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
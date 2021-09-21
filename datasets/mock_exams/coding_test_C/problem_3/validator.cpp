#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(3, 6, "n");
    inf.readEoln(); // EOLN(한 줄의 끝) 읽기

    int t_count = 0;
    int s_count = 0;
    int x_count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            string tmp = inf.readToken("[STX]{1, 1}"); // 'S', 'T', 'X' 중에 한 문자로 입력
            if (tmp == "T") t_count++;
            if (tmp == "S") s_count++;
            if (tmp == "X") x_count++;
            if (j != n - 1) inf.readSpace(); // Space(공백) 읽기
        }
        inf.readEoln(); // EOLN(한 줄의 끝) 읽기
    }

    ensuref(t_count <= 5, "The number of teachers(%d) is should be <= 5.", t_count);
    ensuref(s_count <= 30, "The number of students(%d) is should be <= 30.", s_count);
    ensuref(x_count >= 3, "The number of blanks(%d) is should be >= 3.", x_count);

    inf.readEof(); // 파일의 끝(Validator 마지막 부분)
}
# -*- coding:utf-8 -*-
file_name = 'data_15'
input_file = open(file_name + '.in')
input = input_file.readline

# 1,000 x 1,000보다 10배 큰 수로, 최적의 해 보장
MAX_VALUE = 10000000
x, y, p1, p2 = map(int, input().split())
 
# 모든 경우의 수를 포함하는 10,000,000까지 반복
while p1 != p2 and p1 < MAX_VALUE:
    if p1 < p2:
        p1 += x
    else:
        p2 += y
 
# 공통적으로 지나는 지점이 있다면
if p1 < MAX_VALUE:
    print(p1)
# 공통적으로 지나는 지점이 없다면
else:
    print(-1)
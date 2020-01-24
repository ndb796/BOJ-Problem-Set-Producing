# -*- coding:utf-8 -*-
file_name = 'data_25'
input_file = open(file_name + '.in')
input = input_file.readline

n, k = map(int, input().split())
data = list(map(int, input().split()))

course = []
for i in range(n):
    # (해당 코스의 번호, 해당 코스의 길이)를 입력
    course.append((i + 1, data[i]))
# 왕복 코스를 직선 형태로 표현
course.extend(list(reversed(course)))

# 코스의 길이를 앞에서부터 빼내기
k2 = 0
cur = 0
for i in range(k):
    k2 += 1
    if k2 == course[cur][1]:
        k2 = 0
        cur += 1
print(course[cur][0])
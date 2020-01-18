# -*- coding:utf-8 -*-
file_name = 'data_15'
input_file = open(file_name + '.in')
input = input_file.readline

from itertools import combinations
 
n = int(input())
a = []
teachers = []
spaces = []
for i in range(n):
    a.append(list(input().split()))
    for j in range(n):
        # �������� �����ϴ� ��ġ ����
        if a[i][j] == 'T':
            teachers.append((i, j))
        # ��ֹ��� ��ġ�� �� �ִ� ��ġ ����
        if a[i][j] == 'X':
            spaces.append((i, j))
 
# Ư�� �������� ���ø� ���� (�л� �߰�: True, �л� �̹߰�: False)
def watch(x, y, direction):
    # ���� �������� ����
    if direction == 0:
        while y >= 0:
            if a[x][y] == 'S': # �л��� �ִ� ���
                return True
            if a[x][y] == 'O': # ��ֹ��� �ִ� ���
                return False
            y -= 1
    # ������ �������� ����
    if direction == 1:
        while y < n:
            if a[x][y] == 'S': # �л��� �ִ� ���
                return True
            if a[x][y] == 'O': # ��ֹ��� �ִ� ���
                return False
            y += 1
    # ���� �������� ����
    if direction == 2:
        while x >= 0:
            if a[x][y] == 'S': # �л��� �ִ� ���
                return True
            if a[x][y] == 'O': # ��ֹ��� �ִ� ���
                return False
            x -= 1
    # �Ʒ��� �������� ����
    if direction == 3:
        while x < n:
            if a[x][y] == 'S': # �л��� �ִ� ���
                return True
            if a[x][y] == 'O': # ��ֹ��� �ִ� ���
                return False
            x += 1
    return False
 
# ��ֹ� ��ġ ���Ŀ�, �� ���̶� �л��� �����Ǵ��� �˻�
def process():
    # ��� ������ ��ġ�� �ϳ��� Ȯ��
    for x, y in teachers:
        # 4���� �������� �л��� ������ �� �ִ��� Ȯ��
        for i in range(4):
            if watch(x, y, i):
                return True
    return False
 
find = False
for data in combinations(spaces, 3):
    for x, y in data:
        a[x][y] = 'O'
    # �л��� �� �� �������� �ʴ� ���
    if not process():
        # ���ϴ� ��츦 �߰��� ����
        find = True
        break
    for x, y in data:
        a[x][y] = 'X'
 
if find:
    print('YES')
else:
    print('NO')
# -*- coding:utf-8 -*-
file_name = 'data_15'
input_file = open(file_name + '.in')
input = input_file.readline

n = int(input())
a = list(map(int, input().split()))
a.sort()
 
# Median(���) ���� ����մϴ�.
print(a[(n - 1) // 2])
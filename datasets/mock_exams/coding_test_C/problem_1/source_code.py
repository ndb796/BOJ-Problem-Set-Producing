# -*- coding:utf-8 -*-
file_name = 'data_15'
input_file = open(file_name + '.in')
input = input_file.readline

n, k = map(int, input().split())
count = 0
 
# 0�� 0�� 0�ʺ��� N�� 59�� 59�ʱ����� ��� �ð� Ȯ��
for hour in range(n + 1):
    for minute in range(60):
        for second in range(60):
            # K�� ���ԵǴ� ��� ī��Ʈ
            if str(k) in str(hour) + str(minute) + str(second):
                count += 1
 
print(count)
n, k = map(int, input().split())
count = 0
 
# 0시 0분 0초부터 N시 59분 59초까지의 모든 시각 확인
for hour in range(n + 1):
    for minute in range(60):
        for second in range(60):
            # K가 포함되는 경우 카운트
            if str(k) in str(hour) + str(minute) + str(second):
                count += 1

print(count)
t = int(input())

while t > 0:
    t -= 1

    n = int(input())

    if n == 1:
        print(1)
        continue

    for i in range(n // 2):
        print(f"1{'0' * i}6{'0' * i}9{'0' * (n - i * 2 - 3)}")
    
    print('196' + '0' * (n - 3))

    for i in range(n // 2):
        print(f"9{'0' * i}6{'0' * i}1{'0' * (n - i * 2 - 3)}")
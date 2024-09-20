def main():
    while True:
        a0 = int(input())
        if a0 == 0:
            break
        
        count = 0
        check = [False] * 10001
        
        while not check[a0]:
            count += 1
            check[a0] = True
            a0 = (a0 * a0) // 100
            a0 %= 10000
        
        print(count)

if __name__ == "__main__":
    main()

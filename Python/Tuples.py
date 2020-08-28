if __name__ == '__main__':
    
    n = int(input())
    nums = map(int, input().split(" "))

    tuples = tuple(nums)

    print (hash(tuples))


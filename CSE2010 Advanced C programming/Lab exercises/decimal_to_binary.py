def fun1(n):
    if n==0:
        return 0
    
    else:
        fun1(int(n/2))
        returnprint(n%2)

if __name__ == '__main__':
    fun1(4)
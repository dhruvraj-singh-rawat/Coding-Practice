
def fib (n,arr):

	if (n==0 or n==1):
		return n

	if(arr[n-1]==0):
		arr[n-1] = fib(n-1,arr)+fib(n-2,arr)

	return arr[n-1]


n = int(input('Number to Find Fibonacci of: '))
arr = [0] * n
print("The Fibonacci Number is: ",fib(n,arr))

	
import math

def isPrimeNumber(n):
	flag = True;
	for i in range(2, n):
		if n % i == 0:
			flag = False;
			break;
	return flag


n = int(input('Enter number: '))

for i in range(2,n):
	if isPrimeNumber(i):
		print("%d  "%(i))

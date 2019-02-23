class FizzBuzz(object):
	n = 1
	while n <=100:
		if(n%15==0): print("FIZZBUZZ " + str(n))
		elif(n%3==0): print("FIZZ " + str(n))
		elif(n%5==0): print("BUZZ " + str(n))
		else: print(n)
		n+=1
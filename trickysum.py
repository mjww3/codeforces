t = int(raw_input())
while (t>0):
	n = int(raw_input())
	total = n*(n+1)/2
	itr = 0
	x = 0
	while (True):
		itr = 2**(x)
		if(itr>n):
			break
		total = total- 2*itr
		x = x+1
	print total
	t = t-1
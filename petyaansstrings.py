str1 = raw_input()
str2 = raw_input()

strf1 = str1.lower()
strf2 = str2.lower()

if (strf1==strf2):
	print 0
elif (strf1<strf2):
	print -1
else:
	print 1
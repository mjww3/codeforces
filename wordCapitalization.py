str = raw_input()

newstr = ""

newstr+=str[0].upper()
for i in range(1,len(str)):
	newstr+=str[i]
print newstr
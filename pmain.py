string1=input("Enter string:")
low=""
high=""
for i in range(len(string1)):
    temp=str(string1[i])
    if(temp.islower()):
        low+=str(temp)
    else:
        high+=str(temp)

print(low+high)
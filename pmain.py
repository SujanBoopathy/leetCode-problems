string1=input("Enter string:")
low=""
high=""
digi=""
specialchar=""
for i in range(len(string1)):
    temp=str(string1[i])
    if(temp.islower()):
        low+=str(temp)
    elif(temp.isupper()):
        high+=str(temp)
    elif(temp.isdigit()):
        digi+=str(temp)
    else:
        specialchar+=str(temp)


print(low+high+digi+specialchar)
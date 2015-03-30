#This script implements a simple progress bar like this  : "======>"

from time import sleep
lis=["",">"]
j=0
k=1
while True:
    print "%s\r" % (lis[k]),
    sleep(.6)
    j+=1
    lis.insert(0,"="*j+">")

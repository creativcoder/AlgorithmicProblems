# This small script prints a infinite looping spinner on the screen
from time import sleep
lis=["/","-","\\","|"]
while True:
    for i in lis:
        print "%s\r" %(i),

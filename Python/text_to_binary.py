# Encodes a text file to its binary equivalent

def to_binary(num):
    rem = []
    while(num!=0):
        rem.append(num%2)
        num/=2
    rem.reverse()
    return rem

def main():
    para = open('para.txt','rb')
    binary_out = open("encoded.bin","wb")
    a = para.read(1)
    while(a!=''):
        # print("reading character:",a)
        b = ord(a)
        b = to_binary(b)
        b = "".join([str(i) for i in b])
        # print("Encoded as : ",b)
        binary_out.write(b)
        a = para.read(1)
    
    binary_out.close()

if __name__=='__main__':
    main()

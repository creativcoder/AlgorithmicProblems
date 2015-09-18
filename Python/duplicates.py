#The rem_dep method removes the duplicate values while maintaining the original order of the list.

def rem_dup(values):
    output=[]
    seen=set()
    for val in values:
        if val not in seen:
            output.append(val)
            seen.add(val)
    return output       

#sample list to test code.

values=[3,4,5,6,4,3,44,5,32,4,35,4,4,5,5]

print rem_dup(values)

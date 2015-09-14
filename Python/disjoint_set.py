# Implementing disjoint-set data structure

I = [set([1]),set([2]),set([3]),set([4]),set([5])]

def find_set(id):
    try:
        val=I.index(set([id]))
        return val 
    except:
        return 0

def union(u,v):
    I.append(set([u,v]))
    print I
    I.remove(set([u-1]))
    I.remove(set([v-1]))

union(2,3)

print I

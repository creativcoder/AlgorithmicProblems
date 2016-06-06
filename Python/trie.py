
def char_to_index(ch):
    return ord(ch) - ord('a')

class Node(object):
    def __init__(self):
        self.val = None
        self.children = [None for i in range(26)]
        self.is_leaf = False
        self.has_child = False

    def __str__(self):
        return str(self.val)

    def insert(self, str):
        crawler = self
        for i in str:
            idx = char_to_index(i)
            if crawler.children[idx] is None:
                crawler.children[idx] = Node()
                crawler.has_child = True
                crawler.children[idx].val = i
                crawler = crawler.children[idx]
            else:
                crawler = crawler.children[idx]
        crawler.is_leaf = True

    def contains(self, string):
        crawler = self
        for i in string:
            if crawler is not None:
                crawler = crawler.children[char_to_index(i)]
            else: return "Does not Exist in Trie"
        if crawler.is_leaf:
            return "Exists in Trie"

    def auto_complete(self, fragment):
        prefix = ""
        crawler = self
        for i in fragment:
            if crawler is not None and not crawler.is_leaf:
                crawler = crawler.children[char_to_index(i)]
        reachable_nodes = [i for i in crawler.children if i is not None]
        for i in reachable_nodes:
            print fragment + str(i.val)

if __name__=='__main__':
    root = Node()
    root.insert("bar")
    root.insert("baz")
    root.insert("bam")
    root.insert("baq")
    root.insert("ban")
    root.insert("bus")

    print("bar", root.contains("bar"))
    print("foo", root.contains("foo"))
    root.auto_complete("ba")


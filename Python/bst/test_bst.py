from bst import Tree, Node

cache = []

def setUp():
	return Tree()

def test_tree_insertion():
	tree = setUp()
	tree.insert(34)
	tree.insert(1)
	tree.insert(456)
	assert tree.root.left.value == 1
	assert tree.root.right.value == 456

def test_tree_find():
	tree = setUp()
	tree.insert(645)
	tree.insert(353)
	tree.insert(56)
	assert tree.find(645) == True
	assert tree.find(353) == True
	assert tree.find(56) == True

def test_predroder():
	tree = setUp()
	tree.insert(376)
	tree.insert(69)
	tree.insert(239)
	tree.insert(212439)
	tree.preorder(cache)
	assert cache == [376, 69, 239, 212439]

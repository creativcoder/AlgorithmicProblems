from bst import Tree, Node
import pytest

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
	assert tree.find(645).value == 645
	assert tree.find(353).value == 353
	assert tree.find(56).value == 56

def test_preorder():
	cache = []
	tree = setUp()
	tree.insert(376)
	tree.insert(69)
	tree.insert(239)
	tree.insert(212439)
	tree.preorder(cache)
	assert cache == [376, 69, 239, 212439]

def test_postorder():
	cache = []
	tree = setUp()
	tree.insert(2)
	tree.insert(4)
	tree.insert(6)
	tree.insert(8)
	tree.postorder(cache)
	assert cache == [4, 6, 8, 2]

def test_inorder():
	cache = []
	tree = setUp()
	tree.insert(1)
	tree.insert(3)
	tree.insert(5)
	tree.insert(7)
	tree.inorder(cache)
	assert cache == [1, 3, 5, 7]

def test_duplicate():
	tree = setUp()
	tree.insert(24)
	tree.insert(454)
	tree.insert(2354)
	with pytest.raises(ValueError):
		tree.insert(24)
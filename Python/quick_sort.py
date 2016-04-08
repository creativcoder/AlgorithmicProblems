arr = [134,53,4,234,23,452,3,5,43,534,3,5,435,345]

def sort(arr):
	low = 0
	high = len(arr)-1
	quick_sort(arr,low,high)

def get_pivot(arr,low,high):
	mid = (high + low) // 2
	pivot = high
	if arr[low] < arr[mid]:
		pivot = mid
	elif arr[low] < arr[high]:
		pivot = low
	return pivot

def quick_sort(arr,low,high):
	if low < high:
		p = partition(arr,low,high)
		quick_sort(arr,low,p-1)
		quick_sort(arr,p+1,high)

def swap(arr,idx1,idx2):
	arr[idx2],arr[idx1] = arr[idx1],arr[idx2]


def partition(arr,low,high):
	if len(arr) < 2:
		return 0

	pivot = get_pivot(arr,low,high)
	pivot_val = arr[pivot]
	arr[pivot], arr[low] = arr[low], arr[pivot]
	border = low
	
	for i in range(low,high+1):
		if arr[i] < pivot_val:
			border += 1
			arr[i],arr[border] = arr[border],arr[i]
	arr[low], arr[border] = arr[border],arr[low]
	return border

sort(arr)
print(arr)

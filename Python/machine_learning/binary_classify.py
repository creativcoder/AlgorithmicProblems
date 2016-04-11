
import pprint
import requests
import sklearn
from sklearn import tree


# Attribute Information of the Pima Indians Diabetes Data Set:
# Ref: http://archive.ics.uci.edu/ml/datasets/Pima+Indians+Diabetes

# 1. Number of times pregnant
# 2. Plasma glucose concentration a 2 hours in an oral glucose tolerance test
# 3. Diastolic blood pressure (mm Hg)
# 4. Triceps skin fold thickness (mm)
# 5. 2-Hour serum insulin (mu U/ml)
# 6. Body mass index (weight in kg/(height in m)^2)
# 7. Diabetes pedigree function
# 8. Age (years)
# 9. Class variable (0 or 1) 

dataset = requests.get('http://archive.ics.uci.edu/ml/machine-learning-databases/pima-indians-diabetes/pima-indians-diabetes.data')
content = dataset.content
multivariate_array = []
label_arr = []


for row in content.split("\n"):
	attrib_arr = []
	for attrib in row.split(","):
		attrib_arr.append(attrib)
		
	label_arr.append(attrib_arr[-1])
	attrib_arr.pop()
	multivariate_array.append(attrib_arr)

# Clean blank entities
multivariate_array.pop()
label_arr.pop()

pp = pprint.PrettyPrinter(indent=4)

clf = tree.DecisionTreeClassifier()
clf = clf.fit(multivariate_array, label_arr)
patient_prediction = clf.predict([[11, 175, 60, 48, 0, 40.6, 0.289, 24]])

print patient_prediction

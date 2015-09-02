# Abstract - Genetic Algorithm Learning
# Problem statement: Given a sequence of numbers of length n generate the best
# candidate sequence whose sum is equal to X

# # terms in genetic algorithm
# * Individual or Candidate : Each suggested solution for a genetic algorithm is referred to as individual.In our current problem each list of numbers is an individual.

# * Population : The collection of all individuals is referred to as a population

# * Fitness Function : A method which operates on individuals of a population and assigns score to them whether they achieve the desired optimal target value

# * Evolve Function or Algorithm : 

from random import randint
from operator import add
def individual(length,min,max):
	return [randint(min,max) for x in range(length)]

#print(individual(5,0,100))

def population(count,length,min,max):
	"""count : the number of individuals in a population
		length : the length of each individual
		min : minimum range of individuals value
		max : maximum range of individuals value
	"""
	return [ individual(length,min,max) for x in range(count) ]

def fitness(individual,target):
	"""
		individual : the individual to evaluate (a list)
		target : the target sum the individuals are aiming for
	"""
	sum = reduce(add,individual,0)

	return abs(target-sum)

def fitness_for_pop(pop,target):
	#pop = population(3,5,0,100)
	return [fitness(x,target) for x in pop]



def evolve(pop,target):
	x = fitness_for_pop(pop,target)
	return (min(x),max(x))



def grade(pop,target):
	"""
		Find average of fitness of population
	"""

	summed = reduce(add,(fitness(x,target) for x in pop), 0 )
	return summed/len(pop)*1.0


pop = population(4,5,0,100)
target = 200
print fitness_for_pop(pop,200)
print(evolve(pop,target))

#print grade(pop,target)

#print pop

# total = 500

# distance_list = []

# for x in pop:
# 	s = 0
# 	for val in x:
# 		s = s + val
# 	distance_list.append(abs(s-total))

# x = individual(5,0,100)

# print fitness(x,200)

# #print(distance_list)

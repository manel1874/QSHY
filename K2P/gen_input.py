import random


sequence = ['00','01','10','11']

input = []

for i in range(0, 32000):
	input = input + [random.choice(sequence)]

#print(input)

filename = 'Inputs.txt'


for el in input:
	with open(filename, 'a+') as file_object:
		file_object.write(el[0]+"\n")
		file_object.write(el[1]+"\n")


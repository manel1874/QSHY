import sys

# Receives number of zeros (nr_zeros) to append to some file (filename)
nr_zeros = int(sys.argv[1])
filename = sys.argv[2]

def add_zeros(nr, filename):
    with open(filename, 'a+') as file_object:
        for i in range(nr):
            file_object.write("0\n")


add_zeros(nr_zeros, filename)
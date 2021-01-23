input1 = "AACGTGCTACTGAAAA"

seq_number = "seq_2.txt"

filename = 'Party_0_' + seq_number

def print_A(filename):
    with open(filename, 'a+') as file_object:
        file_object.write("0\n")
        file_object.write("0\n")

def print_C(filename):
    with open(filename, 'a+') as file_object:
        file_object.write("0\n")
        file_object.write("1\n")


def print_G(filename):
    with open(filename, 'a+') as file_object:
        file_object.write("1\n")
        file_object.write("0\n")

def print_T(filename):
    with open(filename, 'a+') as file_object:
        file_object.write("1\n")
        file_object.write("1\n")

for elem in input1:
    if elem == "A":
        print_A(filename)
    elif elem == "C":
        print_C(filename)
    elif elem == "G":
        print_G(filename)
    elif elem == "T":
        print_T(filename)


YaoConfig = """print_output = true
input_section = AES
circuit_type = NoFixedKey

# OS name is added automatically
[AES-Linux]
circuit_file = mainScapi.txt
input_file_party_1 = Inputs/"""+filename+"""
input_file_party_2 = Inputs/"""+filename

#file_object = open("../YaoConfig_" + seq_number, "w")
#file_object.write(YaoConfig)

#file_object.close()



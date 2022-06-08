str_input = input("enter the string:\n")
str_input_copy = str_input
count = 0
sizestring = []
for i in range(len(str_input)):
  for j in range (i+1, len(str_input)):
    sub_string = str_input[i:j]
    length = len(sub_string)
    pos = str_input_copy.find(sub_string)
    while (pos != -1):
      count = count + 1
      str_input_copy = str_input_copy[pos+1:]
      pos = str_input_copy.find(sub_string)
    sizestring.append(length*count)
    count = 0
    str_input_copy = str_input
sizestring.sort()
print(sizestring[len(sizestring)-1])

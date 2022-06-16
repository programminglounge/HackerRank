def my_custom_max (x, modulo, modulo1):
  y = []
  my_max = -1
  for i in range (len(x[0])):
    result_modulo = x[0][i] % modulo
    y.append(result_modulo)
  y.sort()
  for i in range (len(y)):
    if (y[i] < modulo1):
      my_max = y[i]
    else:
      break
  return my_max

def my_sum(x, modulo, modulo2):
  if(len(x) == 1):
    if (x[0][len(x[0])-1] < modulo2):
      return x[0][len(x[0])-1]
    else:
      return my_custom_max(x, modulo, modulo2)
  sumelements = 0
  my_max = 0
  for i in range(len(x[0])):
    if (x[0][i] != modulo2):
      y = my_sum(x[1:], modulo, modulo2-(x[0][i] % modulo))
      if (y != -1):
        sumelements = (sumelements + (x[0][i] % modulo)+ y)
        if (sumelements > my_max):
          my_max = sumelements
      sumelements = 0
    elif (x[0][i] == modulo2):
      for i in range (1, len(x)):
        if (x[i][0] != 0):
          return 0
  return my_max

seperator = -1
numbers = []
numberswithindex = []
numberswithindexes = []
countelements = []
counter = 0
while (seperator == -1):
  first_line = input ("enter the number of arrays and the modulo number:\n")
  seperator = first_line.find(' ')
if (seperator != -1):
  count = int(first_line[0:seperator])
  modulo = int(first_line[seperator+1:])
  for i in range (count):
    second_line = input("enter the " + str(i+1) + " th row :\n")
    num_seperator = second_line.find(' ')
    while (num_seperator != -1):
      number = int(second_line[0:num_seperator])
      counter = counter + 1
      second_line = second_line[num_seperator+1:]
      num_seperator = second_line.find(' ')
      numbers.append((number*number, i))
      numberswithindex.append(number*number)
    number = int(second_line)
    numbers.append((number*number, i))
    numberswithindex.append(number*number)
    numberswithindex.sort()
    numberswithindexes.append(numberswithindex)
    counter = counter + 1
    countelements.append(counter)
    numberswithindex = []
    counter = 0

result =my_sum(numberswithindexes, modulo, modulo)
print(result)

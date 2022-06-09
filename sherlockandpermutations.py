import math

count = int(input('enter the test cases:\n'))
outputs = []
for i in range(count):
  str_input = input('enter the two numbers separated by one space:\n')
  pos = str_input.find(' ')
  first_number = int(str_input[0:pos])
  str_input = str_input[pos+1:]
  second_number = int(str_input)
  sum_numbers = first_number + second_number - 1
  result = int(math.factorial(sum_numbers)/(math.factorial(second_number-1) * math.factorial(sum_numbers-second_number+1)))
  outputs.append(result)
for i in range (count):
  print(outputs[i])

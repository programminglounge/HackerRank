# HackerRank
In this repository I solve some of the problems on the platform Hackerrank using Python, C#, C++

--------------------------------------------
String Function Calculation

Jane loves strings more than anything. She has a string t with her, and value of string s over function f can be calculated given below
<br>f(s) = |s| * Number of times s occurs in t

Jane wants to know the maximum value of f(s) among all substrings(s) of string t. can you help her?

<b>Input Format</b><br>
A single line containing string <b>t</b><br>

<b>Output Format</b><br>
Print the maximum value of <b>f(s)</b> among all the substring <b>(s)</b> of string <b>t</b><br>

<b>Constraints</b><br>
1 <= |t| <= 10<sup>5</sup><br>
The string consists of lowercase English alphabets.<br>

<b>Sample Input 0</b> <br>
aaaaaa <br><br>
<b>Sample Output 0</b> <br>
12 <br><br>
<b>Explanation 0</b> <br>
f('a') = 6 <br>
f('aa') = 10 <br>
f('aaa') = 12 <br>
f('aaaa') = 12 <br>
f('aaaaa') = 10 <br>
f('aaaaaa') = 6 <br>

<b>Sample Input 1</b><br>
abcabcddd<br><br>
<b>Sample Output 1</b><br>
9<br><br>
<b>Explanation 1</b><br>
f values of few of the substrings are shown below:<br>
f('a') = 2 <br>
f('b') = 2 <br>
f('c') = 2 <br>
f('ab') = 4 <br>
f('bc') = 4 <br>
f('ddd') = 3 <br>
f('abcabcddd') = 9 <br>

Among the function values 9 is the maximum one

----------------------------------------------------------------------

Matrix Tracing<br><br>

A word from the English Dictionary is taken and arranged as a matrix, e.g. "MATHEMATICS"

MATHE
ATHEM
THEMA
HEMAT
HEMAT
EMATI
MATIC
ATICS

There are many ways to trace this matrix in a way that helps you construct this word. You are tracing the matrix from the top left position and at each iteration you either move right or down and ultimately reach the bottom right of the matrix. It is assured that any such tracing generates the same word. How many such tracings can be possible for a given word of length m+n01 written as a matrix of size m * n? <br>

<b> Input Format</b><br>
The first line of input contains an integer T. T test cases follow. <br>
Each test case contains 2 space seperated integers m & n (in a new line) indicating that the matrix has m rows and each row has n characters. <br>

<b> Constraints</b><br>
1 <= T <= 10<sup>3</sup> <br>
1 <= m, n <= 10<sup>6</sup>

<b>Output Format</b><br>
Print the number of ways (S) the word can be traced as explained in the problem statement. If the number is larger than 10<sup>9</sup>+7 print s mod (10<sup>9</sup>+7) for each testcase (in a new line)

<b>Sample Input</b><br>
1
2 3

<b>Sample Output</b><br>
3

Explanation:
Lets consider a word AWAY written as the matrix

AWA
WAY

Here the word AWAY can be traced in 3 different ways

AWA
  Y
  
AW
 WY

A
WAY

Hence the answer is 3.

------------------------------------------------------

Sherlock and Permutations

Watson asks Sherlock:<br>
Given a string S of N 0's and M 1's, how many unique permutations of this string start with 1?<br>
Help Sherlock by printing the answer modulo (10<sup>9</sup>+7).

<b>Input Format</b><br>
First line contains T, the number of test cases.<br>
Each test case consists of N and M separated by a space.<br>

<b>Output Format</b><br>
For each test case, print the answer modulo (10<sup>9</sup>+7)<br>

<b>Constraints</b><br>

1 <= T <= 200 <br>
1 <= M, N <= 1000 <br>

<b>Sample Input</b><br>
2<br>
1 1<br>
2 3 <br>

<b>Sample Output</b><br>
1<br>
6<br>

<b>Explanation</b><br>
Test 1: Out of all unique permutations ie. 01 and 10, only second permutation satisfies. Hence, output is 1.<br>
Test 2: Out of all unique permutations ie. 00111  01011  01110  10011  10101  10110  11001  11010  11100, only
10011  10101  10110  11001  11010  11100 satisfy. Hence, output is 6 <br>

--------------------------------------------------------------------------------------


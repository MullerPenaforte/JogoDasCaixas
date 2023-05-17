# JogoDasCaixas
Solution for a problem in a former online judge (Run Codes) about searching for a maximum value in pyramide shape graph

>Status: Complete!

## Technologies used: 
  * C

## Task:
Box Game.

This game consists of a stack of boxes with different values, where each row contains one more box than the previous row. The player must choose a box, and their prize will be the sum of the value of the chosen box plus the values of all the boxes in the rows above it. In other words, all the boxes in the rows above will be included in the calculation, whether they are positive or negative. If the player makes a bad choice, the value can be negative, and there will be no prize.

For example, in the following box configuration, the second box in the third row should be chosen to obtain the highest prize, which is equal to 17.

For this exercise, the program should determine which box should be chosen to maximize the prize value.


Input file:

N (height of the stack of boxes, which is the number of rows)

Values of the boxes in the first row separated by spaces

Values of the boxes in the second row separated by spaces

...

The program should request the name of the input file. The program's output should follow the template below:

Enter the name of the input file: test.txt

Answer: row 3, box 2.


<img src="https://github.com/MullerPenaforte/JogoDasCaixas/assets/129807601/3eff4a1e-adc5-4a3f-9430-98886e699cd4" width="400">



## How to run the application:
  * First, [download](https://sourceforge.net/projects/mingw/files/OldFiles/) and install the compiler.

  * Then, type the C/C++ program and save it.

  * Then, open the command line and change directory to the particular one where the source file is stored, using cd like so:
  cd C:\Documents and Settings\...
  
  * Then, to compile, type in the command prompt:
  gcc sourcefile_name.c -o outputfile.exe
  
  * Finally, to run the code, type:
  outputfile.exe


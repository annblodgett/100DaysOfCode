/* A program that simulates an Intcode computer.

https://adventofcode.com/2019/day/2


 An Intcode program is a list of integers separated by commas (like 1,0,0,3,99).
 To run one, start by looking at the first integer (called position 0). 
 Here, you will find an opcode - either 1, 2, or 99. 
 The opcode indicates what to do; for example, 99 means that the program is finished and should immediately halt.
 Encountering an unknown opcode means something went wrong.
 
 Opcode 1 adds together numbers read from two positions and stores the result in a third position. 
 The three integers immediately after the opcode tell you these three positions - 
 the first two indicate the positions from which you should read the input values, 
 and the third indicates the position at which the output should be stored.
 
 Opcode 2 works exactly like opcode 1, except it multiplies the two inputs instead of adding them. 
 Again, the three integers after the opcode indicate where the inputs and outputs are, not their values.
 
 Once you're done processing an opcode, move to the next one by stepping forward 4 positions.
 
 To summarize:
 
1) Check position 0 for valid opcode.
2) If invalid throw error
3) Otherwise execute opcode:
	1) Add numbers read from two positions and store result in third position.
	2) Multiply numbers read from two poistions and store the result in third position.
	99) Halt program
4) Step forward 4 positions and check for opcode
5) loop to step 2 and continue until there are no more values, or opcode 99 is entered.

Test cases:

1,0,0,0,99 becomes 2,0,0,0,99 (1 + 1 = 2).
2,3,0,3,99 becomes 2,3,0,6,99 (3 * 2 = 6).
2,4,4,5,99,0 becomes 2,4,4,5,99,9801 (99 * 99 = 9801).
1,1,1,4,99,5,6,0,99 becomes 30,1,1,4,2,5,6,0,99.

*/

 
 
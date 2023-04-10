BIT MANIPULATION IN C PROGRAMMING

1.	Bitwise OR (|): The bitwise OR operator sets each bit to 1 if either of the corresponding bits of its operands is 1.
2.	Bitwise AND (&): The bitwise AND operator sets each bit to 1 only if both the corresponding bits of its operands are 1.
3.	Bitwise XOR (^): The bitwise XOR operator sets each bit to 1 only if the corresponding bits of its operands are different.
4.	Bitwise NOT (~): The bitwise NOT operator inverts each bit of its operand, i.e., it converts 1 to 0 and 0 to 1
5.	Left Shift (<<): The left shift operator shifts the bits of its left operand to the left by a specified number of positions, 
	and the empty positions are filled with 0.
6.	Right Shift (>>): The right shift operator shifts the bits of its left operand to the right by a specified number of positions, 
	and the empty positions are filled with 0.

These operators are commonly used for bit manipulation in C programming. For example, to set a bit at a specific position within a variable, we can use the bitwise OR operator (|) with a bit mask that has a 1 at the desired position and 0 elsewhere. To clear a bit at a specific position, we can use the bitwise AND operator (&) with a bit mask that has a 0 at the desired position and 1 elsewhere.

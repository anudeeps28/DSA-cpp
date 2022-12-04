## Original Programmer's Intentions
1. The lab contains a file of road which uses to classes that is points and line, in which the line class uses the point class.
2. The original programmer's main aim is to take the input files given with the lab material, tak points from the file, make lines from those and add it to a vector called roads.
	1. Then the programmer attempts to sort the roads according the gradients of the roads. This gradient is a method in the line class whic gives the slopes of the lines made from points given in the file
	2. The, the program attemps the print these sorted roads.

## Commands used to compile the files
- Command to create an executable: g++ *.cpp -o executable_name -Wal -Wextra
	- this gives a bunch of errors and warnings

## Fixing the errors (not warnings)
- redefinition of class point - lines.cpp
- sort is not a member of std in lines.cpp
	- this was because we did not include algorithm.
- organize was not declared int he scope - lines.cpp main
	- typo
- ==returning reference to a local variable==
	- **IMPORTANT**
	- https://stackoverflow.com/questions/4643713/c-returning-reference-to-local-variable
	- https://www.geeksforgeeks.org/how-to-return-local-variables-from-a-function-in-c/
	- 

After fixing all the errors (but not the warnings), we now have an executable - it gives segmentation fault!

After careful examination of the problem, 

## Warnings
- statement has no effect 
	- gradient = gradient * -1
- control reaches end of non void function
	- we need to give a default return value in case the loops don't run
	- placeing else in place of if
- point.cpp - line 20 = use of unused variable
	- we can use answer
- reference to local variable returned in roads.cpp
	- using a pointer instead of a reference
	- this is because outside of the function, there is no variable declared inside the function, and returning a reference of something that does not exist does not match
	- using a pointer is a better idea
- comaprision of interger expressions of different signedness
	- using size_t inseead of int
	- because this is what we use for vector.size() data type
		- it is of type unsigned int
- compariions of interger is always positive
	- we can romve as it is unsigned

## Debugging with dbd - command_line:
- The process was fun: going inside the functions and lines of the code to know what is happen in real-time during runtime of the code!
- I think it is an interesting process: debugging! 
	- You hate it when you start but end up loving it because that is the thing that will make your code functionallity stand out! 



# Infinite Loop in C++

An **infinite loop** is a loop that never terminates because its termination condition is never met. This can happen either intentionally (e.g., for continuously running processes) or unintentionally (e.g., due to a logic error). Generally we don't want the loop to run forever.

# Iteration and Iterator in C++

## Iteration
	•	Definition:
	•	Iteration is the process of repeatedly executing a set of instructions. Each repetition in a loop is called an iteration.

## Iterator
	•	Definition:
	•	An iterator is an object that provides a way to access elements of a container (such as arrays, vectors, or lists) sequentially, without exposing the underlying structure.
	•	Key Features:
	•	Dereferencing: Access the element that the iterator currently points to.
	•	Incrementing: Move the iterator to the next element.
	•	Uniform Access: Provides a consistent interface for different container types in the STL (Standard Template Library).

# For - Loop
```c++
// boilerplate
for (initialization; condition; increment) {
    // Code block to be executed repeatedly
}
```

# While- Loop
```c++
while (condition) {
    // 1. Code block to be executed repeatedly as long as the condition is true
    // 2. update condition
}
```

# Do - While Loop
```c++
// work gets gets at least once irrespective of the condition
do {
    // Code block to be executed
} while (condition);
```


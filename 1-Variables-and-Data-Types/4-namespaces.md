# Namespaces in C++

Namespaces in C++ are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

## Key Points

- **Purpose:**  
  Namespaces help avoid conflicts by encapsulating identifiers (such as variable names, function names, classes, etc.) within a named scope.

- **Usage:**  
  When two or more entities have the same name, namespaces ensure that they can be distinguished by qualifying them with the namespace name.

- **Syntax Example:**
  ```cpp
  namespace MyNamespace {
      void myFunction() {
          // Code goes here
      }
  }

  int main() {
      MyNamespace::myFunction(); // Calling the function using the namespace qualifier
      return 0;
  }
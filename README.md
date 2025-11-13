🧩 UNIT I — Fundamentals of OOP & C++ Basics

| **Topic**                                | **Definition**                                                                                                                                  |
| ---------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------- |
| **Object Oriented Programming Paradigm** | A programming model based on the concept of *objects* that contain both data and methods, emphasizing reusability, modularity, and abstraction. |
| **Basic Concepts of OOP**                | Includes classes, objects, abstraction, encapsulation, inheritance, and polymorphism — the foundation of object-oriented design.                |
| **Benefits of OOP**                      | Promotes reusability, scalability, easier maintenance, and real-world modeling through object abstraction.                                      |
| **Object Oriented Languages**            | Languages like C++, Java, Python that support object-oriented concepts such as classes and inheritance.                                         |
| **Applications of OOP**                  | Used in GUI applications, simulations, game development, real-time systems, and large-scale software projects.                                  |
| **C++ Programming Language**             | A general-purpose, object-oriented programming language developed by Bjarne Stroustrup, extending C with OOP features.                          |
| **Tokens**                               | The smallest elements of a program — keywords, identifiers, constants, strings, operators, and special symbols.                                 |
| **Keywords**                             | Reserved words in C++ with predefined meanings (e.g., `int`, `if`, `class`, `return`).                                                          |
| **Identifiers**                          | Names given to variables, functions, classes, etc., defined by the user following naming rules.                                                 |
| **Constants**                            | Fixed values that do not change during program execution.                                                                                       |
| **Data Types**                           | Define the type of data a variable can hold — such as `int`, `float`, `char`, `double`, etc.                                                    |
| **Type Compatibility**                   | Ensures that operands in expressions have compatible types for proper operation.                                                                |
| **Variables**                            | Named memory locations used to store data during program execution.                                                                             |
| **Operators in C++**                     | Symbols that perform operations on operands (e.g., `+`, `-`, `*`, `/`, `==`, `&&`).                                                             |
| **Implicit Type Conversions**            | Automatic conversion of data types by the compiler during operations.                                                                           |
| **Operator Precedence**                  | Determines the order in which operators are evaluated in an expression.                                                                         |
| **The Main Function**                    | The entry point of every C++ program where execution begins.                                                                                    |
| **Function Prototyping**                 | Declaration of a function specifying its return type, name, and parameters before definition.                                                   |
| **Call by Reference**                    | Passing the address of a variable to a function, allowing direct modification of the original value.                                            |
| **Return by Reference**                  | Returning a reference to a variable from a function, allowing it to be used as an l-value.                                                      |
| **Inline Functions**                     | Functions expanded at compile time to reduce function call overhead.                                                                            |
| **Function Overloading**                 | Defining multiple functions with the same name but different parameter lists.                                                                   |
| **Friend Functions**                     | Non-member functions that can access private and protected members of a class.                                                                  |
| **Default Parameter Value**              | Allows a function to assume a default value for a parameter if no argument is provided.                                                         |

🧱 UNIT II — Classes, Objects & Constructors

| **Topic**                               | **Definition**                                                                                           |
| --------------------------------------- | -------------------------------------------------------------------------------------------------------- |
| **Specifying a Class**                  | Defining a class structure with data members and member functions.                                       |
| **Member Functions**                    | Functions defined within a class that operate on its data members.                                       |
| **Encapsulation**                       | Binding data and functions together within a class, hiding internal details.                             |
| **Information Hiding**                  | Restricting access to the internal data of a class using access specifiers.                              |
| **Abstract Data Types (ADT)**           | Data types defined by behavior rather than implementation.                                               |
| **Objects & Classes**                   | Objects are instances of classes that represent entities with state and behavior.                        |
| **Static Member Functions**             | Functions declared with `static`, shared by all objects of the class.                                    |
| **Arrays of Objects**                   | Collection of multiple objects of the same class stored in an array.                                     |
| **Constructors**                        | Special functions used to initialize objects automatically when created.                                 |
| **Destructors**                         | Special functions used to clean up resources when an object is destroyed.                                |
| **Parameterized Constructors**          | Constructors that take arguments to initialize objects with specific values.                             |
| **Copy Constructors**                   | Initialize a new object as a copy of an existing object.                                                 |
| **Dynamic Constructors**                | Constructors that allocate memory dynamically using `new`.                                               |
| **Identity and Behaviour of an Object** | Each object is identified by unique data and exhibits defined behavior via functions.                    |
| **C++ Garbage Collection**              | Memory management process for reclaiming dynamically allocated memory (handled manually using `delete`). |
| **Dynamic Memory Allocation**           | Allocating memory during runtime using operators like `new` and `delete`.                                |
| **Explicit Type Conversions**           | Manual type casting using syntax like `(int)` or `static_cast<int>()`.                                   |
| **Operator Overloading**                | Giving new meanings to existing operators for user-defined data types.                                   |

🧠 UNIT III — Inheritance & Polymorphism

| **Topic**                                      | **Definition**                                                                              |
| ---------------------------------------------- | ------------------------------------------------------------------------------------------- |
| **Inheritance**                                | Mechanism where one class acquires properties and behaviors of another class.               |
| **Inheritance Methods**                        | Types include single, multiple, multilevel, hierarchical, and hybrid inheritance.           |
| **Class Hierarchy**                            | Organizational structure showing relationships between base and derived classes.            |
| **Derivation – Public, Private & Protected**   | Specifies access level of inherited members in derived classes.                             |
| **Aggregation**                                | Relationship where one class contains objects of another class without ownership.           |
| **Inheritance Constructors**                   | Constructors in derived classes that invoke base class constructors.                        |
| **Composition vs. Classification Hierarchies** | Composition represents “has-a” relationships; classification represents “is-a” hierarchies. |
| **Containership**                              | A form of composition where an object contains another class object as a member.            |
| **Initialization List**                        | Used to initialize data members before the constructor body executes.                       |
| **Polymorphism**                               | Ability of a function or operator to behave differently based on the object type.           |
| **Categorization of Polymorphic Techniques**   | Includes compile-time (overloading) and runtime (virtual functions) polymorphism.           |
| **Polymorphism by Parameter**                  | Implemented through templates allowing code to work with different data types.              |
| **Parametric Polymorphism**                    | Writing generic code using templates that operate on any data type.                         |
| **Generic Function – Template Function**       | A function template that defines a function for multiple data types.                        |
| **Function Overriding**                        | Redefining a base class function in a derived class with the same signature.                |
| **Run Time Polymorphism**                      | Achieved through virtual functions, where the call is resolved at runtime.                  |
| **Virtual Functions**                          | Functions declared with `virtual` in a base class to enable dynamic binding.                |


⚙️ UNIT IV — Advanced C++ Features & STL

| **Topic**                                       | **Definition**                                                                                          |
| ----------------------------------------------- | ------------------------------------------------------------------------------------------------------- |
| **Standard C++ Classes**                        | Predefined classes provided by C++ (like `string`, `iostream`, `vector`, etc.).                         |
| **Using Multiple Inheritance**                  | A class derived from more than one base class.                                                          |
| **Streams and Files**                           | Stream classes (`ifstream`, `ofstream`, `fstream`) used for input and output file operations.           |
| **Namespaces**                                  | Logical groupings of identifiers to avoid name conflicts using `namespace` keyword.                     |
| **Exception Handling**                          | Mechanism to handle runtime errors using `try`, `catch`, and `throw`.                                   |
| **Generic Classes**                             | Template-based classes that can operate with different data types.                                      |
| **Overview of Standard Template Library (STL)** | A powerful library containing generic classes and functions like containers, iterators, and algorithms. |
| **Iterators and Allocators**                    | Iterators traverse containers; allocators manage memory for them.                                       |
| **Strings**                                     | Objects of the `string` class representing sequences of characters.                                     |
| **Streams**                                     | Abstractions for data input/output operations in C++.                                                   |
| **Manipulators**                                | Objects that modify stream properties (like `endl`, `setw`, `setprecision`).                            |
| **User Defined Manipulators**                   | Custom manipulators created by programmers to control stream formatting.                                |
| **Vectors**                                     | Dynamic arrays from the STL that can grow or shrink during runtime.                                     |


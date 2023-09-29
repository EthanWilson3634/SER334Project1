# Intro to C

This is the first project in a series of projects from a C programming class at ASU. SER334 Operating Systems and System Programming. The goal of this class is to learn the fundamentals of operating systems: run-time environments, process management, scheduling, synchronization techniques, memory management, and file management.

This project covers basic C programming by using pointers and basic algorithms and computations.

Each file is meant to be run on the command line with gcc.


# Programs
 >WilsonCollatz.c
 >WilsonComputation.c
 >WilsonDecrpyt.c
## WilsonCollatz.c
Determine if an integer satisfies the Collatz conjecture:

$$
\begin{equation}
F(n) = 
\left\{
    \begin{array}{lr}
        \frac{n}{2} & \text{if } n \% 2 = 0\\
        3n+1 & \text{if } n \% 2 = 1
    \end{array}
\right\}
\end{equation}
$$
The conjecture is that for all integer values of n it will eventually lead to 1.
Sample output:
```
C:\Users\ethan\SER334Project1>gcc WilsonCollatz.c -o collatz
C:\Users\ethan\SER334Project1>collatz
Enter an integer to test the collatz conjecture: 5
Iteration #1
n = 16
Iteration #2
n = 8
Iteration #3
n = 4
Iteration #4
n = 2
Iteration #5
n = 1
```
## WilsonComputation.c
Simple computation that computes the sum of the volumes of cylinders. The user inputs the amount of cylinders as well as the height and radius of each cylinder
Sample output:
```
C:\Users\ethan\SER334Project1>gcc WilsonComputation.c -o comp
C:\Users\ethan\SER334Project1>comp
How many cylinders would you like to sum?
Enter and integer: 2

Enter the height of cylinder number 1
9

Enter the radius of cylinder number 1
2

Enter the height of cylinder number 2
5

Enter the radius of cylinder number 2
3
The sum of the volumes of the cylinders entered is: 254.469005
```
## WilsonDecrpyt.c
The base file provided for this programmed contained several encrypted chunks of text.
The point of this program is to learn how to use pointer arithmetic to modify the contents in a String (char []).
Sample output
```
C:\Users\ethan\SER334Project1>gcc WilsonDecrypt.c -o decrypt
C:\Users\ethan\SER334Project1>decrypt
"C is quirky, flawed, and an enormous  success." - Dennis  M. Ritchie
```

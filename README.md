##          C Programming by Kernighan , Ritche .

### What is C : 

- General Purpose Programming Language . 
- C originally designed for UNIX OS on DEC PDP-11 BY Dennis Rithe .
- It is not tied to any one os or machine . 
- C is system programming language -> compiler , os .
- C ideas developed from BCPL by Martin Richards . 
- influence of BCPL on C proceeded indirectly throuch B .
- BCPL and B are typeless languages
- C is a relatively low level language -> it uses computers objects
like chars , numbers , addresses , arth & logical operators .

<hr/>

### Data Types : 

- Fundamental Types -> Character , integers and floating point number
- Derived Types -> pointers , arrays , structures , unions .


<hr/>

### Other :  

- Expressions are fromed from operators and operands . 
- expressions and function calls are statements .
- Pointers provide machine independent address arithmetic . 

### Control Flows : 

- decision making (if-else) .
- selecting (switch) . 
- looping (while,for) | (do while) .
- loop exit (break) .

### Function : 

- Function returns values of basic types -> void , fund types , structures or pointers .
- Fuctions can be called recursively . 
- local variables are 'automatic' storage class .
- functions may not be nested .

### Preprocessing : 

- Preprocessing step performs macro substitution -> inclusion of other source files and conditional compilation . 

### C does not have : 

- no operations to deal with -> character strings , sets , lists or arrays .
- no heap or garbage collection .
- itself doesnot provide input/output facilities .
- no READ or WRITE statements or no build in file access methods . 
- Multiprogramming , parallel operations , synchronization or coroutines . 

### How C provides : 

- Provides standards collections as functions .

### Getting Started . 

- Int range 16 bit -32768 - +32767 
- float 10^-38 - 10^38 .

### Data types : 

- char 1 byte .
- short short integer .
- long long integer .
- double -> double precision floating point .

> Fact : While Loop condition executes 1 more than of its body .

- %d print as decimal integer
- %6d print as decimal integer, at least 6 characters wide "f print as floating point
- %6f print as floating point, at least 6 characters wide
- %.2f print as floating point, 2 characters after decimal point
- %6.2f print as floating point, at least 6 wide and 2 after decimal point
- %o for octal 
- %x for hexadecimal . 
- %c for character .
- %s for character array | string 
- %% for % itself 

### Symbolic Constants : 

- #define gives symbolic names with constant . 
- #define name replacement text
- Symbolic Constants are Conventionally written in Upper Case . 


### Character Input and Output : 

```c

c = getchar();
```
- it reads 

```c

putchar(c)
```
- it writes  

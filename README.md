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

### Escape Sequence : 

- \t for tab
- \n for new line
- \b for back space
- \" for double quote
- \\ for backslash 


Exercise 1-1. Run the "hello, world" program on your system. Experiment
with leaving out parts of the program, to see what error messages you get. 0
Exercise 1-2. Experiment to find out what happens when printf's argument
string contains \c, where c is some character not listed above  


### Function Prototype : 

- just before main function declaration is written it is function prototype

### Call by Value : 

- in c all function arguments are passed as values.
- temporary variables are created.
- it cannot alter original value


### Character Arrays : 

- array of characters

### External Variables and Scopes :

- variables within the function can only be accessed with in the function.
- And such variables are called Automatic Variables . 
- extern statement makes variables global or other way to make to declare variables outside the function .
- Look File longest_line_9.c file to understand more about scoping   
- you might have seen the redundant variables declarations in above file and common practice is to declare external varibles at top of the file and omit the reinitialization of variables in files.
- To Share variables from one file to other 'extern' becomes handy.
- Usually we declare external variables in a seperate files we call then as headers which can be included by #include .
- .h is conventional header name.



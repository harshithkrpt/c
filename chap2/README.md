# Types , Operators and Expressions

### Variable Names :

- variables are made of letter and digit's , _ counts as a letter .
- 1 st character must be a letter in variable name . 
- dont begin variable names with _ . 
- case sensitive . 
- In Convention -> Lowercase for variable names -> Upper Case for symbolic constants . 
- you cannot use keywords as variable names. 

### Data Types and Sizes : 

- char -> holds one character . 
- int -> holds integer variable . 
- float -> single precision float . 
- double -> double precsions float . 

```c
	short int sh;
	long int counter;
	// or by default a variable is a integer .
	short sh;
	long counter 
``` 

- short is often 16 bits .
- long is 32 bits . 
- integer will either be 16 or 32 bits .
- unsigned and signed int can be applied to character | integer.
- unsigned numbers are always positive . 
- unsigned character has size 0 - 255
- signed character range -128 - 128.

```c
	#include<limits.h>
	#include<float.h>
```
- Above code has all sizes along with symbolic constants . 

### Constants 

- 1234 integer constant .
- long constant written as 123456789L ot 123456789l.
- unsigned constants as u and unsigned long as ul.
- floating point 123.2
- exponent constants - 1e-2 type is double unless suffexed.
- f suffix float constants
- l and L as long double
- leading 0 is Octal
- leading 0x is hexadecimal
- 0XFUL is unsigned long constant with value 15 decimal . 
- character constant is a Integer ex  : 'a' - 97
- '0' value 48 in ASCII.
- \n newline character

```c
#define VTAB '\013' /*  ASCII Vertical Tab  */
#define BELL '\007' /*  ASCII BELL Character  */

```
- \a alert 
- \b backspace
- \f formfeed
- \n newline
- \r carriage return
- \t horizantal tab
- \v vertical tab
- \\ backslash
- \? question mark
- \' single quote
- \" double quote
- \000 octal number
- \xhh hexadecimal number

### String Constant : 

- "I am a string " -> string constant.
- "" -> empty string.
- "hello, " " world" => "hello, world"
- strlen() returns length of string excluding the \0.
- Harshith

- emumeration - 

```c
enum boolean {NO,YES};
```
- no is 0 yes is 1 unless explicit values are specified.

```c
enum escapes {BELL = '\a',BACKSPACE = '\b'}
enum months {JAN = 1, FEB , MAR,...,DEC}
```
- explicit declaration of methods.

### Declarations : 

- variables must be declared before 

```c
int lower,upper,step;
char c,line[1000];
``` 

- variable can be initialized before use.

```c
char esc = '\\';
int i = 0;
int limit = MAXLINE+1;
float eps = 1.0e-5;
```

- external and static variables are initialized to 0
- automatic and register are initialized to garbage
- const is applied to declaration of any variable.

```c
const double e = 2.718182845905;
const char msg[] = "warning";
```
- arguments as consrants

```c
int strlen(const char[]);
```

### Arithmetic Operators : 

- + , -, * , / and % 
- Program for Leap Year 

```c
if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	printf("%d is a leap year\n",year);
else
	printf("%d is not a leap year\n",year);
``` 

- % operator cannot be applied to float or double 

### Relational and Logical Operators

- > >= < <= all have same precedence.
- just below precedence are == != operators
- relational operators has lower precedence than arithmetic operators.
- && || left to right evaluation stops as soon as the truth or falsehood of result is known.

```c
for(i=0;i<lim-1 && (c=getchar()) != '\n' && c != EOF;++i) s[i] = c;
```
- && precedence higher than || and lower than relational and equality operators.

### Type Conversions :

- different types are converted into common type automatic convetions are convert narrow to wider without losing info.

```c
/* convert string of digits to integers */
int atoi(char s[])
{
	int i,n;
	n = 0;
	for(i=0;s[i] >= '0' && s[i] <= '9';++i)
		n = 10 * n + (s[i] - '0');
	return 0;
}
```

- s[i] - '0' returns numeric value of s[i]

- convert c to lower case  ASCII only

```c
int lower(int c)
{
	if(c >= 'A'&& c <= 'Z')
		return c + 'a' - 'A';
	else 
		return c;
}
```

- Since an argument of a function call is an expression, type conversions also
take place when arguments are passed to functions. In the absence of a func-
tion prototype, char and short become int, and float becomes double.
This is why we have declared function arguments to be int and double even
when the function is called with char and float.

- Explicit Conversions :

- (type-name) expression 

```c
sqrt((double) n)
```

- Coercion :

```c
double sqrt(double);

root2 = sqrt(2); // 2 to 2.0 without any cast
```

```c
unsigned long int next = 1;
/* rand : return pseudo-random integer on 0..32767
int rand(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}

/* srand:  set seed for rand() */
void srand(unsigned int seed)
{
	next = seed;
}
```

### Increment and Decrement Operators :

- if(c == '\n') ++n1;

```c
int n = 5;
x = n++; // x = 5 n = 6
x = ++n; // x = 7 n = 7 
```

- squeeze : delete all c from s
```c
void squeeze(char s[],int c)
{
	int i,j;
	for (i=j=0;s[i] != '\0';i++) 
		if(s[i] != c) 
			s[j++] = s[i];
	s[j] = '\0';
}
```
### Bitwise Operators : 

- 6 bit manipulations.
- can only be applied to char , short , int , long (signed or unsigned).
- & | ^ << >> ~(one's complement). 

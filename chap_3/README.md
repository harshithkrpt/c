# Control Flow

- Order of Computation 

### Statements and Blocks  :

```c
x = 0;
i++;
printf(...); 
// above 3 expressions becomes statements when followed by semicolon
```
- Braces are used to group declarations into compount statement.

### If-Else

```c
if (expression)
	statement1
else
	statement2
```
- else is optional 

```c
if(n>0)
	if(a>b)
	z = a;
	else 
	z = b;
// Ambuguity in Situation
if(n >= 0)
	for(i=0;i<n;i++)
		if(s[i]>0){
		printf("...");
		return i;
		}
else /* Wrong Syntax */
	printf("error --n is negative\n");
```

### Else If

```c
if (expression)
statement
else if (expression)
statement
else if (expression)
statement
else if (expression)
statement
else
statement
```

- else if ladder.


### Switch

- multi way decision 

```c
switch (expression) {
	case const-expr: statements
	case const-expr: statements
	default: statements
}
```
### Loops - while and for

- while
```c
while (expression)
	statement
```
- for 
```c
for (expr1;expr2;expr3)
	statement
// equivalent to
expr1
while(expr2) {
	statement
	expr3;
}
```

- below code will be infinite loop
```c
for(;;) {
	...
}
```

- to use for or while is a personal preference
```c
while((c=getchar()) == ' ' ||  == '\n' || c == '\t'); // skip
```
- for is preferable for simple initialization and increment.

### Loops - Do While :

```c
do
	statement
while (expression);
```
### Break and Continue :

- break can be used inside a loop and switch
- continue can only be used inside a loop .
```c
for(i=0;i<n;i++) {
	if(a[i]<0) 
	continue; // Skip Negitive Elements
	.. //do positive elements 
}
```  
### GOTO and Labels : 

- labels for branching 
- goto move to a label

```c
for( ... ) {
	for( ... ) {
		...
		if (disaster)
			goto error;
	}
}
error:
	clean up the mess
```

- scope of label in entire function .

```c
for(i=0;i<n;i++)
  for(j=0;j<m;j++)
   if(a[i] == b[j])
	goto found;
found : 
 ...
```


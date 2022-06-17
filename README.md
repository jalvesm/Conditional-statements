# Conditional statements
## Second list of exercises
This repository contains my solved exercises from the Algorithms and Data Structure list @ 1st semester. It is the result of my studies for training the "if-else-switch" statments.

### What are conditional statements?
According to *C: como programar* there are 3 types of selection structures:
- the ``if`` structure will execute (in case of a true sentence) or jump (in case of false sentence) the following command;
- the ``if-else`` structure: will execute the following command in case of true sentence, otherwise the statement inside ``èlse`` will be executed.
- the ``swtich`` structure: command of *multiple selection* will select the action to be executed among different ones.

In a simple way, the ``ìf-else`` syntax can be ilustrated as follows:
```
if (condition) 
{
  //command to be executed if condition is true;
}
else
{
  //command to be executed if condition is false;
}
```

Heading to swtich statment case, here's a simple exemple for its syntax:

```
switch(expression)
{
  case 1:
      // code;
      break;
  case 2:
      // code;
      break;
  default:
      //code;
      break;
} // switch ends here!

### What is this list about? // mudar título
The file in main branch *exe#num.c* is the file .c that contains the algorith that solves the question problems. Here you can see what does each exercice proposes. 

1. Reads an integer number and returns if this integer is even or odd;
2. This algorithm reads a name and 3 grades of a student and returns his media & approved or not;
3. Reads the water's temperature and returns if its state is in solid, liquid or gas state;
4. Reads a value for a number and calculates specific expressions depending on number's value.

### Tecnologies used to solve the problems
Algorithms inside this repository was writen in C language, tested in VSCode enviroment (*version: 1.68.0*) with ManjaroLinux (*distri. release: 21.3.0*) as the operating system. :)

#### References:
[^2] Deitel, P. J.
C: como programar / Paul Deitel, Harvey Deitel ; tradução Daniel Vieira ;
revisão técnica César Caetano. -- 6. ed. -- São Paulo: Pearson Prentice Hall, 2011.

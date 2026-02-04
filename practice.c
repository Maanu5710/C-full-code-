/* c language complete code with example
 (chapter 1)
notes : Variables
Variable is the name of a memory
location which stores some data.
25 S
a b
Memory
Variables
Rules
a. Variables are case sensitive
b. 1st character is alphabet or '_'
c. no comma/blank space
d. No other symbol other than '_'
Variables
Data Types
Constants
Values that don't change(fixed)
Types
Integer
Constants
Character
Real Constants
Constants 1, 2, 3, 0
, -1, -2
1.0, 2.0,
3.14, -24
'a'
,
'b'
,
'A'
,
'#'
,
'&'
32 Keywords in C
Keywords
Reserved words that have special
meaning to the compiler
Keywords
auto double int struct
break else long switch
case enum register typedef
char extern return union
continue for signed void
do if static while
default goto sizeof volatile
const float short unsigned
Program Structure
#include<stdio.h>
int main() {
 printf("Hello World");
 return 0;
}
Comments
Single Line Multiple
Line
Lines that are not part of program
//
/*
*/
/* Output
printf(" Hello World ");
printf(" kuch bhi \n");
new line
Output
printf(" age is %d ", age);
printf(" value of pi is %f ", pi);
printf(" star looks like this %c ", star);
CASES
1.integers
2. real numbers
3. characters
Input
scanf(" %d ", &age);
Compilation
Hello.c C Compiler
A computer program that translates C code
into machine code
a.exe (windows)
a.out (linux & mac)

code with example : C Language Tutorial
(Basic to Advanced)
Topics to be covered :
Installation + Setup
Chapter 1 - Variables, Data types + Input/Output
Chapter 2 - Instructions & Operators
Chapter 3 - Conditional Statements
Chapter 4 - Loop Control Statements
Chapter 5 - Functions & Recursion
Chapter 6 - Pointers
Chapter 7 - Arrays
Chapter 8 - Strings
Chapter 9 - Structures
Chapter 10 - File I/O
Chapter 11 - Dynamic Memory Allocation
Variables, Data Types + Input/Output
(Chapter 1)
V
1. First Program
#include<stdio.h>
int main() {
printf("Hello World");
return 0;
}
2. Variables & Data Types + Constants & Keywords
#include<stdio.h>
int main() {
int number;
int age;
int price;
return 0;
}
#include<stdio.h>
int main() {
int age = 22;
float pi = 3.14;
char percentage = '%';
return 0;
}
3. Comments
#include<stdio.h>
//This program prints Hello World
int main() {
printf("Hello World");
return 0;
}
4. Output
#include<stdio.h>
int main() {
int age = 22;
float pi = 3.14;
char percentage = '%';
printf("age is %d", age);
printf("age is %f", pi);
printf("age is %c", percentage);
return 0;
}
5. Input (Sum of 2 numbers)
#include<stdio.h>
int main() {
int a, b;
printf("enter a \n");
scanf("%d", &a);
printf("enter b \n");
scanf("%d", &b);
printf("sum of a & b is : %d \n", a+b);
return 0;
}
6. Practice Qs 1 (Area of Square)
#include<stdio.h>
//area of square
int main() {
int side;
scanf("%d", &side);
printf("%d", side * side);
return 0;
}
7. Practice Qs 2 (Area of Circle)
#include<stdio.h>
//area of square
int main() {
float radius;
scanf("%f", &radius);
printf("%f", 3.14 * radius * radius);
return 0;
}


//Chapter 1 - Variables, Data types + Input/Output 
chapter 1 notes code with example 


/* program sturcture in c language always use this sturcture
c program agiccute line 1 first then line 2
all line with semicolon ; use in end of last 
c is case sentinve language small case write in small upper case write in upper case

#include<stdio.h>   always start this line name is 

int main() {    then is this
    printf("Hello World");
    return 0;
}
hello world our first program

#include<stdio.h>
int main() {
    printf("hello world");
    return 0;
} */
//variables
/*veriables is the name of a memory location which stores some data
variables rules 
a.variables are case sensitive 
b. 1st character is alphabet or '_' 
c. no comma/blank space 
d. no other symbol other than '_' 

 #include<stdio.h>

int main() {
    int number =25;
    int star = '*';
    int age = 22;
    float pi = 3.14; 

    int a = 12;
    int A = 30;
    int _age = 22;
    int final_price =100;

    return 0;
}*/

/*variables data types

data type                       size in bytes
char or signed char                 1
unsigned char                       1
int or signed int                   2
unsigned int                        2
short int or unsigned short int     2
signed short int                    2
long int or signed long int         4
unsigned long int                   4
float                               4
double                              8
long double                         10

#include<stdio.h>

int main() {
    int age = 22;
    float pi = 3.14;
    char hashtag = '#';

    return 0;
}*/

/*constants values don't change(fixed)
                    types
integer constants           real constants          character constants
1,2,3,0,-1,-2                1.0,2.0,3.14,-2.4        'a','b','A', '#','&'

keywords reserved words that have special meaning to the compiler 32 keywords in c
                  32 keywords
auto        double     int         struck
break       else       long        switch
case        enum       register    typedef
char        extern     return      union
continue    for        signed      void
do          if         static      while
default     goto       sizeof      volatile
const       float      short       unsigned
*/
// comments are two types
/*comments lines are not part of program
single line comments    multiple line comment
        //                      /*
                                */
//this single line comments code displays how data types work in c   single line comments
/*
this is a
multi-line 
comment
*/

/*output
printf("Hello World");

new line
printf("kuch bhi\n");
*/
/* one line all outputs 
#include<stdio.h>

int main() {
    printf("hello.c");
    printf("hello.c");
    printf("hello.c");
    printf("hello.c");
    return 0;
}*/
/*new line outputs
#include<stdio.h>

int main() {
    printf("hello.c\n");
    printf("hello.c\n");
    printf("hello.c\n");
    printf("hello.c\n");
    return 0;
}*/
/*output cases format specify
1. intergers    printf("age is %d",age);
2. real number  printf("value of pi is %f", pi);
3. characters   printf("star looks like this %c",star);
*/
/* #include<stdio.h>

int main() {
    int age = 22;
    float pi = 3.14;
    char star ='*';
    printf("age is %d \n",age);
    printf("age is %f \n",pi);
    printf("star is %c\n",star);
    return 0;
} */
/* input    scanf("%d",&age);
%d is show type of data int   & always used in scanf()funtion is address age is name 
*/
/* #include<stdio.h>
int main() {
    int age;
    printf("enter age");
    scanf("%d", &age);
    printf("age is : %d",age);

    return 0;
} */
/*#include<stdio.h>
int main() {
    int a, b;
    printf("anter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    // not madatary to difine this int sum = a + b;
   there are two ways to calulate direct calulate & define new veriable name to calulate  printf("sum is : %d", sum/ a+b); 

    return 0;
}*/
/*compilation
compilation a computer program that translates c code into machine code
hello.c         c compiler          a.exe (windows)
                                    a.out (linux & mac)
practise Qs1.write a program to calculate area of square. (side is given)
ans.calulate of square is side*side 
*/
/*#include<stdio.h>
// area of aquare 
int main() {
    int side; // two types of calulate sqare 
    float Side;
    printf("enter side");
    scanf("%f", &Side); //change %d for int data & %f for float data

    printf("area is : %f", Side * Side);//change %d for int data & %f for float data
    return 0;
}*/
/*practise Qs2.write a program to calculate area of circle. (radius is given) pi symbal value is 3.14
ans. pi symbol r point 2 */
/*#include<stdio.h>
// area of circle
int main() {
    float radius;
    printf("enter radius");
    scanf("%f", & radius);
    printf("area is : %f", 3.14 * radius *radius);
    return 0;
}*/
/* end of chapter 1
                    HOMEWORK SET
A.WRITE A PROGRAM TO CALULATE PERIMETER OF RECTANGLE. TAKE SIDE, A&B FROM USER.
B.TAKE A NUMBER(n)FROM USER & OUTPUT ITS CUBE(n*n*n).
c.write comments for programs a & b.*/



/* Chapter 2 - Instructions & Operators
chapter 2 notes code with example */
/*instruction 
these are statements in a program
                    types
type declaration    arithmetic instructions      control instructions
instruction
type declaration instruction declare var before using it
valid                       invalid
int a = 22;                 int a = 22;
int b = a;                  int b = a;
int c = b + 1;              int c = b + 2;
int d = 1,e;                int d = 2,e;

int a,b,c;                  int a,b,c = 1;
a = b = c = 1;
*/
/*#include<stdio.h>
//valid
int main() {

int a = 22;                 
int b = a;                 
int c = b + 1;              
int d = 1,e;                

int a,b,c;          
a = b = c = 1;

// invalid
int oldage = 22;
int newage = oldage + years;

int x = y = z = 4;

return 0;
}*/

/*arithmetic instructions
    a           +,-,*,/,%         b
operand 1       operator        operand 2

note- single variable on the LHS
*/
/*#include<stdio.h>
int main() {
    int a = 1, b = 2;
    int sum = a + b;
    int multiply = a * b;
    //note single variable in LHS not two variable
    int x, y = a * b;
    return 0;
}*/
/*arithmetic instructions
valid                   invalid
a = b + c               b + c = a
a = b * c               a = bc
a = b/c                 a = b^c

note pow(x,y) for x to the power y
*/
/*#include<stdio.h>
#include<math.h>    // math formula use to #include<math.h>
int main() {
    //valid
    int b,c;
    b = c = 1;
    int a = b + c;
    int power = pow(b,c);
    printf("%d",power);

    //invalid
    b + c = a
    a = bc
    a = b^c
    return 0;
}*/

/*arithmetic instructions 
modular operator %
returns remainder for int
3 % 2 = 1   -3 % 2 = -1
*/
/*#include<stdio.h>
#include<math.h>
int main() {
printf("%d \n", 16%10);    // modular use only int data
printf("%d \n", -8%3);
//printf("%d", 1.6%1.0);  // not in float data

return 0;
}*/

/*arithmetic instructions
type conversion 
                       output
int     op      int     int
2       *       2       4
int     op      float   float
2.0     *       2       4.0
float   op      float   float
2.0     *       2.0     4.0
*/
/*#include<stdio.h>
#include<math.h>
int main() { 
    printf("%d \n", 2*2);
    printf("%f \n", 2*2.0);
    printf("%f \n", 2.0*2.0);
    printf("%d \n", 3/2);
    printf("%f \n",3.0/2);

    return 0;
    }*/
   /*practice Qs 3 solve: int a = 1.999999; 
   */
/*#include<stdio.h>
#include<math.h>
int main() { 
    int a = (int) 1.999999; //coder converter compiler force fully converted 
    printf("%d \n", a);
    return 0;
    }*/
   /*arithmetic instructions
   operator procedence  IMPOTANT rule to follow BODMAS
   1ST piyorty  *,/,%       x = 4 + 9*10
                            EX: 9*10+4 = 94 ans x = 94
        do not use this case: 4+9=13*10=130 wrong way   
   
   2nd piyority +,-
   
   assignment =             x = 4*3/6*2
   */     
  /*#include<stdio.h>
  #include<math.h>
  int main() {
    int a = 4 + 9 * 10;
    int b = 4*3/6*2;
    printf("%d \n", a);
    printf("%d \n", b);

    return 0;
  } */
 /*arithmetic instructions
 associativity (for same procedence)
left to right
x = 4*3/6*2 ex:4*3=12/6 2*2=4 barakit form x=(4*3)/6)*2 = 4
practice Qs 4
a.5*2-2*3   ex.5*2=10,2*3=6, ans 10-6=4
b.5*2/2*3   ex. 5*2=10/2=5*3=15
c.5*(2/2)*3 ex. 5*(1)*3,5*3=15
d.5+2/2*3   ex. 5+(2/2)*3 =5+(1*3) =5+3=8*/ 

/* #include<stdio.h>
#include<math.h>
int main() {
    int a = 4*3/6*2;
    int b = 5*2-3*2;
    int c = 5*2/2*3;
    int d = 5*(2/2)*3;
    int e = 5+2/2*3;
    printf("%d \n", a);
    printf("%d \n",b);  //b.5*2-2*3   ex.5*2=10,2*3=6, ans 10-6=4
    printf("%d \n",c);  //c.5*2/2*3   ex. 5*2=10/2=5*3=15
    printf("%d \n", d); //d.5*(2/2)*3 ex. 5*(1)*3,5*3=15
    printf("%d \n", e); //e.5+2/2*3   ex. 5+(2/2)*3 =5+(1*3) =5+3=8
    
    return 0;
}*/
/*instructions
control instructions
used to determine flow of program
a. sequence control
b. decision control
c. loop control
d. case control

operators
a. arithmetic operators ex. +,-,/,*,%
b. relational operators ex. ==,>=,<,<=,!=   ex output ans true means 1 false means 0
c. logical operators
d. betwise operators
e. assigment operators
f. ternary operator ex.condictionary work
*/
/*#include<stdio.h>
#include<math.h>
int main() {
    //==(equal to) note.when two value equal return 1, 
    // not value equal return 0 //ex. true print 1 (2,3,4,5,6,7,-1,-5)
    //ex.false print 0
    printf("%d \n", 4 == 3);    //ex.false print 0
    printf("%d \n", 4 == 4);    //ex. true print 1 (2,3,4,5,6,7,-1,-5)
    printf("%d \n", 4 == 3);    //ex.false print 0
    //>,>=// ex. 3>4=0,4>3=1,4>4=0,4>=4=4
    printf("%d \n", 4>3);   // ex. 3>4=0,4>3=1,4>4=0,4>=4=4
    printf("%d \n", 4>=4);
    printf("%d \n", 3>4);
    printf("%d \n", 3>3);
    printf("%d \n", 3>=3);
    //<,<=ex.ex. 3<=3=1,3<3=0,4<3=0,4<5=1
    printf("%d \n", 3<=3);
    printf("%d \n", 3<3);
    printf("%d \n", 4<3);
    printf("%d \n", 4<5);
    // !=(not equal to) note. when two value equal return 0, 
    //not two value equal return 1
    //4!=4=0,4==4=1,4!=3=0,4==3=0 
    printf("%d \n", 4!=4);
    printf("%d \n", 4==4);
    printf("%d \n", 4!=3);
    printf("%d \n", 4==3);
 return 0;
}*/


/*operators
logical operators
&&  AND note.all the value is true then return 1, one is true second is false return is 0,4>3 && 5>2=1,4>3 && 4>5=0. 
ex.(4>3)&&(2>5) ans.4>3=1,2>5=0

&& table
1   2   output
T   T   T
T   F   F
F   T   F
F   F   f

||  OR  note.all true value return 1,one not true but one is true return 1.

|| OR table
1   2   output
T   T   T
T   F   T
F   T   T
F   F   F

!   NOT note. true value is false,false value is true
ex. !(3>4)=1, !(5>1)=0
*/
/*#include<stdio.h>
#include<math.h>
int main() {
    // && ex.Tvalue && Tvalue=1, Tvalue && fvalue=0
    // 4>3 && 2>5=0, 4>3 && 3>2=1
    printf("%d \n",4>3 && 2>5);
    printf("%d \n",4>3 && 3>2);
    
    // || OR note.ex.Tvalue && Tvalue=1, Tvalue && fvalue=1
    // 3>4 || 5>2=1, 3>5 || 2>1
    printf("%d \n",3>4 || 5>2);
    printf("%d \n", 3>5 || 2>1);

    // ! NOT note. true value is false,false value is true
// ex. !(3>4)=1, !(5>1)=0
    printf("%d \n", !(5>1));
    printf("%d \n", !(5>1) && (3>4));
    return 0;
}*/
/*operator precendence
priority    operator
1               !
2           *,/,%
3            +,-
4           <,<=,>,>=
5            ==,!=
6               &&
7               ||
8               =

operators 
assignment operators
=,  note. a=b ki value a main, e=f+g+h ki value e main.
+=, note. short hand operators ex.a=a+b write to a += b
-=, 
*=, 
/=, 
%=
*/
/*#include<stdio.h>
#include<math.h>
int main() {
    int a = 2;
    int b = 3;
    
    int c = 2;
    int d = 3;

    int e = 2;
    int f = 3;

    int g = 2;
    int h = 3;

    a += b;
    c -= d;
    e *= f;
    g /= h;
    printf("%d \n", a);
    printf("%d \n", c);
    printf("%d \n", e);
    printf("%d \n", g);

    return 0;
}*/

/*practice Qs 5.a. write a program to cheak if a is divisible by 2 or not.
ex.x =5,6,10    4/2=0, 10/5=0   x/2=0 divide, x/2=01,-1,-5,a (not divisible)
 */
// divisible by 2 true 1, not divisible by 2 false 0
/*#include<stdio.h>
#include<math.h>
int main() {
    int a;
    int b;
    printf("enter number is a : ");
    scanf("%d", &a);    // input number 3,5,7,9,11 etc. not divisible by 2 
    printf("%d", a % 2 == 0);// input number divisible by 2 number 2,4,6,8,10 etc. 
    return 0;
}*/

/*practice Qs 6 a.write a program to check if a is odd or even.
*/
// odd return 0 even return 1
/*#include<stdio.h>
#include<math.h>
int main() {
    int a = 2;
    printf("enter number is a  : ");
    scanf("%d", &a);
    printf("%d \n", a % 2 == 0);
    return 0;
}*/
/*practice Qs 7. are the following valid or not?
a. int a = 8^8          valid
b. int x; int y = x;    valid
c. int x, y=x;          not valid
d. char star = '**';    not valid
*/
/*#include<stdio.h>
#include<math.h>
int main() {
    int a = 8^8; // valid
    int x; int y = x; // valid
    int x, y = x; // invalid
    char stars = '**'; // not two charactar  valid one charactar into the upper commas

    
    return 0;
}*/
/*practice Qs 8. print 1 (true) 0(false) for following statements:
a. if it's sunday & it's snowing -> true*/
/*#include<stdio.h>
#include<math.h>
int main() {
int issunday = 1;
int issnowing = 0;
printf("%d \n", issunday && issnowing);

return 0;
}*/

//b. if it's monday or it's raining -> true
/*#include<stdio.h>
#include<math.h>
int main() {
int ismonday = 1;
int israining = 0;
printf("%d \n", ismonday || israining);

return 0;
}*/

/*c. if a number is greater than 9 & less than 100 -> true (2 digit number)*/
/*#include<stdio.h>
#include<math.h>
int main() {
int x;
printf("enter number : ");
scanf("%d", &x);
printf("%d \n", x > 9 && x < 100);

return 0;
}*/

/*                      homework set
a. write a program to print the average of 3.
b. write a program th check if given charactar is digit or not.
c. write a program to print the smallest number.

                    chapter 3 conditional statements
 conditional statements
                    types
if-else                         switch

if--else
if(condition) {        note.if compalsary // if check condition is true when print. what you want.
//do something if true
}
else {                 note.else optional // else when if condition is false when print what you want.
//do something if false
}*/
/*#include<stdio.h>
#include<math.h>
int main() {
int age;
printf("enter age : ");
scanf("%d", &age);

if(age > 18) {  // first if check condition true do something if true
printf("adult \n"); // if multiple statements in one block print when is true 
printf("they can drive \n");
printf("they can vote \n");
}                           // {}corli brace most important for multiple statements 
else {            // second if condition is false else do something if false
printf("teen \n");
}

printf("thank you");   // note. not compalsary to write // not the part of statement always print 
return 0;
}*/

/*else if
if(condition 1) {
//do something if true
}
else if(condition 2){
//do something if 1 st is false & 2nd is true
}

flow of use of else if
if= check condition is true but not true
else if= then check also this statement are wrong. (note this statement is true not  check upcoming statements)
else if=then check this statement 
else=when all statement are wrong when do something if all stetement are false

if flow use
if= check statement is true/false do something if true
if= (note. not check previous statement false/true) if do check condition is true when do something if true
if= */
/*#include<stdio.h>
#include<math.h>
int main() {
    int age;
    printf("enter age is : ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("adult \n", age); //check 1 statement is true when do something is true
    }
    else if(age > 13 && age < 18) { // check 2nd statement is true do something is true
        printf("teenager \n");
    }
    else {
        printf("child"); // check all statement are wrong when do something when all statement wrong
    }
    return 0;
}*/

/*conditional operators
Ternary 
condition ? dosomething if true : dosomething if false;
singal line condition check
?=check condition if is true 
:=dosomething if true
;=if condition is false dosomething if false */
/*#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("enter age is : ");
    scanf("%d", &age);

// note. condition check in one line
    age >= 18 ? printf("adult \n") : printf("not adult");
    return 0;
}*/

/*conditional operators switch is button type ex.light on/off

switch(number) {
case c1: // do something (note. number & charactor match with case 1,2,3 do something) 
break;
case c2: // do something    // write case 1:, case 2: case 3: & case 'a':, case 'b': etc.
break;  // all case end then use break; is most important use for case then out 
default: // do something // do someting if all condition is false
}
*/
#include<stdio.h>
#include<math.h>
int main() {
    int day; // 1 mon; 2 tues; 3 wed;/m- mon; t- tues etc.
    printf("enter day(1-7) : ");
    //for use int type data scanf("%d", &day);
    scanf("%s", &day);
    

    /*switch(day) {
        case 1: printf("monday \n");
        break;                        // break is button on/off if not use break mean on the button accute where not use break;
        case 2: printf("tuesday \n");
        break;
        case 3: printf("wenesday \n");
        break;
        case 4: printf("thusday \n");
        break;
        case 5: printf("friday \n");
        break;
        case 6: printf("saturday \n");
        break;
        case 7: printf("sunday \n");
        break;
        default : printf("not a day \n");*/

// charactour vice 'm', 't', 'w' etc.
switch(day) {
        case 'm': printf("monday \n");
        break;                        // break is button on/off if not use break mean on the button accute where not use break;
        case 't': printf("tuesday \n");
        break;
        case 'w': printf("wenesday \n");
        break;
        case 'T': printf("thusday \n");
        break;
        case 'f': printf("friday \n");
        break;
        case 's': printf("saturday \n");
        break;
        case 'S': printf("sunday \n");
        break;
        default : printf("not a day \n");
    }
    return 0;
}
// varibles is the name of a memoryy location 
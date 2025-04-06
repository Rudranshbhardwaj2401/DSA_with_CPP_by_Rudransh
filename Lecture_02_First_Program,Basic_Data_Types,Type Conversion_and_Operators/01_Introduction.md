# First Program
We will write our first program to print some text on the terminal.We will write our first program to print some text on the terminal.  
# Data Types
We will see some Basic datatypes and their size on system  
    bool              1byte or 8bits (but needs only 1bit)  
    char              1byte or 8bits  
    int               4byte or 32bits  
    int s = sizeof()  4byte or 32bits (as it is int)  
    float             4byte or 32bits  
    double            8byte or 64bits  
# Type Conversion
We will see how Data type get changes  
int a = 'b';  // b will change to int type (b's ASCII Value in int is 98)  
char ch = 99; // 99 will change to char type (99 is the ASCII Value of c) 
      
Any data type of size n bits can hold numbers upto (2^n)-1  
Example Int size is 32 bits  
It can Hold (2^32)-1=255 numbers  
Say 0 to 255(unsigned) or -128 to 127(signed)  
So If we try to Store 256,257,258 or bigger number it will not hold it  
So it will modify the result like  
256-0,257-1,258-2 and so on   
# How Negative Number is Stored 
5= 000...101  
-5 is R's Compliement of 5  
R-1's Compliment is just bits reversal = 111...010  
-5= R's Compliment is R-1's + 1 = 0111...011  
# Arithmetic Operators
+ Addition  
- Subtraction  
* Multiplication  
/ Division  
% Modulus (returns remainder)  
# Relational Operators
== Equal to
!= Not Equal to
<  Less Than
>  Greater Than
<= Less Than or Equal To
>= Greater Than or Equal To
# Logical Operators
&& Logical And  
|| Logical Or  
!  Logical Not  
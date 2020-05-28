# _STRING_
## ASCII Code
For every letter or character there is code.. refer to 
[AboutASCiiCode](https://www.ascii-code.com/)

*Total ASCII Codes: 0-127
1 code consists 7-bits digits..*
## UNICODES
*Unicodes are for all the languages(NATURAL LANGUAGE)... ASCII code is subset of unicode.. it is represent in 2 bytes... consisting 16-bits.*

*MoreInformation:-*[Unicode](https://home.unicode.org/)


**String is the set of Character**
String literal(or string Constant) is a sequence of characters enclosed with double quotes.
%s is a placeholder in C.
Double Quotes are important for string Literals. String literals are stored as an array of characters.

‘\0’ or null character indicates the end of the string. ‘\0’ character must not be confused with ‘0’ character. Both have different ASCII codes… ‘\0’ has the code 0 while ‘0’ has the code 48.
In C++ and C, compiler treats a string as a pointer to the first character.
So, in cin/cout, a pointer to the first character of sting is passed.  Both cin and cout functions expects a character pointer(char*) as an argument.
cout<<”Nepal”;
Passing “Nepal” implies passing the pointer to letter ‘N’.
~~~
char *ptr = “Hello Nepal!”
~~~
ptr contains the address of the first character of the string.
String cannot be modified, as it causes undefined behaviour. It is because string literals are string constants, they have been allocated a read only memory, so cant be altered.
Also Character pointer itself has been allocated read-write memory, so the same pointer can point to some other string literal.

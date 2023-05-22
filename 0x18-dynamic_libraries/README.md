## 0x18. C - Dynamic libraries
## This is an ALX project on dynamic libraries

* A dynamic library, also known as a shared library, is a separate file containing compiled code that can be linked with a program at runtime. It is a type of library that provides functions, symbols, and resources that can be used by multiple programs simultaneously.

# Difference between Static and Dynamic Libraries
* In C programming, static and dynamic libraries are two different ways of organizing and distributing reusable code. Here's an explanation of the differences between static and dynamic libraries:

# Static Libraries:

A static library is a collection of object code that is linked with a program at compile-time and becomes part of the executable file.
When you compile a program that uses a static library, the necessary code from the library is copied into the final executable file.
Static libraries are physically merged with the program, so the resulting executable does not depend on the presence of the library at runtime.
This means that the executable can be distributed and run on any system without requiring the library to be separately installed.
The main advantage of static libraries is that they provide a self-contained executable, making it easier to distribute and deploy applications.
Dynamic Libraries:

A dynamic library is a separate file containing compiled code that is linked with a program at runtime.
Dynamic libraries are not directly merged with the program but are loaded and linked during the program's execution.
When you compile a program that uses a dynamic library, the necessary information about the library's functions and symbols is included in the executable, but the actual library file is not copied into the executable.
At runtime, the operating system or runtime environment locates and loads the dynamic library into memory, and the program can then access the functions and symbols provided by the library.
Dynamic libraries allow multiple programs to share the same library file, reducing the overall disk space required and enabling easier updates of the shared code.
However, dynamic libraries require the library file to be present and accessible at runtime, or the program will fail to run if the library is missing or incompatible.
In summary, static libraries are linked directly into the executable file, while dynamic libraries are loaded at runtime. Static libraries provide self-contained executables, while dynamic libraries allow code sharing and easier updates but require the library to be present at runtime. The choice between static and dynamic libraries depends on factors such as distribution requirements, code sharing needs, and system compatibility considerations.

## Tasks
0. A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing all the functions listed below:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

1. Without libraries what have we? We have no past and no future
mandatory
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

2. Let's call C functions from Python
#advanced
I know, you’re missing C when coding in Python. So let’s fix that!

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.

3. Code injection: Win the Giga Millions!
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
The system is an Linux Ubuntu 16.04
The server has internet access
Our mole will be only able to run two commands from a shell script, without being detected by MSS
Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
Our mole has only the authorization to upload one file on the server. It will be your shell script
Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
MSS will use the same terminal and session than our mole
Before running the gm program, MSS always check the content of the directory
MSS always exit after running the program gm
TL;DR; This is what is going to happen

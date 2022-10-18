Welcome to 0x07-pointers_arrays_strings, in today task, i worked on more pointers questions in c programming
0. 
Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s

1. Write a function that copies memory area.

Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest

 2. Write a function that locates a character in a string.

Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

3. Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept

4. Write a function that searches a string for any of a set of bytes.

Prototype: char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

5. Write a function that locates a substring.

Prototype: char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

6. Write a function that prints the chessboard.

Prototype: void print_chessboard(char (*a)[8]);

7. Write a function that prints the sum of the two diagonals of a square matrix of integers.

Prototype: void print_diagsums(int *a, int size);
Format: see example
You are allowed to use the standard library
Note that in the following example we are casting an int[][] into an int*.
This is not something you should do.
The goal here is to make sure you understand how an array of array is stored in memory.

8. Write a function that sets the value of a pointer to a char.

Prototype: void set_string(char **s, char *to);

9. Create a file that contains the password for the crackme2 executable.
 My primary goal of hacking was the intellectual curiosity, the seduction of adventure
101-crackme_password - a file that contains the password for the crackme2 executable.

Steps to Get the Password
a. Clone the file - crackme2

b. Install openssl,
Type the command: sudo apt install libssl-dev

c. Edit the source list
Type the command: sudo nano /etc/apt/sources.list
Add this to the file: deb http://security.ubuntu.com/ubuntu xenial-security main
Exit nano

Type the command: sudo apt update
Type the command: sudo apt install libssl1.0.0

d. In the 0x06.c directory
First run the file: $ ./crackme2
Note the response

e. Test the file type
Do: $ file crackme2
Note the response

f. Do ltrace on your terminal
Do: $ ltrace ./crackme2
Note the last strings like this: strncmp("_=/usr/bin/ltrace", "jennieandjayloveasm=", 20) = -11
Copy this string: jennieandjayloveasm

g. Do this next on your terminal
$ export jennieandjayloveasm=hey
ltrace ./crackme2
Note the response: strcmp("d8578edf8458ce06fbc5bb76a58c5ca4"…, "6057f13c496ecf7fd777ceb9e79ae285"…) = 46
Copy the md5 hash: d8578edf8458ce06fbc5bb76a58c5ca4

h. Go to this website to convert the md5 hash to string: md5 site
the result is the abc123.

i. Now enter the following command your terminal
echo -n 'abc123' > 101-crackme_password
chmod u+x 101-crackme_password

j. Push to your github


# Project IV - Message Logger – Multiple Files

- Write a program that splits the code from Project III into multiple (source and header) files. Additional requirements:
	- Split the code into multiple header and source files.
	- Put the MyLogger class declaration inside a mylogger.h header file. Implement header guards.
	- Put the enum and a constant inside a mylogger.h header file. Implement header guards
	- Put the MyLogger class definition inside a mylogger.cpp source file. Include the mylogger.h header file into a mylogger.cpp source file.
	- Put the function main inside the source.cpp source file. Include the mylogger.h header file into a source.cpp source file.
	- Include additional header files where appropriate.
	- Wrap the code inside mylogger.h and mylogger.cpp into a namespace nm.
	- Compile all the source files and run the program.

---

- Now our project source code is broken up into multiple header and source files. 
- We keep the declarations inside the mylogger.h header file, and we keep the class definitions inside the mylogger.cpp file. Our main program is located inside the source.cpp file. We include the mylogger.h header in both source files and compile and run our program.
- We should get into a good habit of separating declarations and definitions to multiple header and source files.
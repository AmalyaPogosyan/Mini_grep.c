# Mini_grep.c
Mini grep
Write a program in C that mimics the basic functionality of the grep command-line utility. Your program should accept two command-line arguments: a search pattern (string) and a file name. It should then search through the specified file and print out all lines that contain the given search pattern. 
Your program should handle command-line arguments using argc and argv in the main function. 
You can assume that the file specified exists and is readable.
Your program should read the file line by line and search for the given pattern in each line. If a line contains the search pattern, your program should print that line to the standard output.
Your search should be case-sensitive by default, but you can provide an optional flag to make it case-insensitive (for example, -i or --ignore-case).
Your program should be well-commented and readable. Test your program with different files and search patterns to ensure its correctness and robustness.

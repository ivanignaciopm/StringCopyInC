
# String Copy Program

This is a simple C program that demonstrates how to copy a string from one variable to another using a custom function. This script is privided with the intention of get better understanding of how C works with memory and pointers. 

## Description

The program includes the following main components:

1. A `copy` function that takes two character pointers (`dst` and `src`) and copies the content from `src` to `dst`. It does this by dereferencing and copying the contents of the `src `memory location into the  `dst `dereferenced memory location.
2. A `main` function that initializes a source string, defines a destination string, and uses the `copy` function to copy the content from the source string to the destination string. Finally, it prints the copied string.

## Compilation and Execution

To compile and run this program, follow these steps:

1. Save the code in a file named `copy_string.c`.
2. Open a terminal or command prompt.
3. Navigate to the directory where you saved the file.
4. Compile the program using the GCC compiler with the following command:

   ```sh
   gcc -o copy_string copy_string.c
   ```
5. Run the compiled program with the following command:

   ```sh
   ./copy_string
   ```

You should see the output:

```
This string has been successfully copied!
```

## Notes

- Ensure that you have GCC installed on your system. You can check this by running `gcc --version` in your terminal.
- The `copy` function manually copies each character from the source string to the destination string until it encounters the null terminator (`'\0'`), which marks the end of the string.
- The destination string (`dstString`) is dynamically allocated based on the length of the source string.

# Palindrome Checker in C

This simple C program checks if a given string is a palindrome. It reverses the input string and compares it with the original string to determine if they are the same.

## Usage

1. **Clone the Repository**: 
    ```
    git clone https://github.com/yourusername/palindrome-checker.git
    ```

2. **Navigate to the Directory**: 
    ```
    cd palindrome-checker
    ```

3. **Compile the Code**:
    ```
    gcc palindrome.c -o palindrome
    ```

4. **Run the Program**:
    ```
    ./palindrome
    ```

5. **Enter a String**:
    After running the program, you'll be prompted to enter a string. Input the string and press Enter.

6. **Check the Result**:
    The program will output the reversed string and indicate whether the input string is a palindrome or not.

## Example
Enter String Here: radar

Reversed String: radar

It Is a palindrome


## Notes

- The maximum length of the input string is set to 10 characters in the provided code. You can modify the `char str[10]` array size in the `main` function to accommodate longer strings if needed.
- Make sure to handle input validation for longer strings to prevent buffer overflow.
- This program considers only alphanumeric characters and ignores any other characters.
- The comparison is case-sensitive, i.e., "RadAr" would not be considered a palindrome.


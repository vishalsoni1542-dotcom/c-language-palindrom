# 🔤 Palindrome Checker in C

## 📌 Project Description

The Palindrome Checker is a simple C language project that checks whether a given string is a palindrome or not.

A palindrome is a word or string that reads the same forward and backward.

**Examples:**

* `madam` → Palindrome
* `level` → Palindrome
* `hello` → Not a Palindrome

This project helps beginners understand strings, string length, arrays, loops, and conditional statements in C.

## ✨ Features

* Takes a string as input from the user.
* Calculates the length of the string.
* Compares characters from the beginning and end.
* Checks whether the string is a palindrome.
* Displays the result: Palindrome or Not a Palindrome.

## 🛠️ Technologies Used

* **Programming Language:** C
* **Header Files:** `stdio.h`, `string.h`
* **Concepts:** Arrays, Strings, Loops, If-Else, `strlen()`

## 📂 Project Structure

```text
PALINDROM-CHECKER/
├── main.c
├── output.png
└── README.md
```

## ⚙️ How It Works

1. The program asks the user to enter a string.
2. The `scanf()` function takes the string as input.
3. The `strlen()` function calculates the string length.
4. A `for` loop compares the first character with the last character, the second with the second-last, and so on.
5. If any characters do not match, the program prints "Not a palindrome".
6. If all characters match, the program prints "Palindrome".

## 🖥️ Sample Output

### Example 1: Palindrome

```text
Enter a string: madam
Palindrome
```

### Example 2: Not a Palindrome

```text
Enter a string: hello
Not a palindrome
```

## 🎯 Learning Outcomes

After completing this project, you will understand:

* How to declare and use character arrays.
* How to take string input in C.
* How to find the length of a string using `strlen()`.
* How to use loops for character comparison.
* How to check conditions using `if` statements.

## 🚀 How to Run the Project

1. Install a C compiler such as GCC.
2. Open the project in VS Code or another C editor.
3. Save the source code as `palindrome.c`.
4. Compile the program:

```bash
gcc palindrome.c -o palindrome
```

5. Run the program:

**Windows:**

```bash
palindrome.exe
```

**Linux / macOS:**

```bash
./palindrome
```

## 👨‍💻 Author

**VISHAL CHANCHLANI**


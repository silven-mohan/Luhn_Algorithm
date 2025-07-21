# Luhn_Algorithm
This C program validates a 16-digit number using the Luhn algorithm, a simple checksum formula used to validate identification numbers such as credit card or debit card numbers.

## ✅ Features
Validates input length (must be exactly 16 digits)

Ensures all characters are numeric

Implements Luhn's checksum logic:

Doubles every second digit from the left (starting at index 0)

Subtracts 9 from any result greater than 9

Sums the remaining digits

Prints whether the number is valid or invalid as per Luhn’s algorithm

## 📌 How It Works
Input: The user is prompted to enter a 16-digit number.

Validation:

Checks if the number has exactly 16 digits

Rejects if any non-numeric character is present

Processing:

Doubles digits at even indices (0, 2, 4, ..., 14), adjusts if >9

Adds digits at odd indices (1, 3, ..., 15) directly

Result:

If total sum is divisible by 10, the number is considered valid

Otherwise, it is invalid.

----

## 🛠 Example
```c
Enter the number: 4539578763621486
4539578763621486 passes Luhn's Algorithm.
```

## 📂 Function Definition
```c
int Luhn_Algorithm();
```

## 📚 Dependencies
<stdio.h>

<string.h>

<ctype.h>

## 🧠 Why Use This?
This is a useful utility for learning how credit card validation works under the hood, practicing digit manipulation, and understanding input validation techniques in C.

----

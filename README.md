# Caesar Cipher with Random Salt

## Project Overview
This project implements a **Caesar Cipher** with added **random salt** to increase encryption variability.  
Each character in the input string is shifted by a fixed key plus a randomly generated salt, making the output different every time even for the same input.

- Supports both uppercase and lowercase English letters.
- Non-alphabetic characters remain unchanged.
- Outputs encrypted text as a single string.

---

## How It Works
 **Character Processing:**  
   For each character in the input:
   - A random **salt** between 0 and 25 is generated.
   - The character is converted to an **alphabet index** (0-25) based on its case:
     - `'A'` → 0, `'B'` → 1, ..., `'Z'` → 25  
     - `'a'` → 0, `'b'` → 1, ..., `'z'` → 25
   - The index is incremented by the **fixed key** plus the **salt**.
   - The result is wrapped around using **modulo 26** to stay within the alphabet.
   - The new index is converted back to a character.
   -input : "HelloWorld"
   -output : "LqvpdXazrl"

---

## Features
- Randomized encryption for increased security.
- Simple implementation, easy to understand and modify.
- Handles both uppercase and lowercase letters separately.

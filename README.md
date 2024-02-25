## Hangman C++

This repository contains a simple C++ implementation of the classic Hangman game. The program loads a list of words from a file, selects a random word for the player to guess, and allows the player to make guesses to reveal the hidden word. The player has a limited number of tries before the game ends.

### Features

- **Word Selection:** Loads a list of words from a file and selects a random word for the player to guess.
- **Guessing Mechanism:** Allows the player to make guesses to reveal the hidden word.
- **Hangman Display:** Visual representation of the hangman's gallows and status updates as the player makes guesses.
- **Game Over:** Ends the game when the player correctly guesses the word or runs out of tries.

### Dependencies

- `<iostream>`: Input and output operations.
- `<fstream>`: File input/output operations.
- `<chrono>`: Provides time-related functionality.
- `<thread>`: Supports multi-threading for time delay.
- `<cstdlib>` and `<ctime>`: For random number generation and seeding.
- `<vector>` and `<string>`: Data structures for word storage and manipulation.

### Usage

1. **Compilation:**
   - Compile the program using a C++ compiler such as g++:
     ```
     g++ main.cpp -o hangman_cpp
     ```

2. **Execution:**
   - Run the compiled binary to start the Hangman game:
     ```
     ./hangman_cpp
     ```

3. **Gameplay:**
   - Guess letters to reveal the hidden word.
   - Each incorrect guess brings the player closer to being hanged.
   - Win by correctly guessing the word before running out of tries.

### Author

Sarthak GC

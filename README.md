## Hangman C++
This repository contains a simple Hangman game implemented in C++. The game randomly selects a word from a provided list and allows players to guess letters to uncover the hidden word. Players have a limited number of tries before the hangman is fully drawn.

### Features

- **Word Selection:** The game selects a random word from a provided list of over 172,000 words, ensuring a unique game experience each time.
- **Guessing Mechanism:** Allows the player to make guesses to reveal the hidden word.
- **Hangman Display:** Visual representation of the hangman's gallows and status updates as the player makes guesses.
- **Game Over:** Ends the game when the player correctly guesses the word or runs out of tries.

### Files

- **hangman.cpp:** The main source file containing the Hangman game logic.
- **hangman_header.h:** The header file containing necessary include directives and function prototypes.

### Input File

- **words.txt:** A text file containing over 172,000 words, ensuring a diverse selection of words for the game.

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

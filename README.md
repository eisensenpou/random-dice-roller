# Random Dice Roller

This is a simple C++ program that simulates rolling a six-sided dice. Every time you roll, it generates a random number between 1 and 6.

## Features
- Generates a random number between 1 and 6.
- Provides a simple menu interface.
- Uses `srand(time(0))` to ensure different results on each run.

## How to Run
### 1. Compile the program using a C++ compiler:
   ```sh
   g++ random_dice_roller.cpp -o dice_roller
   ```
### 2. Run the executable:
  ```sh
  ./dice_roller
  ```
### 3. Follow the on-screen menu:

Press ```1``` to roll the dice.

Press ```2``` to exit.

## Example Output
```txt
********** Dice roller **********
This program generates a random number between 1 and 6.
1. Roll the dice
2. Exit
Enter your choice: 1
You rolled: 4
```

## Requirements
A C++ compiler (GCC, Clang, or MSVC).

Compatible with Windows, macOS, and Linux.

## Contributions
Feel free to fork this repository and improve the code. Pull requests are welcome!

## License
This project is open-source and available under the MIT License.


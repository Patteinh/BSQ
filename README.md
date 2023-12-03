# BSQ 🟩

Welcome to the **BSQ**.

This project tests your ability to find the largest square on a board while navigating through obstacles.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Name:** bsq

## Project Overview 🔎

Your task is to develop a program that can analyze a given board and determine the largest possible square that can be formed without including any obstacles.

### File Format

- The first line of the file contains the number of lines in the board.
- The board is represented using `.` (empty space) and `o` (obstacle).
- All lines, except the first, must be of the same length and end with a newline (`'\n'`).

### Output

- Your program should print the board with `x` marking the largest square found.
- If multiple solutions exist, the square closest to the top-left corner should be chosen.

### Constraints

- The program only needs to read from given files.
- Writing permissions on the files are not required.

## Authorized Functions

- System calls: `open`, `read`, `write`, `close`, `malloc`, `free`, `stat`.

## Examples

Input:
```
9
...........................
....o......................
............o..............
...........................
....o......................
..............o............
...........................
......o..............o.....
..o.......o................
```

Output:
```
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxxo...............
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxx...o............
.....xxxxxxx................
......o...............o.....
..o.......o.................
```

*Note: The square may not appear perfectly square visually, but it is the largest possible square that can be formed without obstacles.*

## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using `make`.
3. Run the program: `./bsq [path_to_file]`.
4. For detailed guidelines, refer to `BSQ.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.

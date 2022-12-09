# Advent of Code 2022
My first [Advent of Code](https://adventofcode.com/2022) with solutions written in C++

## Why
I'm doing this to improve my C++ knowledge.

I'll try to code using these rules:
- comment the new things I discover
- use OOP if possible
- find the fastest algorithm
- [naming variables self-explanatory](https://youtu.be/-J3wNP6u5YU)
- [don't nest my code excessively](https://youtu.be/CFRhGnuXG-4)

The code will be redundant because I will keep all the ways I did it.

## How
### Script
I use a [script](/create_day.sh) to create a new directory for each day with inside a .cc file that already has a [template](/template.cc) and an input.txt file where to put the input puzzle:
```txt
|____day01
| |____day01.cc
| |____input.txt
|____day02
| |____day02.cc
| |____input.txt
|____day03
| |____day03.cc
| |____input.txt
:
```
For use the script digit on terminal `./create_day <day>`, before this remember to make `script.sh` executable with the command: `chmod +x create_day.sh`.

### `#include <bit/stdc++.h>`
I use a non-standard library from the [GNU Compiler Collection](https://gcc.gnu.org/), called `<bit/stdc++.h>`. It is basically a header file that includes every standard library.<br>
I know that it use a lot in competitive programming and it's useful because it avoids adding new header files every time. Of course outside this range it's not a good practice and increases compile time.<br>
So to use this you need to use GNU Compiler Collection. For Mac users compiling with `g++` will it use clang, to use GNU you need `g++-12`, you can create alias ( `alias g++ = "g++-12"` ) or simply use [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) in VSCode and modify settings: `"code-runner.executorMap": { "cpp": "cd $dir && g++-12 $fileName && $dir/a.out", }`

### Test your code: 
I know some people create a `test.txt` to test the code before submitting it with the example in the text of the puzzle, thus also knowing the expected result (the first throttle for an incorrect submission is 1 minute, and it gets even longer if you mess up again). I think it's a good idea to be faster and not waste time but I won't :point_down:

## Fuck leaderboard
I'm slow, I like to understand things well, I don't get up at 6 (but probably I won't even make them the same day), and rather than finish the puzzles i didn't do i'm writing the README

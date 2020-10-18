# c_debug_print
Make life easier

## What is c_debug_print?
- A series of macros that may or may not make your life easier.
- A series of macros that print out info in `stderr` stream.


## What is included?
- `DEBUG_PRINT`: print whatever you want with DEBUG_PRINT
- `ENTER_FUNC`: manually call it whenever entering a function
- `LEAVE_FUNC`: manually call it whenever leaving a function


## How to use?
1. Include `debug_print.h` in whatever file you want to debug
2. Add printing statements in your file
3. Compile program with `-DDEBUG` flag
4. Run and see results


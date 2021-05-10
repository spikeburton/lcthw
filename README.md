# Learn C The Hard Way

## GDB Tricks

`gdb --args [PROGRAM]`

`gdb --batch --ex run --ex bt --ex q --args [PROGRAM] [ARGS]`

## C Syntax

### Execution Keywords

| Keyword | Description |
--- | ---
| `break` | Exit out of a compound statement. |
| `case` | A branch in a switch statement. |
| `continue` | Continue to the top of a loop. |
| `do` | Start a do-while loop. |
| `default` | Default branch in a switch statement. |
| `for` | Start a for loop. |
| `goto` | Jump to a label. |
| `if` | Start an if statement. |
| `return` | Return from a function. |
| `switch` | Start a switch statement. |
| `while` | Start a while loop. |

### Type Keywords

| Keyword | Description |
--- | ---
| `char` | Character data type. |
| `double` | A double floating point data type. |
| `float` | A floating point data type. |
| `int` | An integer data type. |
| `long` | A long integer data type. |
| `short` | A short integer data type. |
| `void` | Declare a data type empty. |
| `union` | Start a union statement. |
| `struct` | Combine variables into a single record. |

### Data Keywords

| Keyword | Description |
--- | ---
| `auto` | Give a local variable a local lifetime. |
| `const` | Make a variable unmodifiable. |
| `enum` | Define a set of int constants. |
| `extern` | Declare an identifier is defined externally. |
| `register` | Declare a variable be stored in a CPU register. |
| `signed` | A signed modifier for integer data types. |
| `sizeof` | Determine the size of data. |
| `static` | Preserve variable value after its scope exits. |
| `typedef` | Create a new type. |
| `unsigned` | An unsigned modifier for integer data types. |
| `volatile` | Declare a variable might be modified elsewhere. |

## Type Sizes

| Type | Description |
--- | ---
| `int8_t` | 8-bit signed integer |
| `uint8_t` | 8-bit unsigned integer |
| `int16_t` | 16-bit signed integer |
| `uint16_t` | 16-bit unsigned integer |
| `int32_t` | 32-bit signed integer |
| `uint32_t` | 32-bit unsigned integer |
| `int64_t` | 64-bit signed integer |
| `uint64_t` | 64-bit unsigned integer |

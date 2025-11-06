# Operators in C++

## Types of Operators

| Operator               | Type               |
|:-----------------------|:------------------:|
| ++, --                 | Unary Operator     |
| +,-,*,/,%              | Arithmetic Operator|
| <, <=< >, >=< == < !=  | Comparison Operator|
| &&, ||, !              | Logical Opeator    |
| &, |, <<, >>, ^        | Bitwise Operator   |
| =, +=, -=, *=, /=, %=  | Assignment Operator|
| ?:                     | Ternary Operator   |

| Operators                                                                 | Description                                                                                          | Associativity     |
|---------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------|-------------------|
| `( )`, `[ ]`, `.`, `->`, `++`, `--`                                       | Parentheses (function call), Brackets (array subscript), Member selection (object/pointer), Postfix increment/decrement (Note 1 & 2) | left-to-right     |
| `++`, `--`, `+`, `-`, `!`, `~`, `(type)`, `*`, `&`, `sizeof`              | Prefix increment/decrement, Unary plus/minus, Logical negation/bitwise complement, Cast, Dereference, Address-of, Sizeof | right-to-left     |
| `*`, `/`, `%`                                                             | Multiplication, Division, Modulus                                                                    | left-to-right     |
| `+`, `-`                                                                  | Addition, Subtraction                                                                                 | left-to-right     |
| `<<`, `>>`                                                                | Bitwise shift left/right                                                                             | left-to-right     |
| `<`, `<=`, `>`, `>=`                                                      | Relational less than/greater than (or equal to)                                                      | left-to-right     |
| `==`, `!=`                                                                | Equality/Inequality                                                                                   | left-to-right     |
| `&`                                                                       | Bitwise AND                                                                                           | left-to-right     |
| `^`                                                                       | Bitwise XOR                                                                                           | left-to-right     |
| `|`                                                                       | Bitwise OR                                                                                            | left-to-right     |
| `&&`                                                                      | Logical AND                                                                                           | left-to-right     |
| `||`                                                                      | Logical OR                                                                                            | left-to-right     |
| `? :`                                                                     | Ternary conditional                                                                                   | right-to-left     |
| `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `&=`, `^=`, `|=`, `<<=`, `>>=`         | Assignment and compound assignment operators                                                          | right-to-left     |
| `,`                                                                       | Comma (separate expressions)                                                                          | left-to-right     |


#### Bitwise Operator
> performs **bit-level calculations** on the operands

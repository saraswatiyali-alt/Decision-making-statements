🔀 Decision-Making Statements in C

Decision-making statements in C are used to control the flow of execution based on specific conditions. They allow a program to execute different blocks of code depending on whether a condition is true or false.

📌 Types of Decision-Making Statements
if statement
if-else statement
else-if ladder
Nested if-else statement
switch statement
Conditional (Ternary) Operator ?:
1. If Statement

The if statement executes a block of code only when the given condition is true.

Syntax
if (condition) {
    // Code executes if condition is true
}

Example
#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("Eligible to vote");
    }

    return 0;
}


Output

Eligible to vote

2. If-Else Statement

The if-else statement executes one block when the condition is true and another block when it is false.

Syntax
if (condition) {
    // True block
} else {
    // False block
}

Example
#include <stdio.h>

int main() {
    int number = 7;

    if (number % 2 == 0) {
        printf("Even number");
    } else {
        printf("Odd number");
    }

    return 0;
}


Output

Odd number

3. Else-If Ladder

The else-if ladder checks multiple conditions in sequence. The first true condition's block executes.

Syntax
if (condition1) {
    // Code block 1
} else if (condition2) {
    // Code block 2
} else if (condition3) {
    // Code block 3
} else {
    // Default block
}

Example
#include <stdio.h>

int main() {
    int marks = 85;

    if (marks >= 90) {
        printf("Grade A");
    } else if (marks >= 80) {
        printf("Grade B");
    } else if (marks >= 70) {
        printf("Grade C");
    } else {
        printf("Needs improvement");
    }

    return 0;
}


Output

Grade B

4. Nested If-Else Statement

A nested if-else statement means placing an if-else statement inside another if or else block.

Syntax
if (condition1) {
    if (condition2) {
        // Code block 1
    } else {
        // Code block 2
    }
} else {
    // Code block 3
}

Example
#include <stdio.h>

int main() {
    int age = 22;
    int hasID = 1;

    if (age >= 18) {
        if (hasID == 1) {
            printf("Entry allowed");
        } else {
            printf("ID required");
        }
    } else {
        printf("Underage");
    }

    return 0;
}


Output

Entry allowed

5. Switch Statement

The switch statement selects one block of code from multiple alternatives based on the value of an expression.

Syntax
switch (expression) {
    case constant1:
        // Code block 1
        break;

    case constant2:
        // Code block 2
        break;

    default:
        // Default block
}

Example
#include <stdio.h>

int main() {
    int day = 2;

    switch (day) {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        default:
            printf("Invalid day");
    }

    return 0;
}


Output

Tuesday


Note: The break statement prevents execution from falling through to the next case. The default block runs when no case matches.

6. Conditional (Ternary) Operator

The ternary operator ?: is a shorthand way to choose between two expressions based on a condition.

Syntax
condition ? expression1 : expression2;

Example
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    int largest = (a > b) ? a : b;

    printf("Largest = %d", largest);

    return 0;
}


Output

Largest = 20

📚 Important Points
Conditions in C are evaluated as true or false. Zero means false, and nonzero means true.
Use if for a single condition.
Use if-else to choose between two alternatives.
Use an else-if ladder to check multiple conditions.
Use nested if-else for dependent conditions.
Use switch when selecting among discrete constant values.
Use the ternary operator for simple conditional expressions.
Use == to compare values and = to assign values.
Curly braces {} group statements into blocks.
The else part is optional in an if statement.
🎯 Conclusion

Decision-making statements are fundamental in C programming. They help developers implement conditions, control program execution, and build logical solutions to real-world problems.# Decision-making-statements

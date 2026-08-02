# Mastering DSA + Competitive Programming in C++

This README is my personal **C++ + DSA + Competitive Programming (CP)** revision guide.

The goal is simple: keep important concepts, patterns, tips, and tricks in one place so that I can quickly revise them whenever needed. Hopefully, it can also help other beginners who are learning C++ and DSA.

> **Tip:** Don't just read the examples. Try to write them yourself and modify them. Coding becomes easier through practice.

---

# 1. Problem-Solving Basics

Before writing code, we need to understand the problem properly.

A good problem-solving process usually looks like this:

```text
Understand the Problem
        ↓
Identify Input & Output
        ↓
Think of Examples
        ↓
Find the Approach
        ↓
Write Pseudo-code
        ↓
Analyze Time & Space Complexity
        ↓
Implement in C++
        ↓
Test with Edge Cases
        ↓
Optimize if Necessary
```

---

## Flowchart

A **flowchart** is a step-by-step diagram that represents the logic of a problem.

It helps us understand what should happen before we start writing actual code.

For example, checking whether a number is even or odd:

```text
       Start
         ↓
    Input number
         ↓
   number % 2 == 0?
      /       \
    Yes        No
     ↓          ↓
   Even        Odd
      \        /
         ↓
        End
```

### Why use flowcharts?

* They make the logic easier to understand.
* They help beginners visualize a problem.
* They can reveal logical mistakes before coding.
* They are useful when solving complex problems.

---

## Pseudo-code

**Pseudo-code** is a simple, human-readable way of describing the logic of a solution without worrying about programming language syntax.

Example: Find the largest of two numbers.

```text
START

Input a and b

IF a > b
    Print a
ELSE
    Print b

END
```

The same logic in C++:

```cpp
int a, b;
cin >> a >> b;

if (a > b)
    cout << a;
else
    cout << b;
```

### Why write pseudo-code?

Pseudo-code helps us focus on **logic rather than syntax**.

A good habit is:

> **Think → Write logic → Write code**

instead of immediately jumping into code.

---

# 2. Variables

A **variable** is like a container that stores a value.

For example:

```cpp
int age = 20;
```

Here:

* `int` → data type
* `age` → variable name
* `20` → value

We can change the value later:

```cpp
int age = 20;

age = 21;
```

Now `age` contains `21`.

### Multiple variables

```cpp
int a = 10;
int b = 20;
int sum = a + b;
```

### Variable naming rules

Valid:

```cpp
int age;
int student_count;
int totalMarks;
```

Invalid:

```cpp
int 2age;       // Cannot start with a number
int my-name;    // '-' is not allowed
```

### Good naming

Prefer meaningful names:

```cpp
int studentAge;
int totalMarks;
int numberOfStudents;
```

instead of:

```cpp
int x;
int a;
int n;
```

However, in CP, short names such as `n`, `m`, `i`, `j`, `x`, and `y` are very common when their meaning is obvious.

---

# 3. Data Types

A **data type** tells C++ what kind of value a variable can store.

Some commonly used data types are:

| Data Type |     Typical Size | Example               |
| --------- | ---------------: | --------------------- |
| `int`     |          4 bytes | `int age = 20;`       |
| `char`    |           1 byte | `char grade = 'A';`   |
| `float`   |          4 bytes | `float pi = 3.14f;`   |
| `double`  |          8 bytes | `double x = 3.14159;` |
| `bool`    | typically 1 byte | `bool ok = true;`     |

> **Note:** The exact size of C++ types is implementation-dependent. The sizes above are typical on modern systems. `char` is always exactly 1 byte, although a byte is not required by the C++ standard to contain exactly 8 bits.

---

## `int`

Used for integer numbers.

```cpp
int age = 20;
int score = 95;
int temperature = -5;
```

Typical range:

```text
-2,147,483,648 to 2,147,483,647
```

For larger integers, use `long long`.

```cpp
long long population = 8000000000LL;
```

---

## `char`

Stores a single character.

```cpp
char grade = 'A';
char symbol = '#';
```

Characters use **single quotes**:

```cpp
'A'
'B'
'7'
```

while strings use **double quotes**:

```cpp
"Hello"
"Bangladesh"
```

---

## `float`

Used for decimal numbers.

```cpp
float price = 10.5f;
```

`float` has less precision than `double`.

---

## `double`

Used for decimal numbers when more precision is needed.

```cpp
double pi = 3.14159265359;
```

In most CP problems, `double` is preferred over `float` when floating-point calculations are required.

---

## `bool`

Stores one of two logical values:

```cpp
true
false
```

Example:

```cpp
bool isLoggedIn = true;
bool isPrime = false;
```

---

# 4. Type Conversion

**Type conversion** means converting a value from one data type to another.

There are two common forms:

1. Implicit conversion
2. Explicit conversion / Type casting

---

## Implicit Conversion

Implicit conversion happens automatically when C++ converts one type into another.

Example:

```cpp
int x = 10;
double y = x;
```

Here, C++ automatically converts:

```text
int → double
```

So:

```cpp
cout << y;
```

prints:

```text
10
```

### Another example

```cpp
int a = 5;
double b = 2.0;

double result = a + b;
```

`a` is automatically converted to `double`.

---

# 5. Type Casting

**Type casting** means explicitly telling C++ to convert a value into another type.

For example:

```cpp
double x = 10.75;

int y = (int)x;
```

Now:

```text
x = 10.75
y = 10
```

The decimal part is removed.

### C++ style casting

Modern C++ usually prefers:

```cpp
int y = static_cast<int>(x);
```

instead of:

```cpp
int y = (int)x;
```

### Very important CP example

Consider:

```cpp
int a = 5;
int b = 2;

cout << a / b;
```

Output:

```text
2
```

Why?

Because both variables are integers, so **integer division** is performed.

If we want:

```text
2.5
```

we can write:

```cpp
cout << (double)a / b;
```

or:

```cpp
cout << static_cast<double>(a) / b;
```

This is extremely useful in competitive programming.

---

# 6. Operators

Operators are symbols that tell C++ to perform an operation.

Main categories:

* Arithmetic operators
* Relational operators
* Logical operators
* Assignment operators
* Unary operators
* Bitwise operators

---

## Arithmetic Operators

Used for mathematical calculations.

| Operator | Meaning            | Example |
| -------- | ------------------ | ------- |
| `+`      | Addition           | `a + b` |
| `-`      | Subtraction        | `a - b` |
| `*`      | Multiplication     | `a * b` |
| `/`      | Division           | `a / b` |
| `%`      | Modulo / Remainder | `a % b` |

Example:

```cpp
int a = 10;
int b = 3;

cout << a + b << '\n'; // 13
cout << a - b << '\n'; // 7
cout << a * b << '\n'; // 30
cout << a / b << '\n'; // 3
cout << a % b << '\n'; // 1
```

### Modulo operator `%`

Modulo gives us the **remainder** after division.

```cpp
10 % 3 = 1
15 % 5 = 0
17 % 2 = 1
```

This is extremely useful in CP.

For example, checking whether a number is even:

```cpp
if (n % 2 == 0)
    cout << "Even";
else
    cout << "Odd";
```

---

# 7. Relational Operators

Relational operators compare values.

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |

Example:

```cpp
int a = 10;
int b = 20;

cout << (a < b);   // 1
cout << (a > b);   // 0
cout << (a == b);  // 0
```

The result is usually a boolean value:

```text
true  → 1
false → 0
```

### Important mistake

Don't confuse:

```cpp
=
```

with:

```cpp
==
```

`=` means **assignment**:

```cpp
x = 10;
```

`==` means **comparison**:

```cpp
x == 10;
```

---

# 8. Logical Operators

Logical operators are mainly used to combine conditions.

| Operator | Meaning |   |    |
| -------- | ------- | - | -- |
| `&&`     | AND     |   |    |
| `        |         | ` | OR |
| `!`      | NOT     |   |    |

---

## AND `&&`

Both conditions must be true.

```cpp
if (age >= 18 && age <= 60)
    cout << "Eligible";
```

The condition is true only when:

```text
age >= 18
AND
age <= 60
```

---

## OR `||`

At least one condition must be true.

```cpp
if (day == 6 || day == 7)
    cout << "Weekend";
```

---

## NOT `!`

Reverses a boolean value.

```cpp
bool isRainy = false;

if (!isRainy)
    cout << "Go outside";
```

Since:

```text
isRainy = false
!isRainy = true
```

---

# 9. Assignment Operators

Assignment operators are used to assign or update values.

Basic assignment:

```cpp
int x = 10;
```

Compound assignment operators:

```cpp
x += 5;   // x = x + 5
x -= 5;   // x = x - 5
x *= 5;   // x = x * 5
x /= 5;   // x = x / 5
x %= 5;   // x = x % 5
```

Example:

```cpp
int x = 10;

x += 5;

cout << x;
```

Output:

```text
15
```

---

# 10. Unary Operators

A unary operator works with **one operand**.

Common unary operators:

```cpp
++x
x++
--x
x--
!x
-x
+x
```

---

## Increment `++`

Increases a value by 1.

```cpp
int x = 5;

x++;
```

Now:

```text
x = 6
```

Equivalent to:

```cpp
x = x + 1;
```

---

## Decrement `--`

Decreases a value by 1.

```cpp
int x = 5;

x--;
```

Now:

```text
x = 4
```

---

## Pre-increment vs Post-increment

This is important:

```cpp
++x; // increment first
x++; // use first, then increment
```

Example:

```cpp
int x = 5;

cout << ++x;
```

Output:

```text
6
```

But:

```cpp
int x = 5;

cout << x++;
```

Output:

```text
5
```

After that, `x` becomes:

```text
6
```

---

# 11. Input and Output

C++ commonly uses:

```cpp
cin
cout
```

For competitive programming, we usually start with:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}
```

---

## Output with `cout`

```cpp
cout << "Hello World";
```

Multiple values:

```cpp
int age = 20;

cout << "Age: " << age;
```

New line:

```cpp
cout << "Hello\n";
```

or:

```cpp
cout << "Hello" << endl;
```

In CP, `\n` is generally preferred because `endl` also flushes the output buffer.

---

## Input with `cin`

```cpp
int age;

cin >> age;
```

Multiple values:

```cpp
int a, b;

cin >> a >> b;
```

If input is:

```text
10 20
```

then:

```text
a = 10
b = 20
```

---

# 12. Conditional Statements

Conditional statements allow our program to make decisions.

## `if`

```cpp
if (condition) {
    // code
}
```

Example:

```cpp
int age;
cin >> age;

if (age >= 18) {
    cout << "Adult";
}
```

---

## `if-else`

```cpp
if (condition) {
    // true
} else {
    // false
}
```

Example:

```cpp
int n;
cin >> n;

if (n % 2 == 0)
    cout << "Even";
else
    cout << "Odd";
```

---

## `else if`

Used when there are multiple conditions.

```cpp
if (marks >= 80)
    cout << "A+";
else if (marks >= 70)
    cout << "A";
else if (marks >= 60)
    cout << "B";
else
    cout << "Fail";
```

---

# 13. Ternary Operator

The ternary operator is a short way of writing simple `if-else` statements.

Syntax:

```cpp
condition ? value_if_true : value_if_false;
```

Example:

```cpp
int a = 10;
int b = 20;

int maximum = (a > b) ? a : b;
```

This is equivalent to:

```cpp
int maximum;

if (a > b)
    maximum = a;
else
    maximum = b;
```

Use the ternary operator when the logic is simple. Don't force complicated logic into one line.

---

# 14. Loops

Loops are used when we need to repeat something.

The main loops in C++ are:

* `for`
* `while`
* `do-while`

---

## `for` Loop

Best when we know how many times we want to repeat something.

```cpp
for (int i = 0; i < 5; i++) {
    cout << i << '\n';
}
```

Output:

```text
0
1
2
3
4
```

### Common CP pattern

```cpp
for (int i = 1; i <= n; i++) {
    // work
}
```

This runs `n` times.

---

## `while` Loop

Useful when the number of iterations depends on a condition.

```cpp
int n;
cin >> n;

while (n > 0) {
    cout << n << '\n';
    n--;
}
```

---

## `do-while`

The body executes **at least once**.

```cpp
int x = 1;

do {
    cout << x << '\n';
    x++;
} while (x <= 5);
```

---

# 15. `break` and `continue`

## `break`

Immediately exits the loop.

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5)
        break;

    cout << i << ' ';
}
```

Output:

```text
1 2 3 4
```

---

## `continue`

Skips the current iteration and moves to the next one.

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3)
        continue;

    cout << i << ' ';
}
```

Output:

```text
1 2 4 5
```

---

# 16. Functions

A function is a reusable block of code that performs a specific task.

Example:

```cpp
int add(int a, int b) {
    return a + b;
}
```

Use it:

```cpp
int result = add(10, 20);

cout << result;
```

Output:

```text
30
```

### Why functions are useful

* Reduce duplicate code.
* Make programs easier to read.
* Make debugging easier.
* Help break a large problem into smaller pieces.

A good problem-solving habit is:

> **Break a big problem into small functions.**

---

# 17. Arrays

An array stores multiple values of the same type.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

Array indexing starts from **0**.

```text
arr[0] → 10
arr[1] → 20
arr[2] → 30
arr[3] → 40
arr[4] → 50
```

Example:

```cpp
cout << arr[0];
```

Output:

```text
10
```

### Traversing an array

```cpp
for (int i = 0; i < 5; i++) {
    cout << arr[i] << ' ';
}
```

---

# 18. Strings

A string stores a sequence of characters.

```cpp
string name = "Rakib";
```

Access characters using indexing:

```cpp
cout << name[0];
```

Output:

```text
R
```

Length:

```cpp
cout << name.size();
```

Loop through a string:

```cpp
for (char c : name) {
    cout << c << ' ';
}
```

---

## `cin` vs `getline`

`cin` stops reading at whitespace:

```cpp
string name;
cin >> name;
```

Input:

```text
Md Rakibul Hasan
```

Only:

```text
Md
```

is read.

For a complete line:

```cpp
string name;

getline(cin, name);
```

This reads:

```text
Md Rakibul Hasan
```

---

# 19. Vector

In competitive programming, `vector` is used much more often than raw arrays.

A vector is a **dynamic array** whose size can change.

```cpp
vector<int> v;
```

Add elements:

```cpp
v.push_back(10);
v.push_back(20);
v.push_back(30);
```

Now:

```text
v = {10, 20, 30}
```

Access:

```cpp
cout << v[0];
```

Size:

```cpp
cout << v.size();
```

Remove the last element:

```cpp
v.pop_back();
```

Loop:

```cpp
for (int x : v) {
    cout << x << ' ';
}
```

---

# 20. Time Complexity

Time complexity tells us how the running time of an algorithm grows as the input size increases.

Common complexities:

```text
O(1)          Constant
O(log n)      Logarithmic
O(n)          Linear
O(n log n)    Linearithmic
O(n²)         Quadratic
O(2ⁿ)         Exponential
O(n!)         Factorial
```

Usually, we care about the **growth rate**, not the exact number of operations.

---

## O(1)

Constant time.

```cpp
int x = arr[0];
```

No matter how large the array is, accessing one element takes constant time.

---

## O(n)

Linear time.

```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i];
}
```

If `n` doubles, the amount of work roughly doubles.

---

## O(n²)

Nested loops often result in quadratic complexity.

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // work
    }
}
```

This performs roughly:

```text
n × n = n²
```

operations.

---

## O(log n)

Binary search is a classic example.

Instead of checking every element, we repeatedly divide the search space.

```text
n
↓
n/2
↓
n/4
↓
n/8
↓
...
```

This gives:

```text
O(log n)
```

---

# 21. Space Complexity

Space complexity describes how much **extra memory** an algorithm needs.

Example:

```cpp
int sum = 0;
```

Uses constant extra space:

```text
O(1)
```

But:

```cpp
vector<int> v(n);
```

requires memory proportional to `n`:

```text
O(n)
```

---

# 22. Common Complexity Patterns

A useful quick reference:

```cpp
for (int i = 0; i < n; i++)
```

→ `O(n)`

```cpp
for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
```

→ `O(n²)`

```cpp
for (int i = 1; i < n; i *= 2)
```

→ `O(log n)`

```cpp
for (int i = n; i > 0; i /= 2)
```

→ `O(log n)`

```cpp
sort(v.begin(), v.end());
```

→ `O(n log n)`

---

# 23. Important C++ STL

The **Standard Template Library (STL)** is extremely important for competitive programming.

Instead of implementing everything from scratch, STL gives us ready-to-use:

* Containers
* Algorithms
* Iterators
* Utility functions

Some important containers:

```text
vector
array
string
stack
queue
deque
priority_queue
set
multiset
map
unordered_map
unordered_set
```

Important algorithms:

```text
sort()
reverse()
max()
min()
swap()
binary_search()
lower_bound()
upper_bound()
```

---

# 24. Competitive Programming Tips & Tricks

## 1. Always check constraints

The constraints often tell you what complexity is acceptable.

For example, if:

```text
n ≤ 20
```

An `O(2^n)` solution might be possible.

If:

```text
n ≤ 100000
```

An `O(n²)` solution is usually too slow.

So always ask:

> **How large can `n` be?**

---

## 2. Start with brute force

Don't immediately try to find the most optimized solution.

First ask:

> "What is the simplest solution I can think of?"

Then analyze its complexity and optimize it if necessary.

A common progression is:

```text
Brute Force
    ↓
Find Bottleneck
    ↓
Optimize
    ↓
Use Better Data Structure / Algorithm
```

---

## 3. Think about edge cases

Always test unusual inputs.

For example, if the problem involves an array, consider:

```text
n = 1
All elements are equal
Already sorted
Reverse sorted
Negative values
Zero
Very large values
Duplicate values
```

Edge cases are responsible for many wrong answers.

---

## 4. Use `long long` when necessary

If values can become very large:

```cpp
long long sum = 0;
```

Be careful with multiplication:

```cpp
long long result = 1LL * a * b;
```

The `1LL` forces the multiplication to happen using `long long`.

---

## 5. Beware of integer division

```cpp
5 / 2
```

gives:

```text
2
```

not:

```text
2.5
```

Use:

```cpp
5.0 / 2
```

or:

```cpp
(double)5 / 2
```

or:

```cpp
static_cast<double>(5) / 2
```

when decimal division is required.

---

## 6. Use `'\n'` instead of `endl` in CP

Prefer:

```cpp
cout << "Hello\n";
```

over:

```cpp
cout << "Hello" << endl;
```

`endl` flushes the output buffer, which can be slower when there is a lot of output.

---

## 7. Fast I/O

For competitive programming, this is a common setup:

```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

Full template:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here

    return 0;
}
```

---

# 25. A Simple Problem-Solving Checklist

Whenever you see a new problem, ask yourself:

```text
1. What exactly is the problem asking?
2. What are the inputs?
3. What should I output?
4. What are the constraints?
5. Can I solve it with brute force?
6. What is the brute-force complexity?
7. Is there a better approach?
8. Which data structure can help?
9. Which algorithm/pattern does this resemble?
10. What are the edge cases?
11. Can integer overflow happen?
12. What is the final time complexity?
13. What is the final space complexity?
```

---

# 26. The Most Important DSA Mindset

Learning DSA is not about memorizing hundreds of algorithms.

The real goal is to learn how to **recognize patterns**.

For example:

```text
Need fast lookup?
        ↓
Hash Map / Set

Need sorted data?
        ↓
Sorting / Set / Map

Need shortest path?
        ↓
BFS / Dijkstra / Bellman-Ford

Need all combinations?
        ↓
Backtracking / Bitmasking

Need repeated range queries?
        ↓
Prefix Sum / Segment Tree / Fenwick Tree

Need maximum/minimum over a sliding window?
        ↓
Deque / Sliding Window

Need "find the answer" from a range?
        ↓
Binary Search on Answer
```

The more problems you solve, the easier it becomes to recognize these patterns.

---

# 27. Final Advice

Don't try to learn everything at once.

A good learning order is:

```text
C++ Basics
   ↓
STL
   ↓
Time & Space Complexity
   ↓
Arrays & Strings
   ↓
Sorting & Searching
   ↓
Two Pointers
   ↓
Sliding Window
   ↓
Prefix Sum
   ↓
Stack & Queue
   ↓
Linked List
   ↓
Recursion & Backtracking
   ↓
Binary Search
   ↓
Trees
   ↓
Heap / Priority Queue
   ↓
Graphs
   ↓
Greedy
   ↓
Dynamic Programming
   ↓
Advanced DSA + CP Techniques
```

### Remember:

> **Learn the concept → Understand the pattern → Implement it → Solve problems → Review mistakes → Repeat.**

The goal isn't to solve one problem.

The goal is to become good enough to look at a new problem and think:

> **"I've seen this pattern before."**

That's when DSA and Competitive Programming start becoming much easier.


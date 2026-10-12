# C Programming Mastery & Embedded Systems Foundation

A comprehensive repository containing foundational to advanced **C Programming**, modular architecture, data structures, and industry-style mini-projects designed for embedded systems and systems programming.

---

## 📂 Repository Architecture

```plaintext
C_Programming/
├── Arrays/                 # 1D/2D arrays, multidimensional arrays, matrix operations
├── Assignment/             # Industry-style modular software projects & exercises
│   ├── 1Darrays/           # Concatenation, duplicate removal, array splitting
│   ├── bitwise/            # Bit manipulation, masks, rotate shifts
│   ├── control_statemnts/  # Decision structures & logic
│   ├── functions/          # Multi-file mini-projects (Hospital, Hotel, Insurance, etc.)
│   ├── library/            # Static (.a) & dynamic (.so) library implementations
│   ├── Linked_List/        # Industrial Plant & Machine Management System
│   ├── pointers/           # Pointer arithmetic, transactions, array traversal
│   ├── strings/            # Custom string library functions (re-implementing string.h)
│   ├── structures/         # E-Commerce, Hospital, Library, School, Smart Home systems
│   └── Validation/         # Reusable defensive input validation engine
├── C_preprocessor/         # Macros, token pasting, conditional compilation (#ifdef)
├── Control_Statements/     # If-else ladders, switch-case, loops, patterns & pyramids
├── Files/                  # File streams (fopen, fread, fwrite, binary files)
├── Functions/              # Call semantics, recursion, modular decomposition
├── Input_Output/           # Standard streams, format specifiers, buffer handling
├── Operations_Bits/        # Low-level bitwise operations, masks, bit fields
├── Operators_expressions/  # Operator precedence, type conversions, evaluation order
├── Strings/                # Null-terminated strings, buffer safety, manipulation
├── library/                # Reusable static and dynamic math/calculator libraries
├── linked_lists/           # Singly, Doubly, and Circular Linked Lists implementations
├── makefile/               # Build automation, targets, dependency management
├── miscellaneous/          # Storage classes, command-line arguments, system calls
├── pointers/               # Pointers, double pointers, function pointers, dynamic memory
└── structure_union/        # Structures, padding, alignment, unions, bitfields
```

---

## 🛠️ Key Real-World Projects & Modules

### 🏭 Industrial Plant Management (`Assignment/Linked_List`)
* Console-based industrial monitoring system built with **dynamic linked list structures**.
* Tracks multi-plant hierarchies with child machine nodes.
* Dynamic node allocation and deallocation (`malloc`/`free`) with production count calculation.

### 🏥 Modular Application Suites (`Assignment/functions/` & `Assignment/structures/`)
* **Hospital Management System**: Patient admission, triage tracking, diagnosis filtering, record deletion.
* **Smart Home Control System**: Device status toggling, load monitoring, power consumption analytics.
* **E-Commerce Inventory Manager**: Product cataloging, real-time stock deductions, valuation reports.
* **School Grading & Evaluation**: Grade averaging, top-performer rankings, mark updates.
* **Insurance Policy Manager**: Risk calculation, policy issuance, claim tracking.
* **Traffic Light Simulation**: State-machine cycle emulation with timing logic.

### 🛡️ Defensive Input Validation Engine (`Assignment/Validation`)
* Reusable shared library (`.so`/`.a`) for sanitizing user console input.
* Handles integers, floats, string length limits, contact numbers, and removes trailing newlines.

### ⚡ Low-Level & Embedded Fundamentals
* **Bitwise Operations**: N-th bit extraction, bit flipping, rotation, register masking.
* **Pointers & Memory**: Heap allocation, memory leaks prevention, function pointers for callbacks.
* **Libraries & Makefiles**: Automated multi-file compilation with header dependencies.

---

## 🚀 Build and Run

### Single File Compilation:
```bash
gcc -Wall -Wextra -std=c11 pointers/exercise/1_ptr.c -o program.out
./program.out
```

### Modular Projects with Make:
```bash
cd Assignment/structures/Smart_Home_System
make
./build/app
```

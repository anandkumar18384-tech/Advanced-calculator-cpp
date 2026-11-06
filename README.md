🧮 MultiFunction Calculator (C++)

A multifunction console-based calculator developed using C++.

Perform basic arithmetic operations, advanced mathematical calculations, and number system conversions through a simple menu-driven interface.

---

📌 About The Project

MultiFunction Calculator is a C++ based project designed to perform multiple mathematical operations within a single program.

It combines basic arithmetic calculations with advanced mathematical functions and number system conversions.

The project is developed using fundamental C++ programming concepts such as functions, loops, conditional statements, and mathematical libraries.

Objective: To strengthen C++ programming fundamentals and improve logical thinking through practical implementation.

---

✨ Features

Category| Available Operations
Basic Arithmetic| Addition, Subtraction, Multiplication, Division
Mathematical Functions| Power, Square Root, Logarithm
Advanced Operations| Factorial
Number System| Binary, Octal and Decimal Conversions
Interface| Menu-driven Console Interface

---

📊 Project Workflow

The program follows a simple menu-driven execution process.

flowchart TD
    A([Start]) --> B[Display Main Menu]
    B --> C[Select Operation]
    C --> D{Valid Choice?}
    D -->|No| B
    D -->|Yes| E[Enter Required Input]
    E --> F[Perform Calculation]
    F --> G[Display Result]
    G --> H{Continue?}
    H -->|Yes| B
    H -->|No| I([Exit Program])

---

🛠️ Technologies & Concepts Used

Technology| Purpose
C++| Core Programming Language
iostream| Input and Output
cmath| Mathematical Operations
Functions| Code Reusability
Loops| Repeated Execution
Conditional Statements| Decision Making
Switch Case| Operation Selection

---

📁 Project Structure

Advanced-calculator-cpp/
│
├── MultiFunction-Calculator.cpp
│
├── output/
│
└── README.md

---

🚀 Getting Started

Follow these steps to run the project locally.

1. Clone the Repository

git clone https://github.com/anandkumar18384-tech/Advanced-calculator-cpp.git

2. Navigate to the Project Directory

cd Advanced-calculator-cpp

3. Compile the Program

g++ MultiFunction-Calculator.cpp -o calculator

4. Run the Program

Windows:

calculator.exe

Linux / macOS:

./calculator

---

⚠️ Limitations

- The current version uses a console-based interface.
- Calculation history is not permanently stored.
- Input validation and exceptional cases can be improved.
- A graphical user interface is not available.

---

🔮 Future Improvements

The following features can be added in future versions:

- [ ] File handling to save calculation history.
- [ ] Better input validation and error handling.
- [ ] Additional scientific and mathematical operations.
- [ ] Graphical User Interface (GUI).
- [ ] Web-based version using HTML, CSS and JavaScript.

---

📚 Learning Outcomes

While developing this project, I improved my understanding of:

- C++ programming fundamentals.
- Functions and modular programming.
- Loops and conditional statements.
- Mathematical operations using libraries.
- Menu-driven program development.
- Logical thinking and problem-solving.

---

👨‍💻 Author

Anand Kumar

Engineering Student | C++ Programmer | Aspiring Backend Developer

---

Built with C++ ❤️

Learning by Building, Improving by Practising. 🚀

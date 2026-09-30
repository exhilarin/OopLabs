# 🧬 OopLabs

![Course](https://img.shields.io/badge/İstinye%20University-OOP%20Labs-blue?style=for-the-badge)
![Language](https://img.shields.io/badge/Language-C++-blue?style=for-the-badge)
![Concepts](https://img.shields.io/badge/Concepts-OOP-yellowgreen?style=for-the-badge)

## 📚 Project Summary

**OopLabs** contains my weekly lab exercises from the **Object-Oriented Programming** course at İstinye University. Each week introduces one core OOP concept in C++, with two exercises that build on each other.

The language fundamentals that come before this course are in [CppLabs](https://github.com/exhilarin/CppLabs).

---

## 🧠 What I Learned in OopLabs

| Week | Topic | Exercises |
|---|---|---|
| **01** | Classes & Objects | Defining a `Car` class, then adding `private` members and access control |
| **02** | Encapsulation | `Person` class with `private` data, setters/getters and a default constructor |
| **03** | Encapsulation (continued) | `Person` with getters/setters and default values |
| **04** | Constructors & Destructors | Initializer lists, parameterized constructors, `~Person()` |
| **05** | Operator Overloading | `Calculator` class, `Rectangle operator+` |
| **06** | Inheritance | `Student` → `GraduateStudent` |
| **07** | Inheritance in Practice | `Book` → `EBook`, `Calculator` → `AdvancedCalculator` |
| **08** | Polymorphism | `Shape` → `Rectangle`, `Employee` with a **pure virtual** `calculateSalary()` (`FullTimeEmployee`) |

---

## 📁 Project Structure

```bash
OopLabs/
├── week1/
│   ├── ex00.cpp
│   └── ex01.cpp
├── week2/ ... week8/
└── README.md
```

---

## 🚀 How to Run

```bash
git clone https://github.com/exhilarin/OopLabs.git
cd OopLabs/week8

g++ -Wall -Wextra -Werror ex01.cpp -o ex01
./ex01
```

---

## 🚀 Key Takeaways

OopLabs covers the core OOP concepts in C++: encapsulation, inheritance, polymorphism and abstraction. The **42 C++ Modules** go deeper into the same ideas.

---

> _“An object is data and behavior living together.”_

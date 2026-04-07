# cpp-modules

A series of progressively complex C++ exercises, based on the 42 School C++ modules 00 to 09.

## Context

I'm not a 42 School student, but I follow parts of their curriculum on my own time as a personal learning path. Alongside the C track, I started the C++ to complete my low level learning journey as it is the most used OOP language in embedded, robotics, trading, etc

## What are the C++ modules?

The 42 C++ modules are a sequence of ten projects (00–09) designed to introduce C++ from the ground up. Each module focuses on a specific set of concepts, building on the previous one. The exercises are intentionally constrained — for example, early modules forbid the use of the STL — to force a deep understanding of the language mechanics before relying on higher-level abstractions.

## What I learned

- **Module 00** — Namespaces, classes, member functions, stdio streams, initialization lists, static and const
- **Module 01** — Memory allocation, pointers to members, references, switch statements
- **Module 02** — Ad-hoc polymorphism, operator overloading, orthodox canonical class form
- **Module 03** — Inheritance, access specifiers, and class hierarchies
- **Module 04** — Subtype polymorphism, abstract classes, interfaces, virtual functions
- **Module 05** — Repetition and exceptions, try/catch blocks, exception hierarchies
- **Module 06** — C++ casts: `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`
- **Module 07** — Templates: function templates, class templates, template specialization
- **Module 08** — Templated containers, iterators, and algorithms from the STL
- **Module 09** — STL containers in practice: `map`, `stack`, `vector` applied to real problems

## Project structure

```
cpp-modules/
├── cpp00/
│   └── ex00/, ex01/, ex02/   # Exercises for each module
├── cpp01/
├── cpp02/
├── ...
└── cpp09/
    └── ex00/, ex01/, ex02/
```

Each exercise folder typically contains:

```
exXX/
├── *.cpp       # Source files
├── *.hpp       # Header files
└── Makefile    # Builds the exercise binary
```

## Build

Each exercise is built independently:

```
cd cpp0X/exXX
make        # builds the binary
make clean  # removes object files
make fclean # removes object files and binary
make re     # fclean + make
```

## Notes

This project is done purely for learning purposes, following the 42 cursus as a self-study resource. I am not affiliated with 42 School.

# EngineeringMate

EngineeringMate is an AI-powered engineering learning platform designed specifically for engineering students.

Unlike general AI tools, EngineeringMate focuses on helping engineering students learn concepts, solve problems, stay organized, and track progress throughout their engineering degree.

Current implementation is being developed in C as the backend prototype before transitioning into a web application.

---

# Developer

**Joel Efekele**

Electronics Engineering Technology Graduate (Honors)

Future Electrical Engineering Student

Founder of EngineeringMate

---

# Current Version

Version: 0.7

Current Development Phase: Phase 7 – Knowledge Management System

Language: C

Status: Active Development

---

# Mission

EngineeringMate aims to become the central learning companion for engineering students by combining:

- AI tutoring
- Engineering learning paths
- Formula libraries
- Engineering quizzes
- Progress tracking
- Assignment management
- Study scheduling
- Engineering calculators

The goal is to guide students from freshman year through graduation.

---

# Customer Discovery Findings

Engineering students commonly struggle with:

1. Poor time management
2. Not enough time to study
3. Too much material to learn
4. Difficulty understanding concepts
5. Lack of study partners
6. Difficulty knowing what to learn next
7. Forgetting formulas
8. Poor exam preparation

EngineeringMate is designed to solve these problems.

---

# Target Users

## Primary Users

- Electrical Engineering Students
- Mechanical Engineering Students
- Chemical Engineering Students
- Civil Engineering Students
- Computer Engineering Students

## Future Expansion

- STEM Students
- Physics Students
- Mathematics Students
- Technology Students

---

# Current Features

## Knowledge Engine

- Built-in engineering concepts
- User-learned concepts
- Persistent storage using knowledge.txt
- Search concepts
- Search categories
- View concept details
- Edit concepts
- Delete concepts

## Learning Features

Each concept can contain:

- Definition
- Function
- Advantages
- Disadvantages
- Category

## Utility Features

- Help command
- Statistics dashboard
- Question history
- Category browsing
- Knowledge management

---

# Built-In Categories

## Control

- PWM
- ADC
- DAC
- RTC
- TIMER
- INTERRUPT

## Communication

- UART
- SPI
- I2C

## Microcontroller

- ESP32

## System

- JAXIS

---

# Available Commands

## General Commands

```text
HELP
WHO ARE YOU
YOUR NAME
EXIT
QUIT
```

## Concept Questions

```text
WHAT IS <concept>
WHO IS <concept>
WHAT DOES <concept>
ADVANTAGES OF <concept>
DISADVANTAGES OF <concept>
```

## Search Commands

```text
SEARCH <concept>

SEARCH CATEGORY CONTROL

SEARCH CATEGORY COMMUNICATION

SEARCH CATEGORY MICROCONTROLLER
```

## Knowledge Management

```text
SHOW LEARNED

VIEW <concept>

EDIT <concept>

DELETE <concept>

CLEAR KNOWLEDGE
```

## Statistics

```text
STATS
STATISTICS
```

## Logs

```text
LOG

CLEAR STORAGE
```

---

# Current Architecture

```text
User Input
     |
     V
Question Processing
     |
     V
Uppercase Conversion
     |
     V
Command Detection
     |
     +----> Search Engine
     |
     +----> Knowledge Engine
     |
     +----> Edit Engine
     |
     +----> Delete Engine
     |
     +----> Statistics Engine
     |
     V
Response Output
```

---

# Data Structures

## Built-In Knowledge

```c
struct Concept
{
    keyword;
    definition;
    function;
    advantages;
    disadvantages;
    category;
};
```

## Learned Knowledge

```c
struct LearnedConcept
{
    keyword;
    category;
    definition;
    function;
    advantages;
    disadvantages;
};
```

---

# Persistent Storage

EngineeringMate uses:

```text
knowledge.txt
```

to store user-learned concepts between sessions.

This allows the program to remember information after it closes.

---

# EngineeringMate Learning Structure

Future versions will organize content using four levels.

## Level 1 — Engineering Branch

Examples:

- Electrical Engineering
- Mechanical Engineering
- Chemical Engineering
- Civil Engineering
- Computer Engineering

---

## Level 2 — Courses

Example (Electrical Engineering):

- Circuit Analysis I
- Circuit Analysis II
- Electronics
- Digital Logic
- Signals & Systems
- Control Systems
- Power Systems
- Embedded Systems

---

## Level 3 — Lessons

Example:

Circuit Analysis I

- Voltage
- Current
- Resistance
- Ohm's Law
- KCL
- KVL
- Node Analysis
- Mesh Analysis

---

## Level 4 — Concepts

Example:

Ohm's Law

- Definition
- Formula
- Units
- Applications
- Examples
- Common Mistakes
- Quiz

---

# Future Features

## AI Tutor

EngineeringMate will:

- Explain concepts simply
- Solve problems step-by-step
- Generate practice questions
- Act as a study buddy
- Support engineering coursework

---

## Formula Library

Examples:

- Ohm's Law
- Voltage Divider
- Power Equations
- Laplace Transform
- Fourier Transform
- Transfer Functions

---

## Engineering Quizzes

Quiz Types:

- Multiple Choice
- True/False
- Fill in the Blank
- Problem Solving
- Formula Recall

Difficulty Levels:

- Easy
- Medium
- Hard

---

## Progress Tracking

Track:

- Topics completed
- Quiz scores
- Study hours
- Weak areas
- Course completion

---

## Assignment Tracking

Track:

- Homework deadlines
- Lab deadlines
- Project deadlines
- Exam schedules

---

## Gamification

### XP System

Examples:

- Read lesson = 10 XP
- Practice questions = 15 XP
- Quiz completion = 25 XP
- Challenge problem = 50 XP

### Levels

- Freshman Engineer
- Engineering Student
- Circuit Analyst
- Design Engineer
- Engineering Master

### Badges

- Beginner Engineer
- Circuit Explorer
- Electronics Apprentice
- Problem Solver
- Study Streak
- EE Scholar

---

# Development Roadmap

## Phase 7 — Knowledge Management

- [x] Teach Concepts
- [x] Save Concepts
- [x] Load Concepts
- [x] Search Concepts
- [x] Search Categories
- [x] View Concepts
- [x] Edit Concepts
- [x] Delete Concepts
- [x] Statistics Dashboard
- [ ] Duplicate Detection
- [ ] Capacity Protection
- [ ] Command Cleanup

---

## Phase 8 — Learning Structure

- [ ] Engineering Branches
- [ ] Courses
- [ ] Lessons
- [ ] Concept Hierarchy

---

## Phase 9 — Quiz Engine

- [ ] Quiz Engine
- [ ] Question Generator
- [ ] Quiz Scoring

---

## Phase 10 — Progress Tracking

- [ ] XP System
- [ ] Progress Tracking
- [ ] Badges
- [ ] Study Tracking

---

## Phase 11 — Engineering Database Expansion

- [ ] Electrical Engineering
- [ ] Mechanical Engineering
- [ ] Chemical Engineering
- [ ] Civil Engineering
- [ ] Computer Engineering

---

# Long-Term Vision

EngineeringMate will evolve into a complete engineering learning ecosystem that combines:

- AI tutoring
- Learning paths
- Engineering quizzes
- Formula libraries
- Progress tracking
- Assignment management
- Study scheduling
- Engineering calculators

The long-term goal is to become the educational companion that engineering students use throughout their entire degree.

---

# Future Platforms

- Desktop Application
- Web Application
- Mobile Application
- EngineeringMate Sleeve Device
- Voice Assistant Version
- Wearable Engineering Assistant

---

# Project Status

Current Focus:

**Phase 7 – Knowledge Management System**

Next Milestone:

**Phase 8 – Engineering Learning Structure**

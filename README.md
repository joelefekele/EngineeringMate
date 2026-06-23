# EngineeringMate

## Overview

EngineeringMate is an AI-powered engineering learning platform designed specifically for engineering students.

Unlike general AI tools, EngineeringMate focuses on engineering education by combining concept learning, structured learning paths, quizzes, formula libraries, progress tracking, study planning, and engineering-specific resources into a single platform.

The current version is being developed in C as a backend prototype before transitioning into a full web application.

---

# Developer

Joel Efekele

Founder of EngineeringMate

Electronics Engineering Technology Graduate (Honors)

Future Electrical Engineering Student

---

# Mission

EngineeringMate aims to help engineering students:

* Understand difficult concepts
* Learn more efficiently
* Stay organized
* Prepare for exams
* Track learning progress
* Follow structured learning paths
* Build confidence throughout their engineering degree

The long-term goal is to become the central learning companion for engineering students from freshman year through graduation.

---

# Customer Discovery Findings

Engineering students commonly struggle with:

1. Poor time management
2. Not enough time to study
3. Too much material to learn
4. Difficulty understanding concepts
5. Lack of study partners
6. Difficulty knowing what to study next
7. Forgetting formulas
8. Poor exam preparation

EngineeringMate is being designed to directly solve these challenges.

---

# Current Version

Version: 0.7

Current Phase: Phase 7 – Knowledge Management

Development Status: Active

Programming Language: C

---

# Current Features

## Knowledge Engine

* Built-in engineering concepts
* User-created concepts
* Persistent storage
* Concept searching
* Category searching
* Concept viewing
* Concept editing
* Concept deletion
* Knowledge expansion

## Learning Features

Each concept contains:

* Definition
* Function
* Advantages
* Disadvantages
* Category

## Utility Features

* Help system
* Statistics dashboard
* Question history
* Knowledge management
* Category browsing

---

# Current Architecture

User Input

↓

Question Processing

↓

Uppercase Conversion

↓

Command Detection

↓

Knowledge Engine

├── Built-In Concepts

├── Learned Concepts

├── Search Engine

├── View Engine

├── Edit Engine

├── Delete Engine

├── Statistics Engine

└── Persistent Storage

↓

Response Output

---

# Core Data Structures

## Built-In Concepts

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

## Learned Concepts

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

knowledge.txt

to store learned concepts between sessions.

This allows EngineeringMate to retain knowledge after the program closes.

---

# Built-In Categories

## Control

* PWM
* ADC
* DAC
* RTC
* TIMER
* INTERRUPT

## Communication

* UART
* SPI
* I2C

## Microcontroller

* ESP32

## System

* JAXIS

---

# Available Commands

## General Commands

HELP

WHO ARE YOU

YOUR NAME

EXIT

QUIT

---

## Concept Questions

WHAT IS <concept>

WHO IS <concept>

WHAT DOES <concept>

ADVANTAGES OF <concept>

DISADVANTAGES OF <concept>

---

## Search Commands

SEARCH <concept>

SEARCH CATEGORY CONTROL

SEARCH CATEGORY COMMUNICATION

SEARCH CATEGORY MICROCONTROLLER

---

## Knowledge Management

SHOW LEARNED

VIEW <concept>

EDIT <concept>

DELETE <concept>

CLEAR KNOWLEDGE

---

## Statistics

STATS

STATISTICS

---

## Logs

LOG

CLEAR STORAGE

---

# EngineeringMate Learning Structure

Future versions will organize content using four learning levels.

## Level 1 – Engineering Branch

Examples:

* Electrical Engineering
* Mechanical Engineering
* Chemical Engineering
* Civil Engineering
* Computer Engineering
* Aerospace Engineering

---

## Level 2 – Courses

Example (Electrical Engineering):

* Circuit Analysis I
* Circuit Analysis II
* Electronics
* Digital Logic
* Signals and Systems
* Control Systems
* Power Systems
* Embedded Systems

---

## Level 3 – Lessons

Example:

Circuit Analysis I

* Voltage
* Current
* Resistance
* Ohm's Law
* KCL
* KVL
* Node Analysis
* Mesh Analysis

---

## Level 4 – Concepts

Example:

Ohm's Law

* Definition
* Formula
* Units
* Applications
* Example Problems
* Common Mistakes
* Quiz

---

# Future Features

## AI Tutor

EngineeringMate will:

* Explain concepts simply
* Provide step-by-step solutions
* Generate practice questions
* Act as a study partner
* Guide learning progression

---

## Formula Library

Examples:

* Ohm's Law
* Voltage Divider
* Power Equations
* Fourier Transform
* Laplace Transform
* Transfer Functions

---

## Engineering Quizzes

Quiz Types:

* Multiple Choice
* True/False
* Fill in the Blank
* Formula Recall
* Problem Solving

Difficulty Levels:

* Easy
* Medium
* Hard

---

## Progress Tracking

Track:

* Topics completed
* Quiz scores
* Study hours
* Weak areas
* Course completion

---

## Assignment Tracking

Track:

* Homework deadlines
* Lab deadlines
* Project deadlines
* Exam schedules

---

## Gamification

### XP System

Examples:

* Read lesson = 10 XP
* Practice questions = 15 XP
* Quiz completion = 25 XP
* Challenge problem = 50 XP

### Levels

* Freshman Engineer
* Engineering Student
* Circuit Analyst
* Design Engineer
* Engineering Master

### Badges

* Beginner Engineer
* Circuit Explorer
* Electronics Apprentice
* Problem Solver
* Study Streak
* EE Scholar

---

# Development Roadmap

## Phase 1 – Core Knowledge Database ✅

* Built-in concept database
* Concept architecture
* Engineering knowledge structure

## Phase 2 – Question Processing System ✅

* User input handling
* Case-insensitive searching
* Keyword detection

## Phase 3 – Search Engine ✅

* Concept lookup
* Information retrieval
* Response generation

## Phase 4 – Learning System ✅

* User-created concepts
* Dynamic knowledge expansion

## Phase 5 – Persistent Storage ✅

* knowledge.txt integration
* Save and load system

## Phase 6 – System Organization ✅

* Categories
* Help system
* Logging system
* Modular functions

## Phase 7 – Knowledge Management 🔄

* [x] Teach Concepts
* [x] Save Concepts
* [x] Load Concepts
* [x] Search Concepts
* [x] Search Categories
* [x] View Concepts
* [x] Edit Concepts
* [x] Delete Concepts
* [x] Statistics Dashboard
* [ ] Duplicate Detection
* [ ] Capacity Protection

## Phase 8 – Learning Structure

* Engineering Branches
* Courses
* Lessons
* Concept Hierarchy

## Phase 9 – Quiz Engine

* Multiple Choice Questions
* True/False Questions
* Fill in the Blank Questions
* Quiz Scoring

## Phase 10 – Progress Tracking

* XP System
* Achievement Badges
* Study Tracking
* Learning Analytics

## Phase 11 – Engineering Database Expansion

* Electrical Engineering
* Mechanical Engineering
* Chemical Engineering
* Civil Engineering
* Computer Engineering

---

# Future Platforms

* Desktop Application
* Web Application
* Mobile Application
* EngineeringMate Sleeve Device
* Voice Assistant Version
* Wearable Engineering Assistant

---

# Long-Term Vision

EngineeringMate is being built to become a complete engineering learning ecosystem.

The goal is not to compete with general AI systems.

Instead, EngineeringMate will provide:

* Engineering-specific learning paths
* Engineering tutoring
* Formula libraries
* Progress tracking
* Engineering quizzes
* Study planning
* Assignment management
* Engineering calculators

The long-term vision is to guide engineering students through their entire academic journey, from freshman year to graduation.

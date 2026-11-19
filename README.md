# Game of Chance 🎲

**An interactive C++ experiment in probability, risk, and decision making.**

Game of Chance explores the relationship between uncertainty and human choice through a simple terminal-based game.

Each decision presents a question: **secure what you have, or risk it for the possibility of more?**

## How It Works

The game consists of five rounds.

A six-sided die determines the outcome of each roll.

- Rolling 2–6 earns points.
- Rolling 1 loses all unbanked points for that round.
- After each successful roll, the player chooses to **Bank (B)** or **Risk (R)**.
- Banked points are protected and contribute to the final score.

The game concludes with one of three outcomes based on the player's accumulated score.

## Features

- Written in C++17
- Interactive terminal gameplay
- Randomized dice rolls
- Five-round scoring system
- Risk-versus-reward decisions
- Three possible endings
- Input validation

## Running the Game

Compile using a C++17-compatible compiler:

```bash
g++ -std=c++17 game_of_chance.cpp -o game_of_chance
```

Run the program:

```bash
./game_of_chance
```

On Windows, the compiled executable is named `game_of_chance.exe`.

## The Concept

Game of Chance treats probability as a creative system.

The player has control over each decision, but never over the outcome of the die.

The experiment explores the tension between **agency and randomness**, asking how much uncertainty we are willing to accept in pursuit of a desired result.

## Technology

C++17 · Probability · Random Number Generation · Interactive Systems · Game Logic

## Artist

**Théophanie Parker**

[theophanieparker.com](https://theophanieparker.com)

# 🧮 Graph

A lightweight C program that draws mathematical functions directly in your terminal — no graphics libraries required.

---

## 🚀 Overview

**C Terminal Graphing** lets you visualize functions like `f(x) = x*x` right inside your terminal using only text characters.
It’s fast, portable, and perfect for anyone who wants a simple, no-frills way to graph math functions in C.

### ✨ Example Functions

* `f(x) = x` → Straight line
* `g(x) = x²` → Parabola
* `h(x) = 1/x` → Hyperbola

---

## 🧪 Features

✅ **No Dependencies** – Works in any terminal.
✅ **Easy to Use** – Add your own functions in C and graph them instantly.
✅ **Customizable** – Tweak graph size, precision, and range in `graph.h`.
✅ **Cross-Platform** – Supports Linux, and Windows.

---

## 🏁 Getting Started

Follow these steps to build and run the project.

### 📦 Prerequisites

Make sure you have a C compiler and `make` installed.

* **Linux (Debian/Ubuntu):**

  ```bash
  sudo apt update
  sudo apt install build-essential
  ```

* **Windows (MinGW/MSYS):**
  Install [MinGW](http://mingw.org/) and ensure `gcc` and `make` are in your PATH.

---

### ⚙️ Installation

1. **Clone the repo:**

   ```bash
   git clone https://github.com/idandrori555/graph.git
   cd graph
   ```

2. **Build the project:**

   ```bash
   make
   ```

3. **Run it:**

   ```bash
   ./build/program
   ```

---

## 🧠 How It Works

| File             | Description                                                         |
| ---------------- | ------------------------------------------------------------------- |
| **`main.c`**     | Entry point — choose which functions to graph.                      |
| **`graph.c`**    | Handles graph generation and drawing.                               |
| **`examples.c`** | Contains example math functions (`f`, `g`, `h`). Add your own here! |
| **`graph.h`**    | Configuration — adjust graph size, scale, etc.                      |
| **`Makefile`**   | Builds everything for you.                                          |

---

## 🤝 Contributing

Contributions are welcome!
Here are some ideas to get started:

* Add more graph types (e.g., scatter, polar)
* Add colors or better scaling
* Support math equation input
* Improve axis labeling

Fork the repo, make your changes, and open a pull request 🚀

---

# C Terminal Graphing 📈

A lightweight and portable C program to visualize mathematical functions directly in your terminal. No graphics libraries needed! 🚀

---

## ✨ About The Project

This program takes a mathematical function, like `f(x) = x*x`, and draws a 2D graph of it using simple text characters. It's a fun and easy way to see functions in action without any heavy dependencies.

**Key Features:**

- ✅ **Zero Dependencies:** Runs in any standard terminal.
- 🔧 **Simple to Use:** Just add your C function and graph it instantly.
- ⚙️ **Customizable:** Easily tweak the graph's size and precision by editing the `graph.h` file.
- 💻 **Cross-Platform:** Compiles and runs on Linux, macOS, and Windows.

---

## 🚀 Getting Started

Get up and running with these simple steps.

### Prerequisites

You'll need a C compiler and the `make` tool.

- **On Linux (Debian/Ubuntu):**
  ```sh
  sudo apt-get update
  sudo apt-get install build-essential
  ```
- **On macOS:** Install the Xcode Command Line Tools.
- **On Windows:** Install MinGW and MSYS.

### Installation & Running

1.  **Clone the repo:**
    ```sh
    git clone https://github.com/your_username/your_repository.git
    cd your_repository
    ```
2.  **Compile the code:**
    ```sh
    make
    ```
    This builds the program for both Linux (`build/program`) and Windows (`build/program.exe`).

    You can also build for a specific operating system:
    ```sh
    make linux
    # or
    make windows
    ```

3.  **Run the program:**
    - On Linux/macOS:
      ```sh
      ./build/program
      ```
    - On Windows:
      ```sh
      build\program.exe
      ```

---

## 🎨 How It Works

The project is split into a few key files:

- **`main.c`**: The entry point. It decides which functions to graph.
- **`graph.c`**: Contains the core logic for turning a function into a text-based graph.
- **`examples.c`**: Holds the math functions (`f(x)`, `g(x)`, etc.). Add your own here!
- **`Makefile`**: The script that compiles everything for you.

---

## 🤝 Contributing

Want to make this project better? Contributions are welcome! Here are a few ideas:

- Add support for more graph types (like scatter plots).
- Allow for custom graph characters or colors.
- Improve the automatic scaling of the graph.
- Add labels for the axes.
- Parse math equations from text input.

Feel free to open an issue or submit a pull request!

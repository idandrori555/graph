# C Terminal Graphing

A simple C program that draws graphs of mathematical functions in your terminal.

## About The Project

This program takes a mathematical function, like `f(x) = x*x`, and draws a 2D graph of it using text characters. It's a lightweight and portable way to visualize functions without needing any special graphics libraries.

The project comes with a few example functions to get you started:
- `f(x) = x` (a straight line)
- `g(x) = x^2` (a parabola)
- `h(x) = 1/x` (a hyperbola)

## Features

- **No Dependencies:** Runs in any standard terminal without needing extra graphics libraries.
- **Simple to Use:** Add your own C functions to graph them instantly.
- **Customizable:** Easily change the graph's size and precision by editing the `graph.h` file.
- **Cross-Platform:** Compiles and runs on both Linux and Windows.

## Getting Started

Follow these simple steps to get the program running on your local machine.

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

## How It Works

The project is split into a few key files:
- **`main.c`**: This is the starting point. It decides which functions to graph.
- **`graph.c`**: This file contains the main logic for turning a function into a text-based graph.
- **`examples.c`**: This file holds the math functions (`f(x)`, `g(x)`, etc.) that are graphed. You can add your own here!
- **`Makefile`**: This is the script that compiles all the code for you.

## Contributing

Want to make this project better? Contributions are welcome! Here are a few ideas:

- Add support for more graph types (like scatter plots).
- Allow for custom graph characters or colors.
- Improve the automatic scaling of the graph.
- Add labels for the axes.
- Parse math equations from text input.

Feel free to open an issue or submit a pull request!

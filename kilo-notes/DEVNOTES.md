## Development Notes

I developed this project on Windows using WSL (Ubuntu) because the `termios.h` header was not available in my native Visual Studio Code environment. Running the project inside WSL provided the required POSIX environment used throughout the tutorial.

### Project Location

```text
\\wsl$\Ubuntu\home\
\\wsl$\Ubuntu\home\User\kiloTextEditor
```

### Open the Project in Visual Studio Code

From the project directory inside Ubuntu:

```bash
code .
```

### Build

```bash
cd kiloTextEditor
gcc kilo.c -o kilo
```

### Run

Start the editor:

```bash
./kilo
```

Open an existing file:

```bash
./kilo file.c
```

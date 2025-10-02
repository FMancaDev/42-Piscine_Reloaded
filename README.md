# Piscine Reloaded 🐚💻

<p align="center">
  <a href="https://42.fr"><img src="https://img.shields.io/badge/42-Network-blue.svg"></a>
  <a href="https://en.wikipedia.org/wiki/C_(programming_language)"><img src="https://img.shields.io/badge/lang-C-orange.svg"></a>
  <img src="https://img.shields.io/badge/shell-bash-lightgrey.svg">
  <img src="https://img.shields.io/badge/makefile-automation-yellow.svg">
  <a href="./LICENSE"><img src="https://img.shields.io/badge/License-MIT-green.svg"></a>
  <img src="https://img.shields.io/badge/build-passing-brightgreen.svg">
</p>

> Repository with my solutions for **Piscine Reloaded**, a collection of exercises from 42 focusing on C fundamentals and Unix shell scripting.

---

## 📖 About

**Piscine Reloaded** is a set of exercises created by **42** to reinforce basic programming concepts learned in the original Piscine.  
Topics include:

- Basic C operations  
- Pointers, arrays, and strings  
- Recursion  
- Simple mathematical functions  
- Macros and `structs`  
- File manipulation  
- Shell scripting  
- Makefile usage  

This repository contains my solutions organized in folders, with Makefile and optional test scripts.

---

## 📂 Exercises

| Exercise | Description |
|-----------|-----------|
| ex00 | File creation / permissions / dates |
| ex01 | Print “Z” |
| ex02 | Script to find and delete temporary files |
| ex03 | Script to find `.sh` files |
| ex04 | Show machine MAC addresses |
| ex05 | Special file containing `42` |
| ex06 | `ft_print_alphabet` |
| ex07 | `ft_print_numbers` |
| ex08 | `ft_is_negative` |
| ex09 | `ft_ft` — assignment via pointer |
| ex10 | `ft_swap` |
| ex11 | `ft_div_mod` |
| ex12 | `ft_iterative_factorial` |
| ex13 | `ft_recursive_factorial` |
| ex14 | `ft_sqrt` |
| ex15 | `ft_putstr` |
| ex16 | `ft_strlen` |
| ex17 | `ft_strcmp` |
| ex18 | Display command-line arguments |
| ex19 | Sort and display parameters |
| ex20 | `ft_strdup` |
| ex21 | `ft_range` |
| ex22 | `ABS` macro |
| ex23 | `ft_point.h` with `struct` |
| ex24 | Makefile (`all`, `clean`, `fclean`, `re`) |
| ex25 | `ft_foreach` |
| ex26 | `ft_count_if` |
| ex27 | `ft_display_file` |

---

## ⚙️ How to Use

1. Clone the repository:

```bash
git clone https://github.com/your-username/piscine-reloaded.git
cd piscine-reloaded
```

2. Compile with `make`:

```bash
make
```

- `make all` → compile all exercises  
- `make clean` → remove `.o` files  
- `make fclean` → remove executables + `.o`  
- `make re` → recompile everything

3. Run an exercise:

```bash
./exXX   # where XX is the exercise number
```

4. (Optional) Run tests:

```bash
./tests/test_exXX.sh
```

---

## 🗂 Repository Structure

```text
piscine-reloaded/
├── ex00/
├── ex01/
├── ...
├── ex27/
├── Makefile
├── README.md
├── images/      # optional images (e.g., score)
├── resources/   # exercise PDFs / docs (optional)
└── tests/       # test scripts (optional)
```

---

## 🛠 Requirements

- C compiler (`gcc`)  
- `make`  
- Unix/Linux/macOS environment  
- (Optional) bash/zsh for scripts  

---

## 🏆 My Score

Here you can add your Piscine Reloaded score.  
Include a screenshot of your evaluation:

![My Score](images/score.png)

> Replace `images/score.png` with the actual path to your screenshot.  
> You can create an `images/` folder and add the screenshot there for better organization.

---

## 🤝 Contributing

To contribute, follow these steps:

1. Fork the project  
2. Create a branch (`git checkout -b feature-name`)  
3. Commit your changes (`git commit -m "new feature"`)  
4. Push the branch (`git push origin feature-name`)  
5. Open a Pull Request 🚀  

---

## 📜 License

This project is licensed under the **MIT License**.  
See [LICENSE](./LICENSE) for details.

---

## 👤 Author

- **[Your Name]**  
- 🌐 GitHub: [your-username](https://github.com/your-username)  
- 📧 Email: (optional)  

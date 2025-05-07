# 🔐 Caesar Cipher with Circular Queue 

This project explores the use of data structures in cryptography by implementing the **Caesar Cipher** using a **circular queue** in C. We designed this application to encrypt and decrypt messages efficiently while showcasing queue-based character rotation and modular arithmetic.


## 📖 Table of Contents

- [About the Project](#-about-the-project)
- [Features](#-features)
- [Sample Output](#-sample-output)
- [Project Structure](#-project-structure)
- [How to Compile and Run](#-how-to-compile-and-run)
- [GitHub Collaboration](#-github-collaboration)
- [License](#-license)


## 🧠 About the Project

The **Caesar Cipher** is a classic encryption technique where each letter in a message is shifted a fixed number of positions through the alphabet. We use a **circular queue** to simulate the alphabet and allow easy wrap-around during encryption and decryption.

This project enhances our understanding of:

- Circular queues
- Character manipulation using ASCII
- Modular arithmetic
- Version control using GitHub


## ⚙️ Features

- ✅ Encrypt or decrypt messages using any integer shift key
- ✅ Supports both positive and negative keys
- ✅ Preserves uppercase and lowercase letters
- ✅ Ignores non-letter characters like spaces and punctuation
- ✅ Demonstrates circular queue rotation logic

## 🧪 Sample Output

Encryption (E) or Decryption (D)?: E
Enter your message: HELLO WORLD
Enter shift key: 3
*****************************
Encrypted Message: KHOOR ZRUOG

Encryption (E) or Decryption (D)?: D
Enter your message: KHOOR ZRUOG
Enter shift key: 3
*****************************
Original Message: HELLO WORLD


## 📁 Project Structure

Caesar-Cipher-Group/
├── main.c          # Main application logic
├── queue.c         # Circular queue logic and helper functions
├── queue.h         # Queue header file
├── README.md       # Project documentation

## 🧰 How to Compile and Run

### Compile

Using GCC:

```bash
gcc main.c queue.c -o caesar
```

### Run

```bash
./caesar
```


## 🌐 GitHub Collaboration

This project is made possible through the collaboration of the following team members:

* **queue setup **
  * [Chamara Perera ](https://github.com/Chamaracperera)
* ** Encryption logic**
  * [Sathsarani Geethamali](https://github.com/Sathsarani2002)
* **Decryption logic**
  * [Chanuli Sandanayake](https://github.com/Chanuli-Sandanayake)


### Git Workflow:

* 🔄 Branching (`feature/encryption`, `feature/testing`, etc.)
* ✅ Commit logs for each implementation step
* 🔀 Pull requests and code review for merging
* 👥 Contributor history for tracking individual work

### Repository:

[🔗 GitHub Repository](https://github.com/yourusername/Caesar-Cipher-Group)


## 📜 License

This project is for academic and educational purposes only.
© 2025 Caesar Cipher Group – All rights reserved.




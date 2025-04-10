# 🧠 Word_Collector

A low-level, no-dependency **word frequency analyzer** built in **pure C**.  
`Word_Collector` parses a text string, normalizes words, removes punctuation, and displays each word’s frequency — all without using `string.h` or external libraries.

> 🔧 Built from scratch to strengthen core programming logic and simulate NLP basics the Red Team way.

---

## 🚀 Features

- 🔤 Converts uppercase to lowercase
- ✂️ Removes punctuation manually (`.`, `,`, `!`, etc.)
- 🧱 Stores words in a 2D character array
- 🔁 Compares words without `strcmp()`
- 📊 Tracks and displays frequency counts
- 🚫 Uses no helper libraries (no `string.h`, no `strtok()`)

---

## 🧪 Sample Output

```
 1. red         <-- 5 times occurred
 2. teaming     <-- 3 times occurred
 3. is          <-- 1 times occurred
 4. thrilling   <-- 1 times occurred
...
```

---

## 📜 Usage

Compile and run:

```bash
gcc -o word_collector word_collector.c
./word_collector
```

---

## 🛑 License & Permissions

> ⚠️ This project is the **intellectual property** of **Jerome Goldwin M.**  
> Shared only for educational insight and personal demonstration purposes.

- **Not open-source.**
- **Do not** reuse, modify, redistribute, or rehost any part of the code or project.
- Refer to [LICENSE.txt](./LICENSE.txt) for full legal terms.

---

## ✍️ Author

**Jerome Goldwin M.**  
Cybersecurity & Systems Programmer  
📧 jerome.goldwin@gmail.com  
🔗 [GitHub](https://github.com/Jerome-Goldwin)

---

_“Respect the struct. Master the class.” — JGM_


# 💾 Mini Database System (C++)

A simple command-line based database system built using C++.
It demonstrates core programming concepts like Object-Oriented Design, data structures, and file handling.

---

## 🚀 Features

* ➕ Insert Record
* ❌ Delete Record
* ✏️ Update Record
* 🔍 Search Record (Optimized using `map`)
* 📄 Display All Records
* 🚫 Prevent Duplicate IDs
* 💾 Persistent Storage using File Handling

---

## 🧠 Tech Concepts Used

* **Object-Oriented Programming (OOP)**
* **Data Structures**

  * `vector` → Data storage
  * `map` → Fast search (indexing)
* **File Handling**
* **Modular Design (Header + CPP separation)**

---

## 🏗️ Project Structure

```
MiniDB/ 
│ 
├── src/ # Source files (.cpp) 
├── include/ # Header files (.h) 
├── data/ # Data storage (ignored by git) 
├── .gitignore
└── README.md
```
---

## ⚙️ How to Run

### 1️⃣ Compile

```
g++ src/*.cpp -o app
```

### 2️⃣ Run

```
./app
```

---

## 📂 Data Storage

* Records are stored in:

```
data/records.txt
```

---

## 💡 Design Approach

* Used **vector** for storing records
* Used **map as an index** for fast lookup
* Built a layered architecture:

  * UI → Database → Manager → Storage

---

## 📌 Sample Menu

```
1. Add Record
2. Delete Record
3. Update Record
4. Search Record
5. Display All Records
6. Exit
```

---

## 🔥 Future Improvements

* Input validation system
* Support for names with spaces
* Sorting & filtering
* CSV/JSON storage

---

## 👨‍💻 Author

* Sumanth G

---

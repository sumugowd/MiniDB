# 💾 Mini Database System (C++)

A command-line based database system built using C++.
This project demonstrates object-oriented design, efficient data handling using STL, and persistent storage using file handling.

---

## 🚀 Features

* ➕ Insert Record
* ❌ Delete Record
* ✏️ Update Record
* 🔍 Search Record (optimized using `map`)
* 📄 Display All Records
* 🚫 Prevent Duplicate IDs
* 💾 Persistent Storage using file handling
* ✅ Input validation and error handling

---

## 🧠 Tech Concepts Used

* **Object-Oriented Programming (OOP)**
* **Data Structures**

  * `vector` → Record storage
  * `map` → Fast lookup (indexing)
* **File Handling** (`ifstream`, `ofstream`)
* **Modular Design** (Header + CPP separation)
* **Input Handling & Validation**

---

## 🏗️ Project Structure

```
MiniDB/
│
├── src/              # Source files (.cpp)
├── include/          # Header files (.h)
├── data/             # Data storage (ignored by git)
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

* Data is:

  * Loaded at startup
  * Saved automatically after each operation

---

## 💡 Design Approach

The project follows a layered and modular architecture:

```
UserInterface → Database → RecordManager → FileManager
                              ↓
                         SearchEngine
```

### Key Design Decisions

* Used **vector** for storing records in memory
* Used **map as an index** for efficient search operations
* Separated responsibilities into different classes:

  * `Record` → Data model
  * `RecordManager` → CRUD operations
  * `SearchEngine` → Fast lookup using map
  * `FileManager` → File persistence
  * `Validator` → Business rule validation
  * `InputHelper` → Safe input handling
  * `Database` → Controller layer
  * `UserInterface` → CLI interaction

---

## 📌 Sample Menu

```
===== Mini Database System =====
1. Add Record
2. Delete Record
3. Update Record
4. Search Record
5. Display All Records
6. Exit
```

---

## 🧪 Example Record Format

```
101 Sumu 21
102 Ravi Kumar 22
```

---

## 🔍 Performance Note

* Initial search using `vector` → **O(n)**
* Optimized using `map` → **O(log n)**

---

## 🔥 Future Improvements

* Sorting and filtering options
* Export to CSV/JSON
* Pagination for large datasets
* Logging system
* Database integration (SQLite)

---

## 👨‍💻 Author

**Sumanth G**

---

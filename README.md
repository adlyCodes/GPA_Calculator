# 🎓 GPA Calculator in C

A simple command-line **GPA calculator** written in the C programming language. This program takes the number of courses, grades, and credit hours as input and calculates the Grade Point Average (GPA) based on a custom scale. It then displays the GPA, corresponding letter grade, and the total achieved credit hours.

---

## 🚀 Features

- Accepts grades and credit hours for any number of courses.
- Validates input for grades (0–100) and credit hours (1–5).
- Converts numeric grades to grade points based on a defined scale.
- Computes weighted GPA and displays:
  - The GPA value (to 2 decimal places).
  - Letter grade (A–F).
  - Total credit hours earned.

---

## 🧮 Grade Conversion Scale

| Score Range | Grade Points |
|-------------|---------------|
| 0–49        | 0.0           |
| 50–52       | 3.0           |
| 53–55       | 4.0           |
| 56–59       | 5.0           |
| 60–64       | 6.0           |
| 65–69       | 7.0           |
| 70–74       | 8.0           |
| 75–79       | 9.0           |
| 80–84       | 10.0          |
| 85–89       | 11.0          |
| 90–94       | 11.5          |
| 95–100      | 12.0          |

> 🔢 The final GPA is normalized to a 0–4.0 scale by dividing the total points by 3.

---

## 🖥️ How to Compile and Run

### 🛠 Compile

```bash
gcc -o gpa_calculator gpa_calculator.c
```

### ▶ Run

```bash
./gpa_calculator
```

---

## 📥 Sample Input

```
Enter the number of courses in your semester: 3
Enter the grade for course 1: 80
Enter the credit hours for course 1: 3
Enter the grade for course 2: 65
Enter the credit hours for course 2: 2
Enter the grade for course 3: 90
Enter the credit hours for course 3: 4
```

---

## 📤 Sample Output

```
Your GPA: 3.52, Your letter Grade: B (Well-done)
Total achieved Credit Hours: 9.00
```

---

## ✅ Input Validation

- ✅ Grades must be between **0 and 100**.
- ✅ Credit hours must be between **1 and 5**.
- ✅ Number of courses must be **positive**.

---

## 📄 License

This project is open-source and free to use.

---

## 🙋‍♂️ Author

**Ahmed Hossam Eldin Adly Abdelfattah**

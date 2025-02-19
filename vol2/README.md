# Bit By Bit - Vol 2

Second Edition of Bit By Bit

- Date: 20th February 2025
- Time: 11:30 am onwards
- Venue: AISSMS IOTI, Room 112, 1st Floor

Host: Aditya Godse

---

## **1. Lexicographically Smallest Palindrome**

### **Problem Description:**

Given a string **s**, transform it into the **lexicographically smallest palindrome** by replacing characters in the string. You can only replace characters such that the resulting string is a palindrome.

### **Input Format:**

- A single line containing string **s** of length **n**.

### **Output Format:**

- A single string, the **lexicographically smallest palindrome** possible.

### **Constraints:**

- **1 ≤ n ≤ 1000**
- **s** consists of lowercase English letters only.

### **Sample Test Case:**

#### **Input:**

```
bcaacb
```

#### **Output:**

```
abccba
```

---

## **2. Remove Duplicates from Sorted Array**

### **Problem Description:**

Given a **sorted** integer array, remove duplicate elements **in-place**, so that each element appears **only once**. Return the updated array **without extra space**.

### **Input Format:**

- First line: Integer **n** (size of the array).
- Second line: **n** space-separated integers (sorted array).

### **Output Format:**

- The modified array **without duplicates**, maintaining the original order.

### **Constraints:**

- **1 ≤ n ≤ 10^4**
- **-10^4 ≤ arr[i] ≤ 10^4**

### **Sample Test Case:**

#### **Input:**

```
6
1 1 2 2 3 3
```

#### **Output:**

```
1 2 3
```

---

## **3. Intersection of Two Arrays**

### **Problem Description:**

Given two arrays, return the **intersection** of the arrays (i.e., common elements **without duplicates**).

### **Input Format:**

- First line: Integer **n** (size of array1).
- Second line: **n** space-separated integers (array1).
- Third line: Integer **m** (size of array2).
- Fourth line: **m** space-separated integers (array2).

### **Output Format:**

- Space-separated integers representing the intersection of the arrays in **any order**.

### **Constraints:**

- **1 ≤ n, m ≤ 1000**
- **-10^4 ≤ arr[i] ≤ 10^4**

### **Sample Test Case:**

#### **Input:**

```
4
1 2 3 4
4
3 4 5 6
```

#### **Output:**

```
3 4
```

---

## **4. Move Zeros to End**

### **Problem Description:**

Given an integer array **nums**, move all **0’s** to the end while maintaining the relative order of the **non-zero** elements.

### **Input Format:**

- First line: Integer **n** (size of the array).
- Second line: **n** space-separated integers.

### **Output Format:**

- The modified array with all **zeroes** at the end.

### **Constraints:**

- **1 ≤ n ≤ 10^4**

### **Sample Test Case:**

#### **Input:**

```
6
0 3 0 5 2 0
```

#### **Output:**

```
3 5 2 0 0 0
```

---

## **5. Merge Two Sorted Lists**

### **Problem Description:**

Given two **sorted** arrays, merge them into one **sorted** array.

### **Input Format:**

- First line: Integer **n** (size of array1).
- Second line: **n** space-separated integers (sorted).
- Third line: Integer **m** (size of array2).
- Fourth line: **m** space-separated integers (sorted).

### **Output Format:**

- A **single sorted array**.

### **Constraints:**

- **0 ≤ n, m ≤ 50**
- **-100 ≤ arr[i] ≤ 100**

### **Sample Test Case:**

#### **Input:**

```
3
1 3 5
4
2 4 6 8
```

#### **Output:**

```
1 2 3 4 5 6 8
```

---

## **6. Matrix Multiplication**

### **Problem Description:**

Given two matrices **A** and **B**, multiply them if multiplication is **possible**.

### **Input Format:**

- First line: Integers **n1 m1** (dimensions of matrix A).
- Next **n1** lines: Each contains **m1** space-separated integers.
- Next line: Integers **n2 m2** (dimensions of matrix B).
- Next **n2** lines: Each contains **m2** space-separated integers.

### **Output Format:**

- The resulting matrix **if multiplication is possible**.
- Otherwise, print `"Not Possible"`.

### **Constraints:**

- **1 ≤ n1, m1, n2, m2 ≤ 100**
- **-100 ≤ matrix elements ≤ 100**

### **Sample Test Case:**

#### **Input:**

```
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
```

#### **Output:**

```
58 64
139 154
```

---

## **7. Valid Parentheses**

### **Problem Description:**

Given a string containing **only** `()`, `{}`, and `[]`, check if it is **balanced**.

### **Input Format:**

- A **single string s** containing only the given brackets.

### **Output Format:**

- Print `"yes"` if balanced, otherwise `"no"`.

### **Constraints:**

- **1 ≤ s.length ≤ 1000**

### **Sample Test Case:**

#### **Input:**

```
()[]{}
```

#### **Output:**

```
yes
```

---

## **8. Collatz Sequence Simulation**

### **Problem Description:**

Simulate the **Collatz sequence**:

- If **n** is **even**, divide it by 2.
- If **n** is **odd**, multiply it by 3 and add 1.
- Repeat until **n = 1**.

### **Input Format:**

- A single integer **n**.

### **Output Format:**

- The sequence of numbers until **n = 1**.

### **Constraints:**

- **1 ≤ n ≤ 10^6**

### **Sample Test Case:**

#### **Input:**

```
3
```

#### **Output:**

```
3 10 5 16 8 4 2 1
```

---

## **9. Longest Repetition in a DNA Sequence**

### **Problem Description:**

Given a DNA sequence (a string composed of `A, C, G, T`), find the **length of the longest contiguous repetition**.

### **Input Format:**

- A **single string** containing **n** characters.

### **Output Format:**

- A **single integer** representing the length of the longest repetition.

### **Constraints:**

- **1 ≤ n ≤ 10^6**

### **Sample Test Case:**

#### **Input:**

```
ATTCGGGA
```

#### **Output:**

```
3
```

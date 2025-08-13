# Student Data Management in C

This is a simple C program to store and display student data (Name, Roll, CGPA) and save it into a file (`Studentdata.txt`).
It demonstrates the use of **file handling**, **string input using `fgets`**, and removing the newline character from user input.

## Features

* Input multiple students' details.
* Store student data in a `.txt` file.
* Automatically remove unwanted newline characters from string input.
* Formatted output of student details.
* Example of using `fgets` safely with strings.

## How It Works

1. The program asks how many students' data you want to store.
2. It takes:

   * Student Name (string)
   * Student Roll (integer)
   * Student CGPA (float)
3. Data is stored in a text file.
4. Reads and displays the entered data.

## File Structure

```
.
├── Studentdata.txt  # Output file storing the data
├── main.c           # C source code
└── README.md        # This file
```

## Sample Output

```
Enter how many data you want to store = 1
Entering student number 1 data -
Enter Student name -
Avirup Basak
Enter Student ROLL -
29
Enter Student CGPA -
6.3

Your entered data's are ->
Student number 1 data -
Student name - Avirup Basak
Student Roll - 29
Student CGPA - 6.3
```

## How to Compile & Run

```bash
gcc main.c -o student
./student
```

## License

This project is licensed under the **MIT License** – see the [LICENSE](LICENSE) file for details.

# HOP-SPITAL_RECORDS

This is a C++ program that simulates the registration page of a hospital. It allows the user to input their personal information and choose their designation (Doctor, Pharmacist, Nurse, or Support Staff), as well as their specialization if they are a Doctor.

There are three classes in the program: Landing_page and Registration_page. The Landing_page class calls the Main_menu() function, which displays the main menu of the hospital. The Registration_page class contains the functions regis() and designation(). The regis() function allows the user to input their personal information, which is then written into a file called registration_file.txt. The designation() function allows the user to choose their designation and specialization, which is also written into the registration_file.txt file.

The program uses the fstream library to write data to files. It also uses the system("cls") function to clear the console screen.

Overall, the program seems to be well-structured and follows good programming practices such as using classes and functions to modularize the code. However, there are some areas that can be improved, such as input validation and error handling. Additionally, the program could benefit from better user interface design to make it more user-friendly

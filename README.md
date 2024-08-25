# CS300
Problem Solving:
In the projects for CS 300, the core problem revolved around designing and implementing efficient data structures to 
manage and process academic course data. Project One focused on analyzing the efficiency of various data structures to
determine the best fit for storing and retrieving course information, especially considering operations like searching, 
sorting, and managing prerequisites. Project Two then built on this by implementing a solution using the chosen data 
structure to create a fully functional course planner application. The goal was to ensure that the application could 
efficiently load, sort, and display course information while handling user input gracefully.

Approach:
When approaching the problem, understanding the importance of data structures was crucial. The choice of data structure 
directly impacted the performance of the application. For instance, a map (or dictionary) was chosen in Project Two because
it provides fast lookups, which is essential for retrieving course information based on course numbers. This selection was 
guided by an analysis of time and space complexities. For example, operations like searching and inserting in a map 
generally have O(log n) time complexity, which is efficient for the expected operations in the course planner. Understanding 
these complexities helped ensure that the application would perform well even as the number of courses increased.

Overcoming Roadblocks:
Throughout the projects, several challenges arose. One significant roadblock was debugging issues related to file 
input/output. Initially, the program struggled with correctly parsing the CSV file, particularly when handling courses 
with multiple prerequisites. This issue was resolved by revisiting the file parsing logic, breaking it down into smaller, 
testable components, and methodically checking the parsing of each line. Additionally, optimizing the sorting algorithm 
to ensure that the course list was displayed in the correct order required careful consideration of the data structure's 
properties and how they interacted with the sort operation. Seeking additional resources on C++ file handling and data 
structures provided the necessary insights to overcome these challenges.

Software Design:
Working on these projects expanded my approach to software design by emphasizing the importance of efficiency and 
scalability in choosing data structures. I became more conscious of how different data structures could affect the overall 
performance of the application, particularly when dealing with large datasets. This experience reinforced the principle 
that good software design is not just about making something that works but making something that works well under 
various conditions. I now approach design with a mindset that considers the potential growth of data and the need for 
the software to remain performant over time.

Code Quality:
Through these projects, my approach to writing maintainable, readable, and adaptable code has evolved significantly. 
I started to place more emphasis on using clear and descriptive naming conventions, which made the code more self-explanatory.
Writing modular code became a priority, breaking down complex functions into smaller, reusable components. This not only 
made the code easier to understand but also easier to debug and extend in the future. Additionally, I improved my 
documentation practices, ensuring that each function and its purpose were well-documented, which is vital for future 
maintenance and for anyone else who might work on the code. These improvements in code quality are essential for developing 
software that can be easily adapted to meet changing requirements.

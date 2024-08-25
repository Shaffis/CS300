// Ryan Shaffer
// CS 300
// 8/23/24
// SNHU

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

// Structure to represent a course
struct Course {
    string courseNumber;
    string courseName;
    vector<string> prerequisites;
};

// Function to load the courses from a file
void loadCourses(string fileName, map<string, Course>& courses) {
    ifstream file(fileName);
    if (!file.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string courseNumber, courseName;

        getline(ss, courseNumber, ',');
        getline(ss, courseName, ',');

        Course course;
        course.courseNumber = courseNumber;
        course.courseName = courseName;

        string prerequisite;
        while (getline(ss, prerequisite, ',')) {
            course.prerequisites.push_back(prerequisite);
        }

        courses[courseNumber] = course;
    }

    file.close();
    cout << "Courses loaded successfully." << endl;
}

// Function to print the course list
void printCourseList(const map<string, Course>& courses) {
    for (const auto& coursePair : courses) {
        cout << coursePair.second.courseNumber << ", " << coursePair.second.courseName << endl;
    }
}

// Function to print information about a specific course
void printCourseInfo(const map<string, Course>& courses, string courseNumber) {
    auto it = courses.find(courseNumber);
    if (it != courses.end()) {
        cout << it->second.courseNumber << ", " << it->second.courseName << endl;
        if (!it->second.prerequisites.empty()) {
            cout << "Prerequisites: ";
            for (size_t i = 0; i < it->second.prerequisites.size(); ++i) {
                cout << it->second.prerequisites[i];
                if (i < it->second.prerequisites.size() - 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        }
        else {
            cout << "This course has no prerequisites." << endl;
        }
    }
    else {
        cout << "Course not found." << endl;
    }
}

int main() {
    map<string, Course> courses;
    int choice;

    do {
        cout << "\nWelcome to the course planner.\n" << endl;
        cout << "1. Load Data Structure." << endl;
        cout << "2. Print Course List." << endl;
        cout << "3. Print Course." << endl;
        cout << "9. Exit" << endl;
        cout << "\nWhat would you like to do? ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string fileName;
            cout << "Enter the file name: ";
            cin >> fileName;
            loadCourses(fileName, courses);
            break;
        }
        case 2:
            printCourseList(courses);
            break;
        case 3: {
            string courseNumber;
            cout << "What course do you want to know about? ";
            cin >> courseNumber;
            transform(courseNumber.begin(), courseNumber.end(), courseNumber.begin(), ::toupper);
            printCourseInfo(courses, courseNumber);
            break;
        }
        case 9:
            cout << "Thank you for using the course planner!" << endl;
            break;
        default:
            cout << choice << " is not a valid option." << endl;
            break;
        }
    } while (choice != 9);

    return 0;
}

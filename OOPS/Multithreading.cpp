#include <iostream>
#include <thread>
#include <chrono> // for std::this_thread::sleep_for

using namespace std;

// Function to be executed by thread 1
void task1() {
    for (int i = 1; i <= 5; i++) {
        cout << "Task 1 - Step " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(100)); // Simulates some work
    }
}

// Function to be executed by thread 2
void task2() {
    for (int i = 1; i <= 5; i++) {
        cout << "Task 2 - Step " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(100)); // Simulates some work
    }
}

int main() {
    // Create threads to run task1 and task2 concurrently
    thread thread1(task1);
    thread thread2(task2);

    // Wait for both threads to finish execution
    thread1.join();
    thread2.join();

    cout << "Both tasks completed." << endl;

    return 0;
}


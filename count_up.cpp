#include <iostream>
#include <thread>
#include <chrono>

// Function to count up from 0 to 20
void count_up() {
    for (int i = 0; i <= 20; ++i) {
        std::cout << "Counting up: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    }
}

// Function to count down from 20 to 0
void count_down() {
    for (int i = 20; i >= 0; --i) {
        std::cout << "Counting down: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    }
}

int main() {
    // Create a thread to count up
    std::thread t1(count_up);
    // Wait for the first thread to finish
    t1.join();

    // Create a thread to count down
    std::thread t2(count_down);
    // Wait for the second thread to finish
    t2.join();

    return 0;
}

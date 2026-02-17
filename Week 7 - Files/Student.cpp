// Week 7: File Handling (Persistent Storage)
// Concepts: Writing to files (ofstream) and Reading from files (ifstream)
#include <iostream>
#include <fstream> // Library for File Stream (handling files)
#include <string>
using namespace std;

int main() {
    string studentName;
    string fileName = "registry.txt";

    cout << "=== University Registry System ===" << endl;

    // --- PART 1: WRITING TO A FILE ---
    // 'ofstream' stands for Output File Stream (Program -> File)
    ofstream outFile(fileName); 

    if (outFile.is_open()) {
        cout << "Enter student name to register: ";
        getline(cin, studentName);

        // We use outFile just like we use cout
        outFile << studentName << endl;
        
        outFile.close(); // Always close the file to save changes
        cout << "[System]: Name successfully saved to " << fileName << endl;
    } else {
        cout << "[Error]: Could not create the file." << endl;
    }

    cout << "\n--- Restarting System (Simulated) ---\n" << endl;

    // --- PART 2: READING FROM A FILE ---
    // 'ifstream' stands for Input File Stream (File -> Program)
    ifstream inFile(fileName);
    string dataFromFile;

    if (inFile.is_open()) {
        cout << "Reading registered students from storage..." << endl;
        
        // Read the line from the file and put it into dataFromFile
        while (getline(inFile, dataFromFile)) {
            cout << "Found Student: " << dataFromFile << endl;
        }
        
        inFile.close();
    } else {
        cout << "[Error]: Could not find the registry file." << endl;
    }

    // Exit sequence
    cout << "\nPress ENTER to exit...";
    // We don't need cin.ignore() here because getline was used last, 
    // but we keep it for consistency in case students add cin >> earlier.
    cin.get();

    return 0;
}
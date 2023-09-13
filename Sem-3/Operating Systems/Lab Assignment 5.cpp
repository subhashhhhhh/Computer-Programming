#include <iostream>
using namespace std;
struct Process {
    public:
    int id;
    int arrivalTime;
    int burstTime;
    int waitingTime;
};

void sortByArrivalTime(Process processes[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(processes[j].arrivalTime > processes[j+1].arrivalTime){
                swap(processes[j], processes[j+1]);
            }
        }
    }
}

void sortByBurstTime(Process processes[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(processes[j].burstTime > processes[j+1].burstTime){
                swap(processes[j], processes[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    Process processes[n];
    
    for(int i=0;i<n;i++){
        processes[i].id = i+1;
        cout << "Enter the arrival time of process " << i+1 << ": ";
        cin >> processes[i].arrivalTime;
        cout << "Enter the burst time of process " << i+1 << ": ";
        cin >> processes[i].burstTime;
        processes[i].waitingTime = 0;
    }

    int choice;
    cout << "Select Scheduling Algorithm:" << endl;
    cout << "1. FCFS" << endl;
    cout << "2. SJF (Non-preemptive)" << endl;
    cout << "3. SJF (Preemptive)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

      if (choice == 1) {
        sortByArrivalTime(processes, n);  // FCFS
    } else if (choice == 2) {
        sortByBurstTime(processes, n);  // SJF (Non-preemptive)
    } else if (choice == 3) {
        sortByArrivalTime(processes, n); // SJF (Preemptive)
        int currentTime = 0;
        int completed = 0;
        while (completed < n) {
            int shortest = -1;
            for (int i = 0; i < n; i++) {
                if (processes[i].arrivalTime <= currentTime && processes[i].burstTime > 0) {
                    if (shortest == -1 || processes[i].burstTime < processes[shortest].burstTime) {
                        shortest = i;
                    }
                }
            }
            if (shortest == -1) {
                currentTime++;
            } else {
                processes[shortest].burstTime--;
                currentTime++;
                if (processes[shortest].burstTime == 0) {
                    completed++;
                    processes[shortest].waitingTime = currentTime - processes[shortest].arrivalTime - processes[shortest].burstTime;
                }
            }
        }
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

 float totalWaitingTime = 0;
    cout << "Process Execution Sequence: ";
    for (int i = 0; i < n; i++) {
        cout << "P" << processes[i].id << " ";
        totalWaitingTime += processes[i].waitingTime;
    }
    float averageWaitingTime = totalWaitingTime / n;
    cout << "\nAverage Waiting Time: " << averageWaitingTime << endl;

    return 0;
}
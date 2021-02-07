//////////////////////////////////////////////////////////////////
//					 Caitlin J. Corbin							//
//																//
//			   M01 Programming Assignment - Part 2				//
//																//
//					 "Create a personal PC"						//
//////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

class personalPC {
private:
	string manufacturer, model, cpu, gpu, operatingSystem, color, serialNumber;
	float memory, speed, diskSize;
	bool bootState;


public:
	// Constructor
	personalPC(string manufacturer, string model, string cpu, string gpu, string operatingSystem, string color,
		string serialNumber, float memory, float speed, float diskSize, bool bootState) {

		this->manufacturer = manufacturer;
		this->model = model;
		this->cpu = cpu;
		this->gpu = gpu;
		this->operatingSystem = operatingSystem;
		this->color = color;
		this->serialNumber = serialNumber;
		this->memory = memory;
		this->speed = speed;
		this->diskSize = diskSize;
		this->bootState = bootState;
	}

	// Accessor methods 
	string getManufacturer() {
		return manufacturer;
	}
	string getModel() {
		return model;
	}
	string getCPU() {
		return cpu;
	}
	string getGPU() {
		return gpu;
	}
	string getOperatingSystem() {
		return operatingSystem;
	}
	string getColor() {
		return color;
	}
	string getSerialNumber() {
		return serialNumber;
	}
	float getMemory() {
		return memory;
	}
	float getSpeed() {
		return speed;
	}
	float getDiskSize() {
		return diskSize;
	}
	bool getBootState() {
		return bootState;
	}

	// Mutator methods 
	void setManufacturer(string newManufacturer) {
		manufacturer = newManufacturer;
	}
	void setModel(string newModel) {
		model = newModel;
	}
	void setCPU(string newCPU) {
		cpu = newCPU;
	}
	void setGPU(string newGPU) {
		gpu = newGPU;
	}
	void setOperatingSystem(string newOperatingSystem) {
		operatingSystem = newOperatingSystem;
	}
	void setColor(string newColor) {
		color = newColor;
	}
	void setSerialNumber(string newSerialNumber) {
		serialNumber = newSerialNumber;
	}
	void setMemory(float newMemory) {
		memory = newMemory;
	}
	void setSpeed(float newSpeed) {
		cpu = newSpeed;
	}
	void setDiskSize(float newDiskSize) {
		diskSize = newDiskSize;
	}
	void setBootState(float newBootState) {
		bootState = newBootState;
	}
};

int main() {
	cout << "-|-|-Personal PC Program-|-|-" << endl;
	cout << "-----------------------------" << endl;

	// Default constructor settings of obj1
	personalPC obj1("Lenovo", "Legion", "AMD Ryzen 4800", "Geforce RTX", "Windows 10", "black",
		"123321456", 1.0, 144.0, 10, 0);

	// Loop that allows user to change values
	while (true) {

		// Initialize & Declare tool variables
		int i = 1;
		string input, n, N, y, Y;

		// Manufacturer
		cout << "Enter the manufacturer: ";
		string newManufacturer;
		getline(cin, newManufacturer);
		while (newManufacturer.empty()) {
			cout << "Enter the manufacturer: ";
			getline(cin, newManufacturer);
			}
		obj1.setManufacturer(newManufacturer);

		// Model
		cout << "Enter the model: ";
		string newModel;
		getline(cin, newModel);
		while (newModel.empty()) {
			cout << "Enter the model: ";
			getline(cin, newModel);
		}
		obj1.setModel(newModel);

		// Memory
		cout << "Select the memory: " << endl;
		cout << "[0] - 2 GB, [1] - 4 GB, [2] - 8 GB, [3] - 16 GB, [4] - 32 GB, [5] - 64 GB, [6] - 128 GB " << endl;
		int memoryChoice;
		cin >> memoryChoice;
		// input validation to check if a number that is bigger than 0 and less/equal to 6
		while (cin.fail() || memoryChoice < 0 || memoryChoice > 6) {
			cout << "Error! Invalid option. Enter select the appropriate memory: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> memoryChoice;
		}
		switch (memoryChoice) {
		case 0:
			obj1.setMemory(2);
			break;
		case 1:
			obj1.setMemory(4);
			break;
		case 2:
			obj1.setMemory(8);
			break;
		case 3:
			obj1.setMemory(16);
			break;
		case 4:
			obj1.setMemory(32);
			break;
		case 5:
			obj1.setMemory(64);
			break;
		case 6:
			obj1.setMemory(128);
			break;
		}
		cout << "Memory is now: " << obj1.getMemory() << " GB" << endl;

		// Serial Number
		cout << "Enter the serial number: ";
		string newSerialNumber;
		getline(cin, newSerialNumber);
		while (newSerialNumber.empty()) {
			cout << "Enter the serial number: ";
			getline(cin, newSerialNumber);
		}
		obj1.setSerialNumber(newSerialNumber);

		// CPU
		cout << "Enter the computer's CPU model: ";
		string newCPU;
		getline(cin, newCPU);
		while (newCPU.empty()) {
			cout << "Enter the CPU: ";
			getline(cin, newCPU);
		}
		obj1.setCPU(newCPU);

		// Speed
		cout << "Enter the computer speed: ";
		float newSpeed;
		cin >> newSpeed;
		// input validation to check if a number that is bigger than 0
		while (cin.fail() || newSpeed <= 0) {
			cout << "Error! Positive numbers only. Enter the computer speed: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> newSpeed;
		}
		obj1.setSpeed(newSpeed);
		cout << "Computer Speed: " << obj1.getSpeed() << endl;

		// Disk Size
		cout << "Select the Disk Size: " << endl;
		cout << "[0] - 250 GB, [1] - 480 GB, [2] - 1 TB, [3] - 2 TB, [4] - 4 TB, [5] - 8 TB, [6] - 12 TB" << endl;
		int dsChoice;
		cin >> dsChoice;
		// input validation to check if a number that is bigger than 0 and less/equal to 6
		while (cin.fail() || dsChoice < 0 || dsChoice > 6) {
			cout << "Error! Invalid option. Select the appropriate disk size: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> dsChoice;
		}
		switch (dsChoice) {
		case 0:
			obj1.setDiskSize(0.250);
			break;
		case 1:
			obj1.setDiskSize(0.480);
			break;
		case 2:
			obj1.setDiskSize(1.0);
			break;
		case 3:
			obj1.setDiskSize(2.0);
			break;
		case 4:
			obj1.setDiskSize(4.0);
			break;
		case 5:
			obj1.setDiskSize(8.0);
			break;
		case 6:
			obj1.setDiskSize(12.0);
			break;
		}
		cout << "Disk Size: " << obj1.getDiskSize() << endl;

		// Display current values of obj1
		cout << endl;
		cout << "Current input" << endl;
		cout << "-------------" << endl;
		cout << "Manufacturer - " << obj1.getManufacturer() << "\nModel - " << obj1.getModel() << "\nSerial Number - " << obj1.getSerialNumber()
			<< "\nCPU - " << obj1.getCPU() << "\nSpeed: - " << obj1.getSpeed() << "\nMemory - " << obj1.getMemory() 
			<< "\nDisk Form Factor - " << "\nDisk Size - " << obj1.getDiskSize() << endl;

		// Power the computer on/off
		cout << endl;
		cout << "Enter 0 to power off the computer." << endl;
		cout << "Enter 1 to power on the computer." << endl;
		cout << "Enter 2 to reboot the computer." << endl;
		int userChoice;
		cin >> userChoice;
		// input validation to check if a number that is 0 or 1
		while (cin.fail() || userChoice < 0 || userChoice > 2) {
			cout << "Error! Select the appropritate option: " << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> userChoice;
		}
		switch (userChoice) {
		case 0:
			cout << "Powering off . . . computer is now off." << endl;
			break;
		case 1:
			cout << "Powering on . . . computer is now on." << endl;
			break;
		case 2:
			cout << "Rebooting . . . computer has been rebooted." << endl;
			break;
		}

		// Option to change values
		cout << "Change values? (y / n)" << endl;
		cin >> input;
		if (input == "n" or input == "N") {
			cout << "Program terminating. . ." << endl;
			exit(0);
		}
	}
	return 0;
}
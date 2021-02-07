#pragma once

class personalPC {
private:
	string manufacturer, model, cpu, gpu, operatingSystem, color;
	float serialNumber, memory, speed, diskSize;
	bool bootState;


public:
	// Constructor
	personalPC(string manufacturer, string model, string cpu, string gpu, string operatingSystem, string color,
		float serialNumber, float memory, float speed, float diskSize, bool bootState) {

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
	float getSerialNumber() {
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
	void setSerialNumber(float newSerialNumber) {
		serialNumber = newSerialNumber;
	}
	void setMemory(float newMemory) {
		memory = newMemory;
	}
	void setSpeed(float newSpeed) {
		cpu = newCPU;
	}
	void setDiskSize(float newDiskSize) {
		diskSize = newDiskSize;
	}
	void setBootState(float newBootState) {
		bootState = newBootState;
	}
};
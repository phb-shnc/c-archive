//* Vehicle Service Management System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VEHICLES 5

typedef struct {
	char date[20];
	float serviceCost;
} ServiceRecord;

typedef struct {
	char plateNumber[15];
	char ownerName[50];
	char serviceType[30];
	ServiceRecord sr;
} Vehicle;

void displayVehicles(Vehicle v[], int size);
void displayServiceRecords(Vehicle v[], int size);
void saveFile(Vehicle v[], int size);
void readFileAndSearch();

int main() {
	Vehicle v[MAX_VEHICLES];
	
	for (int i = 0; i < MAX_VEHICLES; i++) {
		printf("Vehicle %d\n", i + 1);
		
		printf("Plate Number: ");
		scanf(" %[^\n]s", v[i].plateNumber);
		
		printf("Owner Name: ");
		scanf(" %[^\n]s", v[i].ownerName);
		
		printf("Service Type: ");
		scanf(" %[^\n]s", v[i].serviceType);
		
		printf("Service Date (DD/MM/YYYY): ");
		scanf(" %[^\n]s", v[i].sr.date);
		
		printf("Service Cost: ");
		scanf("%f", &v[i].sr.serviceCost);
		
		printf("\n");
	}
	
	printf("---Vehicle Records---\n\n");
	displayVehicles(v, MAX_VEHICLES);
	
	printf("---Service Records w/ Service Cost above 500---\n\n");
	displayServiceRecords(v, MAX_VEHICLES);
	
	printf("---Save To File---\n\n");
	saveFile(v, MAX_VEHICLES);
	
	printf("---Read File and Search---\n\n");
	readFileAndSearch();
	
	return 0;
}

void displayVehicles(Vehicle v[], int size) {
	for(int i = 0; i < size; i++) {
		printf("Plate Number: %s\n", v[i].plateNumber);
		printf("Owner Name: %s\n", v[i].ownerName);
		printf("Service Type: %s\n", v[i].serviceType);
		printf("Service Date: %s\n", v[i].sr.date);
		printf("Service Cost: %.2f\n\n", v[i].sr.serviceCost);
	}
}

void displayServiceRecords(Vehicle v[], int size) {
	int found = 0;
	
	for(int i = 0; i < size; i++) {
		if (v[i].sr.serviceCost > 500.0) {
			printf("Plate Number: %s\n", v[i].plateNumber);
			printf("Owner Name: %s\n", v[i].ownerName);
			printf("Service Type: %s\n", v[i].serviceType);
			printf("Service Date: %s\n", v[i].sr.date);
			printf("Service Cost: %.2f\n\n", v[i].sr.serviceCost);
			
			found = 1;
		}
	}
	
	if (!found) {
		printf("No service records found with a cost above 500.\n");
	}
}

void saveFile(Vehicle v[], int size) {
	FILE *file = fopen("service.txt", "w");
	if (file == NULL) {
		printf("Error opening file for writing.\n");
		return;
	}
	
	for (int i = 0; i < size; i++) {
		fprintf(file, "%s\n", v[i].plateNumber);
		fprintf(file, "%s\n", v[i].ownerName);
		fprintf(file, "%s\n", v[i].serviceType);
		fprintf(file, "%s\n", v[i].sr.date);
		fprintf(file, "%.2f\n", v[i].sr.serviceCost);
	}
	
	fclose(file);
	
	printf("Records successfully saved to 'service.txt'.\n\n");
}

void readFileAndSearch() {
	FILE *file = fopen("service.txt", "r");
	if (file == NULL) {
		printf("Error opening file for reading.\n");
		return;
	}
	
	char searchPlate[15];
	printf("Enter Plate Number to search: ");
	scanf(" %[^\n]s", searchPlate);
	
	Vehicle temp;
	int found = 0;
	
	while (fscanf(file, " %[^\n]s", temp.plateNumber) != EOF) {
		fscanf(file, " %[^\n]s", temp.ownerName);
		fscanf(file, " %[^\n]s", temp.serviceType);
		fscanf(file, " %[^\n]s", temp.sr.date);
		fscanf(file, "%f", &temp.sr.serviceCost);
		
		if (strcmp(temp.plateNumber, searchPlate) == 0) {
			printf("\nRecord Found!\n\n");
			printf("Owner Name: %s\n", temp.ownerName);
			printf("Service Type: %s\n", temp.serviceType);
			printf("Service Date: %s\n", temp.sr.date);
			printf("Service Cost: %.2f\n\n", temp.sr.serviceCost);
			
			found = 1;
			break;
		}
	}
	
	if (!found) {
		printf("Vehicle with Plate Number '%s' not found.\n", searchPlate);
	}
	
	fclose(file);
}
//* Smart Logistics and Delivery System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
	int estimatedDays;
	float shippingFee;
} DeliveryStatus;

typedef struct {
	char trackingNumber[50];
	char recipientName[50];
	float weight;
	DeliveryStatus ds;
} Parcel;

void displayParcels(Parcel p[], int size);
void displayPremium(Parcel p[], int size);
void newParcel(Parcel p[], int size);
void updateParcel(Parcel p[], int size);
void saveRecords(Parcel p[], int size);
void loadRecords();

int main() {
	int count;
	printf("Enter how many parcel records will be entered: ");
	scanf("%d", &count);
	
	Parcel p[MAX];
	
	for (int i = 0; i < count; i++) {		
		printf("\nEnter details for Parcel %d\n", i + 1);
		
		printf("Enter tracking number: ");
		scanf(" %[^\n]s", p[i].trackingNumber);
		
		printf("Enter recipient name: ");
		scanf(" %[^\n]s", p[i].recipientName);
		
		printf("Enter weight (kg): ");
		scanf("%f", &p[i].weight);
		
		printf("Enter estimated delivery days: ");
		scanf("%d", &p[i].ds.estimatedDays);
		
		printf("Enter shipping fee: ");
		scanf("%f", &p[i].ds.shippingFee);
		
		printf("\n");
	}
	
	int choice;
	
	do {
		printf("\n\n===== SMART LOGISTICS MENU =====\n\n");
		
		printf("1. Display All Parcels\n");
		printf("2. Display Premium Shipments (Fee > 500)\n");
		printf("3. Add New Parcel Record\n");
		printf("4. Update Delivery Status by Tracking Number\n");
		printf("5. Save Records to File\n");
		printf("6. Load Records from File\n");
		printf("7. Exit\n");
		
		printf("Enter Choice: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
				displayParcels(p, count);
				break;
			case 2:
				displayPremium(p, count);
				break;
			case 3:
				if (count < MAX) {
					newParcel(p, count);
					count++;	
				}
				break;
			case 4:
				updateParcel(p, count);
				break;
			case 5:
				saveRecords(p, count);
				break;
			case 6:
				loadRecords();
				break;
			case 7:
				printf("\n\nExiting Program...\n\n");
				break;
		}
	} while (choice !=7);
	
	return 0;
}

void displayParcels(Parcel p[], int size) {
	for (int i = 0; i < size; i++) {
		printf("\n\n===== PARCEL RECORDS =====\n\n");
		
		printf("\nParcel %d\n", i + 1);
		printf("Tracking: %s\n", p[i].trackingNumber);
		printf("Recipient: %s\n", p[i].recipientName);
		printf("Weight: %.2f kg\n", p[i].weight);
		printf("Est. Delivery: %d days\n", p[i].ds.estimatedDays);
		printf("Shipping Fee: %.2f PHP\n\n", p[i].ds.shippingFee);
	}
}
void displayPremium(Parcel p[], int size) {
	printf("\n\n===== PREMIUM SHIPMENTS =====\n\n");
	
	int found = 0;
	
	for (int i = 0; i < size; i++) {
		if (p[i].ds.shippingFee > 500) {
			printf("Tracking: %s\n", p[i].trackingNumber);
			printf("Recipient: %s\n", p[i].recipientName);
			printf("Weight: %.2f kg\n", p[i].weight);
			printf("Est. Delivery: %d days\n", p[i].ds.estimatedDays);
			printf("Shipping Fee: %.2f PHP\n\n", p[i].ds.shippingFee);
			
			found = 1;
			break;
		}
	}
	
	if (!found) {
		printf("No Premium Shipments\n");
	}
}
void newParcel(Parcel p[], int size) {
	printf("\n\nAdd new parcel %d\n", size + 1);
	
	printf("Enter tracking number: ");
	scanf(" %[^\n]s", p[size].trackingNumber);
	
	printf("Enter recipient name: ");
	scanf(" %[^\n]s", p[size].recipientName);
	
	printf("Enter weight (kg): ");
	scanf("%f", &p[size].weight);
	
	printf("Enter estimated delivery days: ");
	scanf("%d", &p[size].ds.estimatedDays);
	
	printf("Enter shipping fee: ");
	scanf("%f", &p[size].ds.shippingFee);
}
void updateParcel(Parcel p[], int size) {
	char trackNumSearch[50];
	printf("Enter Tracking Number to Search: ");
	scanf(" %[^\n]s", trackNumSearch);
	
	int found = 0;
	
	for (int i = 0; i < size; i++) {
		if (strcmp(p[i].trackingNumber, trackNumSearch) == 0) {
			printf("Parcel Found!\n");
						
			printf("Enter recipient name: ");
			scanf(" %[^\n]s", p[i].recipientName);
			
			printf("Enter weight (kg): ");
			scanf("%f", &p[i].weight);
			
			printf("Enter estimated delivery days: ");
			scanf("%d", &p[i].ds.estimatedDays);
			
			printf("Enter shipping fee: ");
			scanf("%f", &p[i].ds.shippingFee);
			
			found = 1;
		}
	}
	
	if (!found) {
		printf("Parcel Not Found\n");
	}
}
void saveRecords(Parcel p[], int size) {
	FILE *file = fopen("logistics.txt", "w");
	if (file == NULL) {
		printf("\nError opening file for writing\n\n");
		return;
	}
	
	for (int i = 0; i < size; i++) {
		fprintf(file, "%s\n", p[i].trackingNumber);
		fprintf(file, "%s\n", p[i].recipientName);
		fprintf(file, "%.2f\n", p[i].weight);
		fprintf(file, "%d\n", p[i].ds.estimatedDays);
		fprintf(file, "%.2f\n\n", p[i].ds.shippingFee);
	}
	
	fclose(file);
}
void loadRecords() {
	FILE *file = fopen("logistics.txt", "r");
	if (file == NULL) {
		printf("\nError opening file for reading\n\n");
		return;
	}
	
	Parcel temp;
	
	while (fscanf(file, " %[^\n]", temp.trackingNumber) != EOF) {
		fscanf(file, " %[^\n]", temp.recipientName);
		fscanf(file, "%f", &temp.weight);
		fscanf(file, "%d", &temp.ds.estimatedDays);
		fscanf(file, "%f", &temp.ds.shippingFee);
		
		printf("Tracking: %s\n", temp.trackingNumber);
		printf("Recipient: %s\n", temp.recipientName);
		printf("Weight: %.2f kg\n", temp.weight);
		printf("Est. Delivery: %d days\n", temp.ds.estimatedDays);
		printf("Shipping Fee: %.2f PHP\n\n", temp.ds.shippingFee);
	}
	
	fclose(file);
}
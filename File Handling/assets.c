//* IT Assets Inventory System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ASSETS 100

typedef struct {
	int day;
	int month;
	int year;
	char purchaseDate[20];
} Date;

typedef struct {
	int assetCode;
	char assetName[50];
	float value;
	Date d;
} Asset;

void displayAssets(Asset *a, int size);
void newAsset(Asset a[], int size);
void searchAsset(Asset a[], int size);
void depreciateAsset(Asset *a, int size);
void saveRecords(Asset a[], int size);
void loadRecords();

int main() {
	int count;
	printf("Enter how many assets will be entered: ");
	scanf("%d", &count);
	
	if (count > MAX_ASSETS) {
		printf("Exceeds maximum limit. Setting to %d.\n", MAX_ASSETS);
		count = MAX_ASSETS;
	}
	
	Asset a[MAX_ASSETS];
	
	for (int i = 0; i < count; i++) {
		printf("\nEnter details for Asset %d\n", i + 1);
		
		printf("Asset Code: ");
		scanf("%d", &a[i].assetCode);
		
		printf("Asset Name: ");
		scanf(" %[^\n]s", a[i].assetName);
		
		printf("Purchase Date (DD MM YYYY): ");
		scanf(" %[^\n]s", a[i].d.purchaseDate);
		
		printf("Asset Value: ");
		scanf("%f", &a[i].value);
	}
	
	int choice;
	
	do {
		printf("\n===== IT ASSET INVENTORY MENU =====\n\n");
		
		printf("1. Display All Assets\n");
		printf("2. Add New Asset\n");
		printf("3. Search Asset by Code\n");
		printf("4. Depreciate Asset Value\n");
		printf("5. Save Records to File\n");
		printf("6. Load Records from File\n");
		printf("7. Exit\n\n");
		
		printf("Enter Choice: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
				displayAssets(a, count);
				break;
			case 2:
				if (count < MAX_ASSETS) {
					newAsset(a, count);
					count++;
				} else {
					printf("\nError: System memory full! Cannot add more assets.\n");
				}
				
				break;
			case 3:
				searchAsset(a, count);
				break;
			case 4:
				depreciateAsset(a, count);
				break;
			case 5:
				saveRecords(a, count);
				break;
			case 6:
				loadRecords();
				break;
			case 7:
				printf("\nExiting program...\n\n");
				break;
		}
	} while (choice != 7);
	
	return 0;
}

void displayAssets(Asset *a, int size) {
	printf("\n===== ASSET RECORDS =====\n\n");
	for (int i = 0; i < size; i++) {
		printf("Asset Code: %d\n", a[i].assetCode);
		printf("Name: %s\n", a[i].assetName);
		printf("Purchased: %s\n", a[i].d.purchaseDate);
		printf("Value: %.2f\n\n", a[i].value);
	}
}

void newAsset(Asset a[], int size) {
	printf("\nEnter details for new asset %d\n\n", size + 1);
	
	printf("Asset Code: ");
	scanf("%d", &a[size].assetCode);
	
	printf("Asset Name: ");
	scanf(" %[^\n]s", a[size].assetName);
	
	printf("Purchase Date (DD MM YYYY): ");
	scanf(" %[^\n]s", a[size].d.purchaseDate);
	
	printf("Asset Value: ");
	scanf("%f", &a[size].value);
}

void searchAsset(Asset a[], int size) {
	int assetSearch;
	printf("\nEnter Asset Code to Search: ");
	scanf("%d", &assetSearch);
	
	int found = 0;
	
	for (int i = 0; i < size; i++) {
		if (a[i].assetCode == assetSearch) {
			printf("\nAsset Found\n\n");
			
			printf("Asset Code: %d\n", a[i].assetCode);
			printf("Name: %s\n", a[i].assetName);
			printf("Purchased: %s\n", a[i].d.purchaseDate);
			printf("Value: %.2f\n\n", a[i].value);
			
			found = 1;
			break;
		}
	}
	
	if (found == 0) {
		printf("\nAsset not found\n\n");
	}
}

void depreciateAsset(Asset *a, int size) {
	int assetSearch;
	printf("\nEnter Asset Code to Depreciate: ");
	scanf("%d", &assetSearch);
	
	int found = 0;
	
	for (int i = 0; i < size; i++) {
		if (a[i].assetCode == assetSearch) {
			printf("\nAsset Found. Current Value %.2f\n", a[i].value);
			
			float percent;
			printf("Enter depreciation percentage (e.g., 10 for 10%%): ");
			scanf("%f", &percent);
			
			a[i].value -= (a[i].value * percent / 100);
			
			printf("\nSystem Message: Asset value updated successfully via pointer!\n\n");
			
			found = 1;
			break;
		}
	}
	
	if (found == 0) {
		printf("\nAsset not found\n\n");
	}
}

void saveRecords(Asset a[], int size) {
	FILE *file = fopen ("assets.txt", "w");
	if (file == NULL) {
		printf("\nError opening file for writing\n\n");
		return;
	}
	
	for (int i = 0; i < size; i++) {
		fprintf(file, "%d\n", a[i].assetCode);
		fprintf(file, "%s\n", a[i].assetName);
		fprintf(file, "%s\n", a[i].d.purchaseDate);
		fprintf(file, "%.2f\n\n", a[i].value);
	}
	
	fclose(file);
	printf("\nSystem Message: Records saved successfully to assets.txt\n\n");
}

void loadRecords() {
	FILE *file = fopen ("assets.txt", "r");
	if (file == NULL) {
		printf("\nError opening file for reading\n\n");
		return;
	}
	
	Asset temp;
	Date d;
	
	while (fscanf(file, "%d", &temp.assetCode) != EOF) {
		fscanf(file, " %[^\n]", temp.assetName);
		fscanf(file, " %[^\n]", temp.d.purchaseDate);
		fscanf(file, "%f", &temp.value);
		
		printf("Asset Code: %d\n", temp.assetCode);
		printf("Name: %s\n", temp.assetName);
		printf("Purchased: %s\n", temp.d.purchaseDate);
		printf("Value: %.2f\n\n", temp.value);
	}
	
	fclose(file);
}
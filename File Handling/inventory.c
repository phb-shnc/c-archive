//* Grocery Inventory System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char productCode[50];
	char productName[50];
	int quantity;
	char supplierName[50];
	float price;
} Product;

void displayAllProducts(Product p[], int size);
void displayLowStockProducts(Product p[], int size);
void searchProductByCode(Product p[], int size);
void updateProductStock(Product p[], int size);
void saveRecordsToFile(Product p[], int size);
void loadRecordsFromFile();

int main() {
	int n;
	printf("Enter number of products: ");
	scanf("%d", &n);
	
	Product p[n];
	
	for (int i = 0; i < n; i++) {
		printf("\nProduct %d\n", i + 1);
		
		printf("Product Code: ");
		scanf(" %[^\n]s", p[i].productCode);
		
		printf("Product Name: ");
		scanf(" %[^\n]s", p[i].productName);
		
		printf("Quantity: ");
		scanf("%d", &p[i].quantity);
		
		printf("Supplier Name: ");
		scanf(" %[^\n]s", p[i].supplierName);
		
		printf("Price: ");
		scanf("%f", &p[i].price);
		
		printf("\n");
	}
	
	int choice;
	
	do {
		printf("===== GROCERY INVENTORY MENU =====\n\n");
		printf("1. Display All Products\n");
		printf("2. Display Low-Stock Products\n");
		printf("3. Search Product by Code\n");
		printf("4. Update Product Stock\n");
		printf("5. Save Records to File\n");
		printf("6. Load Records from file\n");
		printf("7. Exit\n\n");
		
		printf("Enter Choice: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
				displayAllProducts(p, n);
				break;
			case 2:
				displayLowStockProducts(p, n);
				break;
			case 3:
				searchProductByCode(p, n);
				break;
			case 4:
				updateProductStock(p, n);
				break;
			case 5:
				saveRecordsToFile(p, n);
				break;
			case 6:
				loadRecordsFromFile();
				break;
			case 7:
				printf("\nProgram terminated.\n\n");
				break;
		}
	} while (choice != 7);
	
	return 0;
}

void displayAllProducts(Product p[], int size) {
	printf("\n--- Product Records ---\n\n");
	for (int i = 0; i < size; i++) {
		printf("Product %d\n", i + 1);
		printf("Product Code: %s\n", p[i].productCode);
		printf("Product Name: %s\n", p[i].productName);
		printf("Quantity: %d\n", p[i].quantity);
		printf("Supplier Name: %s\n", p[i].supplierName);
		printf("Price: %.2f\n\n", p[i].price);
	}

}

void displayLowStockProducts(Product p[], int size) {
	printf("\n--- Low-Stock Products\n\n");
	for (int i = 0; i < size; i++) {
		if (p[i].quantity < 10) {
			printf("Product %d\n", i + 1);
			printf("Product Code: %s\n", p[i].productCode);
			printf("Product Name: %s\n", p[i].productName);
			printf("Quantity: %d\n", p[i].quantity);
			printf("Supplier Name: %s\n", p[i].supplierName);
			printf("Price: %.2f\n\n", p[i].price);
		}
	}

}

void searchProductByCode(Product p[], int size) {
	char productSearch[50];
	printf("\nEnter Product Code to Search: ");
	scanf(" %[^\n]s", productSearch);
	
	int found = 0;
	
	for (int i = 0; i < size; i++) {
		if (strcmp(p[i].productCode, productSearch) == 0) {
			printf("\n--- Product Found ---\n\n");
			printf("Product %d\n", i + 1);
			printf("Product Name: %s\n", p[i].productName);
			printf("Quantity: %d\n", p[i].quantity);
			printf("Supplier Name: %s\n", p[i].supplierName);
			printf("Price: %.2f\n\n", p[i].price);
			
			found = 1;
		}
	}
	
	if (!found) {
		printf("--- Product Not Found ---\n\n");
	}
}

void updateProductStock(Product p[], int size) {
	char productUpdate[50];
	printf("\nEnter Product Code to Update: ");
	scanf(" %[^\n]s", productUpdate);
	
	int found = 0;
	
	for (int i = 0; i < size; i++) {
		if (strcmp(p[i].productCode, productUpdate) == 0) {
			printf("\nCurrent Quantity: %d\n\n", p[i].quantity);
			printf("Enter New Quantity: ");
			scanf("%d", &p[i].quantity);
			
			printf("\nProduct stock updated successfully.\n\n");
			
			found = 1;
		}
		
	}
	
	if (!found) {
		printf("\n--- Product Not Found ---\n\n");
	}
}

void saveRecordsToFile(Product p[], int size) {
	FILE *file = fopen("inventory.txt", "w");
	if (file == NULL) {
		printf("Error opening file for writing.\n\n");
		return;
	}
	
	for (int i = 0; i < size; i++) {
		fprintf(file, "Product %d\n", i + 1);
		fprintf(file, "%s\n", p[i].productCode);
		fprintf(file, "%s\n", p[i].productName);
		fprintf(file, "%d\n", p[i].quantity);
		fprintf(file, "%s\n", p[i].supplierName);
		fprintf(file, "%.2f\n\n", p[i].price);
	}
	
	fclose(file);
	printf("\nRecords saved to inventory.txt\n\n");
}

void loadRecordsFromFile() {
	FILE *file = fopen("inventory.txt", "r");
	if (file == NULL) {
		printf("Error opening file for reading.\n\n");
		return;
	}
	
	Product temp;
	int count = 1;
	
	printf("\nRecords loaded successfully from inventory.txt\n\n");
	while (fscanf(file, " %[^\n]s", temp.productCode) != EOF) {
		fscanf(file, " %[^\n]s", temp.productCode);
		fscanf(file, " %[^\n]s", temp.productName);
		fscanf(file, "%d", &temp.quantity);
		fscanf(file, " %[^\n]s", temp.supplierName);
		fscanf(file, "%f", &temp.price);
		
		printf("\n");
		printf("Product %d\n", count++);
		printf("Product Code: %s\n", temp.productCode);
		printf("Product Name: %s\n", temp.productName);
		printf("Quantity: %d\n", temp.quantity);
		printf("Supplier Name: %s\n", temp.supplierName);
		printf("Price: %.2f\n\n", temp.price);
	}
	
	fclose(file);
}
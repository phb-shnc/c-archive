//* Weather Data Analyzer (2)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  {
	int day;
	char loc[50];
	float temp;
	float humid;
} Weather;

void displayWeather(Weather w[], int size);
void newWeather(Weather w[], int size);
void updateWeather(Weather w[], int size);
void saveWeather(Weather w[], int size);
void readWeather();

int main() {
	int count;
	printf("Enter how many weather records will be entered: ");
	scanf("%d", &count);
	
	Weather w[count];
		
	for (int i = 0; i < count; i++) {
		printf("\nEnter details for Weather Record %d\n\n", i + 1);
		
		printf("Enter day number: ");
		scanf("%d", &w[i].day);
		
		printf("Enter location: ");
		scanf(" %[^\n]s", w[i].loc);
		
		printf("Enter temperature (C): ");
		scanf("%f", &w[i].temp);
		
		printf("Enter humidity(%%): ");
		scanf("%f", &w[i].humid);
	}
	
	int choice;

	do {
		printf("\n===== WEATHER DATA ANALYZER =====\n\n");
		
		printf("1. Display All Weather Records\n");
		printf("2. Add New Weather Record\n");
		printf("3. Update Weather Record  by Day Number\n");
		printf("4. Save Weather Records to File\n");
		printf("5. Read Weather Records from File\n");
		printf("6. Exit\n\n");
		
		printf("Enter Choice: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
				displayWeather(w, count);
				break;
			case 2:
				newWeather(w, count);
				count++;
				break;
			case 3:
				updateWeather(w, count);
				break;
			case 4:
				saveWeather(w, count);
				break;
			case 5:
				readWeather();
				break;
			case 6:
				printf("\nExiting program...\n\n");
				break;
		}
		
	} while (choice != 6);
	
	return 0;
}

void displayWeather(Weather w[], int size) {
	printf("\n===== WEATHER RECORDS =====\n\n");
	for (int i = 0; i < size; i++) {
		printf("Day %d\n", w[i].day);
		printf("Location: %s\n", w[i].loc);
		printf("Temperature: %.1f C\n", w[i].temp);
		printf("Humidity: %.1f%%\n\n", w[i].humid);
	}
}

void newWeather(Weather w[], int size) {
	printf("\n===== ADD NEW WEATHER RECORDS =====\n\n");
	
	int day;
	printf("Enter day number: ");
	scanf("%d", &day);
	
	w[size].day = day;
	
	printf("\n");	
	printf("Enter location: ");
	scanf(" %[^\n]", w[size].loc);

	printf("Enter temperature (C): ");
	scanf(" %f", &w[size].temp);
	
	printf("Enter humidity (%%): ");
	scanf("%f", &w[size].humid);
	
	printf("\nWeather records added successfully.\n\n");
}

void updateWeather(Weather w[], int size) {
	int day;
	printf("\nEnter day number to update: ");
	scanf("%d", &day);
	
	if (day < 1 || day > size) {
		printf("\nInvalid day.\n\n");
		return;
	}
	
	printf("\n");	
	printf("Enter location: ");
	scanf(" %[^\n]s", w[day - 1].loc);

	printf("Enter temperature (C): ");
	scanf(" %f", &w[day - 1].temp);
	
	printf("Enter humidity (%%): ");
	scanf("%f", &w[day - 1].humid);
	
	printf("\nWeather records updated successfully.\n\n");
}

void saveWeather(Weather w[], int size) {
	FILE *file = fopen("weather_data.txt", "w");
	if (file == NULL) {
		printf("\nError opening file for writing.\n\n");
		return;
	}
	
	for (int i = 0; i < size; i++) {
		fprintf(file, "%d\n", w[i].day);
		fprintf(file, "%s\n", w[i].loc);
		fprintf(file, "%.1f\n", w[i].temp);
		fprintf(file, "%.1f\n\n", w[i].humid);
	}
	
	fclose(file);
	printf("\nWeather records saved successfully to weather_data.txt.\n\n");
}

void readWeather() {
	printf("\n===== READING WEATHER RECORDS FROM FILE =====\n\n");
	
	FILE *file = fopen("weather_data.txt", "r");
	if (file == NULL) {
		printf("\nError opening file for reading.\n\n");
		return;
	}
	
	Weather tempo;
	
	while (fscanf(file, "%d", &tempo.day) != EOF) {
		fscanf(file, " %[^\n]s", tempo.loc);
		fscanf(file, "%f", &tempo.temp);
		fscanf(file, "%f", &tempo.humid);
		
		printf("Day %d\n", tempo.day);
		printf("Location: %s\n", tempo.loc);
		printf("Temperature: %.1f C\n", tempo.temp);
		printf("Humidity: %.1f%%\n\n", tempo.humid);
	}
	
	fclose(file);
}

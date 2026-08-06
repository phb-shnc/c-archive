//* Weather Data Analyzer

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int day;
	char loc[30];
	float temp;
	float humid;
} Weather;

void displayWeather(Weather w[], int size);
void newWeather(Weather w[], int size);
void updateWeather(Weather w[], int size);
void lowestTemp(Weather w[], int size);
void writeFile(Weather w[], int size);
void readFile();

int main() {
	int count;
	printf("Enter weather data size for 5 days: ");
	scanf("%d", &count);
	Weather w[count];
	
	w[count].day = count + 1;	
	
	for (int i = 0; i < count; i++) {
		printf("\nDay %d\n", i + 1);
		
		printf("Enter day number: ");
		scanf("%d", &w[i].day);
		
		printf("Enter location: ");
		scanf(" %[^\n]s", w[i].loc);
		
		printf("Enter temperature (Celsius): ");
		scanf("%f", &w[i].temp);
		
		printf("Enter humidity (%%): ");
		scanf("%f", &w[i].humid);
		
		printf("\n");
	}
	
	printf("---Weather Data---\n\n");
	displayWeather(w, count);
	
	printf("---Add New Weather Record---\n\n");
	newWeather(w, count);
	count++;
	
	printf("---Update Weather Data---\n\n");
	updateWeather(w, count);
	
	printf("---Display Lowest Temperature---\n\n");
	lowestTemp(w, count);
	
	printf("---Write File Data---\n\n");
	writeFile(w, count);
	
	printf("---Read File Data---\n\n");
	readFile();
	
	return 0;
}

void displayWeather(Weather w[], int size) {
	for (int i = 0; i < size; i++) {
		printf("Day %d\n", w[i].day);
		printf("Location: %s\n", w[i].loc);
		printf("Temperature: %.2f C\n", w[i].temp);
		printf("Humidity: %.2f%%\n\n", w[i].humid);
	}
}

void newWeather(Weather w[], int size) {
	printf("Enter new weather record for day %d:\n", w[size].day);
		
	printf("Enter location: ");
	scanf(" %[^\n]s", w[size].loc);
	
	printf("Enter temperature (Celsius): ");
	scanf("%f", &w[size].temp);
	
	printf("Enter humidity (%%): ");
	scanf("%f", &w[size].humid);
	
	printf("\n");
}

void updateWeather(Weather w[], int size) {
	int day;
	printf("Enter day to update: ");
	scanf("%d", &day);
	
	if (day < 1 || day > size) {
		printf("Invalid day!\n");
		return;
	}
	
	printf("Update weather data for Day %d:\n", day);
					
	printf("Enter new location: ");
	scanf(" %[^\n]s", w[day - 1].loc);
	
	printf("Enter new temperature (Celsius): ");
	scanf("%f", &w[day - 1].temp);
	
	printf("Enter new humidity (%%): ");
	scanf("%f", &w[day - 1].humid);
	printf("\n");
}

void lowestTemp(Weather w[], int size) {
	int low = 0;
	
	for (int i = 1; i < size; i++) {
		if (w[i].temp < w[low].temp) {
			low = i;
		}
	}
	
	printf("Day %d\n", w[low].day);
	printf("Location: %s\n", w[low].loc);
	printf("Temperature: %.2f C\n", w[low].temp);
	printf("Humidity: %.2f%\n\n", w[low].humid);
}

void writeFile(Weather w[], int size) {
	FILE *file = fopen("weather_data.txt", "w");
	if (file == NULL) {
		printf("Error opening file for writing.\n");
		return;
	}
	
	for (int i = 0; i < size; i++) {
		fprintf(file, "%d\n", w[i].day);
		fprintf(file, "%s\n", w[i].loc);
		fprintf(file, "%f\n", w[i].temp);
		fprintf(file, "%f\n", w[i].humid);
	}
	
	fclose(file);
	printf("Data has been successfully saved.\n\n");
}

void readFile() {
	FILE *file = fopen("weather_data.txt", "r");
	if (file == NULL) {
		printf("Error opening file for reading.\n");
		return;
	}
	
	Weather tempo;
	
	while (fscanf(file, "%d", &tempo.day) != EOF) {
		fscanf(file, " %[^\n]s", tempo.loc);
		fscanf(file, "%f", &tempo.temp);
		fscanf(file, "%f", &tempo.humid);
		
		printf("Day %d\n", tempo.day);
		printf("Location: %s\n", tempo.loc);
		printf("Temperature: %.2f C\n", tempo.temp);
		printf("Humidity: %.2f%%\n\n", tempo.humid);
	}
	
	fclose(file);
}
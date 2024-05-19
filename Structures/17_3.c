/* An automobile company has serial number for engine parts starting 
from AA0 to FF9. The other characteristics of parts are year of 
manufacture, material and quantity manufactured. 
(1) Create a structure to store information corresponding to a 
part. 
(2) Write a program to retrieve information on parts with serial 
numbers between BB1 and CC6.*/
#include <stdio.h>
#include <string.h>

struct EnginePart {
    char serialNumber[4]; 
    int yearOfManufacture;
    char material[20];
    int quantityManufactured;
};

int main() {
    // Create an array of structures to hold information about engine parts
    struct EnginePart parts[] = {
        {"AA0", 2022, "Steel", 100},
        {"AB1", 2023, "Aluminum", 150},
        {"AC2", 2021, "Plastic", 200},
        {"BA3", 2024, "Steel", 120},
        {"BB4", 2023, "Aluminum", 180},
        {"BC5", 2022, "Plastic", 250},
        {"CC6", 2024, "Steel", 130},
        {"CD7", 2021, "Aluminum", 160},
        {"CE8", 2022, "Plastic", 220},
        {"CF9", 2023, "Steel", 140},
        {"DD0", 2021, "Aluminum", 170},
        {"DE1", 2022, "Plastic", 230},
        {"DF2", 2023, "Steel", 150},
        {"EA3", 2024, "Aluminum", 190},
        {"EB4", 2021, "Plastic", 240},
        {"EC5", 2022, "Steel", 160},
        {"ED6", 2023, "Aluminum", 200},
        {"EE7", 2024, "Plastic", 260},
        {"EF8", 2021, "Steel", 170},
        {"FF9", 2022, "Aluminum", 210}
    };

    // Retrieve information on parts with serial numbers between BB1 and CC6
    printf("Parts with serial numbers between BB1 and CC6:\n");
    for (int i = 0; i < sizeof(parts) / sizeof(parts[0]); i++) {
        if (strcmp(parts[i].serialNumber, "BB1") >= 0 && strcmp(parts[i].serialNumber, "CC6") <= 0) {
            printf("Serial Number: %s, Year of Manufacture: %d, Material: %s, Quantity Manufactured: %d\n", parts[i].serialNumber, parts[i].yearOfManufacture, parts[i].material, parts[i].quantityManufactured);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

// struct drivers {
//     char name[50];
//     char route[50];
//     int kms;
//     int license_num;
//     int petrol_cost;
// };

// void driver_details(struct drivers *ptr) {
//     printf("Enter the name: \n");
//     scanf("%s", (*ptr).name); //  (*ptr).name can be written as ptr->name
//                               //  the structure members are correctly accessed and updated through ptr->member
//                               //(*ptr).name) is already an address, so & is not needed.
//                               //char array in C is already treated as a pointer to the first element of the array, so you do not need to use the & operator.
    
    
//     printf("Enter the route: \n");
//     scanf("%s", (*ptr).route);

//     printf("Enter the kilometers travelled: \n");
//     scanf("%d", &(*ptr).kms);

//     printf("Enter the license number: \n");
//     scanf("%d", &(*ptr).license_num);

//     printf("Enter the petrol cost: \n");
//     scanf("%d", &(*ptr).petrol_cost);
// }

// int main() {
//     int n;
//     printf("Enter the number of drivers\n");
//     scanf("%d", &n);

//     struct drivers drivers[n];

//     for (int i = 0; i < n; i++) {
//         printf("Enter details for person %d:\n", i + 1);
//         driver_details(&drivers[i]);
//     }
    
//     printf("\nThe details of drivers are:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Driver %d\n", i + 1);
//         printf("Name: %s\n", drivers[i].name);
//         printf("Route: %s\n", drivers[i].route);
//         printf("Kilometers travelled: %d\n", drivers[i].kms);
//         printf("License number: %d\n", drivers[i].license_num);
//         printf("Petrol cost: %d\n", drivers[i].petrol_cost);
//         printf("\n");
//     }
    
//     return 0;
// }


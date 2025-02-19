#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Product structure
struct Product {
    char category[50];
    char name[50];
    char seller[50];
    int price;
    int rating;
};

// Function to initialize a product
void init_product(struct Product *p, char *category, char *name, char *seller, int price, int rating) {
    strcpy(p->category, category);
    strcpy(p->name, name);
    strcpy(p->seller, seller);
    p->price = price;
    p->rating = rating;
}

// Function to display a product
void display_product(struct Product *p) {
    printf("Category: %s\n", p->category);
    printf("Name: %s\n", p->name);
    printf("Seller: %s\n", p->seller);
    printf("Price: %d\n", p->price);
    printf("Rating: %d\n\n", p->rating);
}

// Comparison function for sorting by price
int compare_price(const void *a, const void *b) {
    struct Product *pa = *(struct Product **)a;
    struct Product *pb = *(struct Product **)b;
    return pa->price - pb->price;
}

// Comparison function for sorting by rating
int compare_rating(const void *a, const void *b) {
    struct Product *pa = *(struct Product **)a;
    struct Product *pb = *(struct Product **)b;
    return pb->rating - pa->rating; // descending order
}

// Comparison function for sorting by category
int compare_category(const void *a, const void *b) {
    struct Product *pa = *(struct Product **)a;
    struct Product *pb = *(struct Product **)b;
    return strcmp(pa->category, pb->category);
}

// Comparison function for sorting by name
int compare_name(const void *a, const void *b) {
    struct Product *pa = *(struct Product **)a;
    struct Product *pb = *(struct Product **)b;
    return strcmp(pa->name, pb->name);
}

// Comparison function for sorting by seller
int compare_seller(const void *a, const void *b) {
    struct Product *pa = *(struct Product **)a;
    struct Product *pb = *(struct Product **)b;
    return strcmp(pa->seller, pb->seller);
}

// Function to sort products using Bubble Sort with a custom comparison function
void bubble_sort(struct Product **arr, int n, int (*compare)(const void *, const void *)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (compare(&arr[j], &arr[j + 1]) > 0) {
                struct Product *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

#define MAX_PRODUCTS 100

int main() {
    struct Product products[MAX_PRODUCTS];
    struct Product *indirect_array[MAX_PRODUCTS];
    int n = 0;

    // Initialize products
    init_product(&products[n++], "Electronics", "Smartphone", "TechStore", 699, 4);
    init_product(&products[n++], "Home", "Vacuum Cleaner", "CleanHome", 199, 5);
    init_product(&products[n++], "Books", "The Great Gatsby", "BookWorld", 10, 5);

    // Set up the indirect array
    for (int i = 0; i < n; i++) {
        indirect_array[i] = &products[i];
    }

    // Sort by category
    bubble_sort(indirect_array, n, compare_category);
    printf("Products sorted by category:\n");
    for (int i = 0; i < n; i++) {
        display_product(indirect_array[i]);
    }

    // Sort by name
    bubble_sort(indirect_array, n, compare_name);
    printf("Products sorted by name:\n");
    for (int i = 0; i < n; i++) {
        display_product(indirect_array[i]);
    }

    // Sort by seller
    bubble_sort(indirect_array, n, compare_seller);
    printf("Products sorted by seller:\n");
    for (int i = 0; i < n; i++) {
        display_product(indirect_array[i]);
    }

    return 0;
}

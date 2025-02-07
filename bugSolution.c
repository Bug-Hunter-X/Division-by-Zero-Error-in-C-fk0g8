int main() {
    int a = 5;
    int b = 0;
    if (b != 0) {
        int c = a / b; 
        // ... further operations with c ...
    } else {
        fprintf(stderr, "Error: Division by zero\n");
        return 1; // Indicate an error
    }
    return 0;
}
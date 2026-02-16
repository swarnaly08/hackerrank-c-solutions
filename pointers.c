#include stdio.h
#include stdlib.h 

void update(int a, int b) {
  
    int valA = a;
    int valB = b;
    
    a = valA + valB;
    b = abs(valA - valB);
}

int main() {
    int a, b;
    int pa = &a, pb = &b;
    
    if (scanf(%d %d, &a, &b) == 2) {
        update(pa, pb);
        printf(%dn%d, a, b);
    }
    
    return 0;
}
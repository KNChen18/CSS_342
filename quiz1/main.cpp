#include <iostream>

/*int *foo_ret_stack_ptr(int size) {
    int array[2] = {12, 34};
    return array;
}

int main(int argc, char **argv) {
    int *ptr = foo_ret_stack_ptr(2);
    for (int i = 0; i < 2; i++) {
        std::cout << ptr[i] << "\n";
    }
}*/

int main(int argc, char **argv) {
    int *arr3 = new int[5]{5, 6, 7, 8, 9};

    for (int i = 0; i < 5; i++) {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }

    int *p = &arr3[3];

    for (int i = 0; i < 5; i++) {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }

    *p = 789;

    for (int i = 0; i < 5; i++) {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }

    delete arr3;
}

/*int main(int argc, char **argv) {
    int *arr3 = new int[5]{5, 6, 7, 8, 9};
    int *p = &arr3[3];
    *p = 789;
    delete arr3;
}*/

/*int b = 10, c = -2;
int &a = b;
int &d = a;
a++;
c -= 2;
a = c;  // here
d = d + 1;*/

/*int max(int &a, int &b) {
    return (a>=b) ? a : b;
}

int main(int argc, char **argv) {
    int val1 = 1;
    int val2 = 2;
    int x = max(val1, val2);
    std::cout << x << std::endl;
}*/
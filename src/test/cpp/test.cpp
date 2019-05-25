#include "Selection.h"
#include "Insertion.h"
#include "Bubble.h"

#include <cassert>
#include <iostream>

void TestSelectionSort() {
    int vet[] = {5, 3, 1, 2, 4};
    int sorted[] = {1, 2, 3, 4, 5};
    std::cout << "[test] Funzionamento Selection Sort..." << std::flush;
    SelectionSort(vet, 5);
    for (int i = 0; i < 5; i++) {
        assert(vet[i] == sorted[i]);
    }

    std::cout << " OK!" << std::endl;
}

void TestInsertionSortInPlace() {
    int vet[] = {5, 3, 1, 2, 4};
    int sorted[] = {1, 2, 3, 4, 5};
    std::cout << "[test] Funzionamento Insertion Sort in-place..." << std::flush;
    InsertionSortInPlace(vet, 5);
    for (int i = 0; i < 5; i++) {
        assert(vet[i] == sorted[i]);
    }

    std::cout << " OK!" << std::endl;
}

void TestInsertionSortOutOfPlace() {
    int vet[] = {5, 3, 1, 2, 4};
    int sorted[] = {1, 2, 3, 4, 5};
    std::cout << "[test] Funzionamento Insertion Sort out-of-place..." << std::flush;
    InsertionSortOutOfPlace(vet, 5);
    for (int i = 0; i < 5; i++) {
        assert(vet[i] == sorted[i]);
    }

    std::cout << " OK!" << std::endl;
}

void TestSimpleBubbleSort() {
    int vet[] = {5, 3, 1, 2, 4};
    int sorted[] = {1, 2, 3, 4, 5};
    std::cout << "[test] Funzionamento Bubblesort base..." << std::flush;
    BubbleSort(vet, 5);
    for (int i = 0; i < 5; i++) {
        assert(vet[i] == sorted[i]);
    }

    std::cout << " OK!" << std::endl;
}

void TestOptimizedBubbleSort() {
    int vet[] = {5, 3, 1, 2, 4};
    int sorted[] = {1, 2, 3, 4, 5};
    std::cout << "[test] Funzionamento Bubblesort ottimizzato..." << std::flush;
    OptimizedBubbleSort(vet, 5);
    for (int i = 0; i < 5; i++) {
        assert(vet[i] == sorted[i]);
    }

    std::cout << " OK!" << std::endl;
}

void TestBubbleSortWithFlag() {
    int vet[] = {5, 3, 1, 2, 4};
    int sorted[] = {1, 2, 3, 4, 5};
    std::cout << "[test] Funzionamento Bubblesort base con sentinella..." << std::flush;
    BubbleSortWithFlag(vet, 5);
    for (int i = 0; i < 5; i++) {
        assert(vet[i] == sorted[i]);
    }

    std::cout << " OK!" << std::endl;
}

int main(int argc, char **argv) {
    TestSimpleBubbleSort();
    TestOptimizedBubbleSort();
    TestBubbleSortWithFlag();

    TestInsertionSortInPlace();
    TestInsertionSortOutOfPlace();

    TestSelectionSort();

    return 0;
}

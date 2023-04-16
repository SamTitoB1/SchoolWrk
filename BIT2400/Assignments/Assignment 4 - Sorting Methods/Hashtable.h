#pragma once
#include <iostream>
#include <cstring>

class HashTable {
public:
    HashTable(int size) : m_size(size) {
        m_table = new int* [size];
        memset(m_table, 0, size * sizeof(int*));
    }

    ~HashTable() {
        for (int i = 0; i < m_size; i++) {
            if (m_table[i] != NULL) {
                delete m_table[i];
            }
        }
        delete[] m_table;
    }

    void add(int value) {
        int hash = value % m_size;
        int* slot = m_table[hash];
        if (slot == NULL) {
            slot = new int(value);
            m_table[hash] = slot;
        }
        else {
            std::cout << "Collision detected: " << *slot << " vs " << value << std::endl;
        }
    }

private:
    int** m_table;
    int m_size;
};

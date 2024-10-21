#ifndef SPARSEMATRIX_HPP
#define SPARSEMATRIX_HPP

#include <iostream>
#include <cmath>
#include <vector>

// Base class SparseMatrix
class SparseMatrix {
public:
    // Constructor (defaulted for now to avoid passing args during object instantiation)
    SparseMatrix(const std::vector<double>& values, 
            const std::vector<int>& rows, 
            const std::vector<int>& columns) 
        : values(values), rows(rows), columns(columns) {}

    // Destructor
    virtual ~SparseMatrix() {}

    // Non-const access operator-> can change the passed data
    double &operator()(const unsigned int &index) {
        static double dummy = 0.0;  // Return reference to dummy value to avoid error
        return dummy;
    }

    // Const access operator. -> cannot change the passed data
    const double &operator()(const unsigned int &index) const {
        static double dummy = 0.0;  // Return const reference to dummy value to avoid error
        return dummy;
    }

    // Test function
    virtual void doSomething() {
        std::cout << "This is a test for SparseMatrix\n";    
    }

protected:
    std::vector<double> values;
    std::vector<int> rows;
    std::vector<int> columns;
};

// Derived class SparseMatrixCOO
class SparseMatrixCOO : public SparseMatrix {
public:
    // Constructor
    SparseMatrixCOO(
            const std::vector<double>& values, 
            const std::vector<int>& rows, 
            const std::vector<int>& columns) : SparseMatrix(values, rows, columns) {}

    // Destructor
    ~SparseMatrixCOO() override {}

    // Test function    std::vector<double> values;
    std::vector<int> rows;
    std::vector<int> columns;
    void doSomething() override {
        std::cout << "This is a test for SparseMatrixCOO\n";    
    }
};

// Derived class SparseMatrixCSR
class SparseMatrixCSR : public SparseMatrix {
public:
    // Constructor
    SparseMatrixCSR(const std::vector<double>& values, 
            const std::vector<int>& rows, 
            const std::vector<int>& columns) : SparseMatrix(values, rows, columns) {}

    // Destructor
    ~SparseMatrixCSR() override {}

    // Test function
    void doSomething() override {
        std::cout << "This is a test for SparseMatrixCSR\n";    
    }
};

#endif // SPARSEMATRIX_HPP


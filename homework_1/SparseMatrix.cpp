#include "SparseMatrix.hpp"
#include <vector>
/* // Constructor */
/* DataProcessor::DataProcessor(int size, double *data) : size(size), data(data) {} */

/* int DataProcessor::n_instances = 0; */
/* // Copy constructor */
/* DataProcessor::DataProcessor(const DataProcessor& other) : size(other.size), data(other.data) { */
/*     n_instances++; */
/* } */

/* // Copy assignment operator */
/* DataProcessor& DataProcessor::operator=(const DataProcessor& other) { */
/*     if (this != &other) { */
/*         size = other.size; */
/*         data = other.data; */
/*     } */
/*     return *this; */
/* } */

/* // Destructor */
/* DataProcessor::~DataProcessor() { */
/*     // Uncomment the following if `data` was dynamically allocated (e.g., new double[]) */
/*     // delete[] data; */
/*     n_instances--; */
/*     std::cout << "Destructor executed!\n"; */
/* } */

/* // Method to return number of elements */
/* int DataProcessor::n_elements() const { */
/*     return size; */
/* } */

/* // Method to return the maximum value */
/* double DataProcessor::max() { */
/*     double max = data[0]; */
/*     for (int i = 1; i < size; i++) { */
/*         if (data[i] > max) */
/*             max = data[i]; */
/*     } */
/*     return max; */
/* } */

/* // Method to return the minimum value */
/* double DataProcessor::min() { */
/*     double min = data[0]; */
/*     for (int i = 1; i < size; i++) { */
/*         if (data[i] < min) */
/*             min = data[i]; */
/*     } */
/*     return min; */
/* } */

/* // Method to return the mean */
/* double DataProcessor::mean() const { */
/*     double sum = 0; */
/*     for (int i = 0; i < size; i++) { */
/*         sum += data[i]; */
/*     } */
/*     return sum / size; */
/* } */

/* // Method to return the standard deviation */
/* double DataProcessor::sd(double mean) { */
/*     double sumSq = 0; */
/*     for (int i = 0; i < size; i++) { */
/*         double diff = data[i] - mean; */
/*         sumSq += std::pow(diff, 2); */
/*     } */
/*     double variance = sumSq / size; */
/*     return std::sqrt(variance); */
/* } */

/* // Overloading the '<<' operator (friend function definition) */
/* std::ostream& operator<<(std::ostream& os, const DataProcessor& obj) { */
/*     for (int i = 0; i < obj.size; i++){ */
/*         os << obj.data[i]; */
/*         if (i < obj.size - 1) { */
/*             os << ", ";  // Avoid trailing comma for the last element */
/*         } */
/*     } */
/*     return os; */
/* } */
/*  // overloading the '[]' operator. */
/* const double& DataProcessor::operator[](const unsigned int i) const{ */
/*     /1* std::cout << "const version" << std::endl; *1/ */
/*     return data[i]; */
/*   } */


/* int DataProcessor::get_n_instances(){ */
/*     return n_instances; */
/* } */



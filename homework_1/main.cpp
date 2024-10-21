#include <iostream>
#include <cmath>
#include "SparseMatrix.hpp"
#include <vector>
int main() {
    /* double input1[] = {2.43, -0.86, 7.19, 4.57, 1.68, 9.32, 5.75}; */
    /* double input2[] = {0.73, -0.45, 0.12, 0.88, -0.67, 0.34, -0.92}; */
    /* double input3[] = {0.12, 0.88, -0.67, 0.34, -0.92}; */
    /* /1* Tests for step 1 methods *1/ */
    /* DataProcessor dp1(7, input1); */
    /* DataProcessor dp2(7, input2); */
    /* DataProcessor dp3(5, input3); */
    /* /1* Test for copy constructor *1/ */
    /* DataProcessor copy = dp1; */
    /* std::cout << "The array has "<< dp1.n_elements() << " \n"; */
    /* std::cout << "The copied array has "<< copy.n_elements() << " like the original one \n"; */
    /* /1* Tests for step 2 methods *1/ */
    /* double max = dp1.max(); */
    /* double min = dp1.min(); */
    /* double mean = dp1.mean(); */
    /* double sd = dp1.sd(mean); */
    /* std::cout << "max: "<< max << "\n"; */
    /* std::cout << "min: "<< min << "\n"; */
    /* std::cout << "mean: "<< mean << "\n"; */
    /* std::cout << "standard deviation: "<< sd << "\n"; */
    /* /1* Test for step 4 methods *1/ */ 
    /* std::cout << dp1 << " \n"; */
    /* const double& element = dp1[1]; */
    /* std::cout << "The element at index 1 is:" << element << " \n"; */
    /* DataProcessor dp_sum = dp1 + dp2; */ 
    /* std::cout << "The sum of the 2 DataProcessor arrays is" << dp_sum << " \n"; */
    /* /1* DataProcessor dp_sum_error = dp1 + dp3; // should throw an error *1/ */ 

    /* /1* Tests for step 5 *1/ */
    /* int n_instances = DataProcessor::get_n_instances(); */
    /* std::cout << "Active DataProcessor instances: " << n_instances << " \n"; */
    
    /* double corr = compute_correlation(dp1, dp2); */
    /* std::cout << "The pearson correlation coefficient is: " << corr << " \n"; */
    std::vector<double> values = {1.1, 2.2, 3.3};
    std::vector<int> rows = {0, 1, 2};
    std::vector<int> columns = {0, 1, 2};

    SparseMatrix TestMatrix(values, rows, columns);
    SparseMatrixCOO TestMatrixCOO(values, rows, columns); 
    SparseMatrixCSR TestMatrixCSR(values, rows, columns);

    TestMatrix.doSomething();
    TestMatrixCOO.doSomething();
    TestMatrixCSR.doSomething();
    
    return 0;
}

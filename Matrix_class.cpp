#include<iostream>
#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class Matrix {
    int rows_, cols_;
    vector<vector<T>> data_;
public:
    Matrix(int r, int c, T init=T{})
        : rows_(r), cols_(c), data_(r, vector<T>(c, init)) {}

    T&       at(int r, int c)       { return data_.at(r).at(c); }
    const T& at(int r, int c) const { return data_.at(r).at(c); }
    int rows() const { return rows_; }
    int cols() const { return cols_; }

    Matrix<T> operator+(const Matrix<T>& o) const {
        if (rows_!=o.rows_||cols_!=o.cols_) throw invalid_argument("Size mismatch");
        Matrix<T> result(rows_,cols_);
        for (int r=0;r<rows_;++r)
            for (int c=0;c<cols_;++c)
                result.at(r,c) = data_[r][c] + o.data_[r][c];
        return result;
    }
    Matrix<T> operator*(const Matrix<T>& o) const {
        if (cols_!=o.rows_) throw invalid_argument("Incompatible for multiply");
        Matrix<T> result(rows_,o.cols_);
        for(int r=0;r<rows_;++r)
            for(int c=0;c<o.cols_;++c)
                for(int k=0;k<cols_;++k)
                    result.at(r,c) += data_[r][k] * o.data_[k][c];
        return result;
    }
    void print() const {
        for (auto& row : data_) {
            for (auto& v : row) cout << v << "	";
            cout << "\n";
        }
    }
};

int main() {
    Matrix<int> A(2,2), B(2,2);
    A.at(0,0)=1; A.at(0,1)=2; A.at(1,0)=3; A.at(1,1)=4;
    B.at(0,0)=5; B.at(0,1)=6; B.at(1,0)=7; B.at(1,1)=8;
    auto C = A * B;  C.print();  // [[19,22],[43,50]]

    Matrix<double> D(3,3,1.5);   // 3x3 matrix of doubles
    cout << "Works for doubles too!\n";
}

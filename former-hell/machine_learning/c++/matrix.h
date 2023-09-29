template<class T>
class matrix 
{
   friend ostream& operator<<(ostream&, const matrix<T>&);
   public:
      matrix(int theRows = 0, int theColumns = 0);
      matrix(const matrix<T>&);
      ~matrix() {delete [] element;}
      int rows() const {return theRows;}
      int columns() const {return theColumns;}
      T& operator()(int i, int j) const;
      matrix<T>& operator=(const matrix<T>&);
      matrix<T> operator+() const; // unary +
      matrix<T> operator+(const matrix<T>&) const;
      matrix<T> operator-() const; // unary minus
      matrix<T> operator-(const matrix<T>&) const;
      matrix<T> operator*(const matrix<T>&) const;
      matrix<T>& operator+=(const T&);
   private:
       int theRows,    // number of rows in matrix
           theColumns; // number of columns in matrix
       T *element;     // element array
};  
#ifndef INTEGER_SET_H

#define INTEGER_SET_H

class IntegerSet {
    private:
        static const int count = 100;
        int array[count] = {};

        int checkNumber(int);

    public:
        IntegerSet();

        // Operations
        IntegerSet unionOffSet(IntegerSet &);
        IntegerSet intersectionOffSet(IntegerSet &);
        IntegerSet fullOuterJoin(IntegerSet &);

        int isEqualTo(IntegerSet &);

        //    I/O
        void insertElement(int num);
        void deleteElement(int num);
        void printArray();

        int* getArray();
    
};

#endif

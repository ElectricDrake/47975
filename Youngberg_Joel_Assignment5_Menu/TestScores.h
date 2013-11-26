#ifndef TESTSCORES_H
#define TESTSCORES_H
class TestScores {
private:
    int aryTestScores [10];
    float avg;

public:
    class InvalidScore
    {};
    TestScores(int array[]){//Constructor (takes in array)
        for (int i = 0; i < 10; i++){
            aryTestScores[i] = array[i];
            if (array[i] > 100 | array[i] < 0)
                throw InvalidScore();
        }
    }//End Const

    int *getScores(){
        int *ptr;
        ptr = aryTestScores;
        return ptr;
    }//End getScores

    void setAvg(){
        int add;
        for (int i = 0; i < 10; i++){
            add += aryTestScores[i];
            avg = add/10;
        }
    }
    float getAvg(){
        return avg;
    }
};

#endif // TESTSCORES_H

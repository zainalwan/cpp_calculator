class Calculator
{
public:
    Calculator();

    double sum(double firstNum, double secondNum);
    double minus(double firstNum, double secondNum);
    double multiple(double firstNum, double secondNum);
    double devide(double firstNum, double secondNum);

private:
    int operation;
    double firstNum;
    double secondNum;
};

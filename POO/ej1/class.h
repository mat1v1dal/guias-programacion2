class Number{
    private:
    int Numerador;
    int Denominador;

    public:
    Number(int numerador=0, int denominador=1):Numerador(numerador), Denominador(denominador){}
    
    void setNumerador(int numerador){Numerador = numerador;};
    void setDenominador(int denominador);
    
    int getNumerador(){return Numerador;};
    int getDenominador(){return Denominador;};
    

    void operator+(Number &numero);
    void operator-(Number &numero);
    void operator++();
    void operator--();
    void operator+=(int n);
    void operator-=(int n);
};
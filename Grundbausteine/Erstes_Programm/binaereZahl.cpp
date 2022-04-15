# include<iostream>
# include <string>

void druck_binaere_Zahl(int x)
{
    while (x>0)
    {
        int a = x/2;
        int b = x%2;
        std::cout << x << "/2= " << a << ", Rest " << b << '\n';
        x=a;
    }
    

}

int main(int argc, char const *argv[])
{
    int wert = 0;
    if(argc <=1){
        std::cout << "Geben Sie eine Zahl ein: ";
        std::cin >> wert;
        if(!std::cin){
            return 1;
        }

    }else{
        wert=std::stoi(argv[1]);
    }
    druck_binaere_Zahl(wert);

    return 0;
}
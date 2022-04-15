# include<iostream>
# include <string>

void schaltjahr(int x)
{
    if( (x % 4 == 0)&&(x % 100 != 0)) {
         std::cout << x << " ist ein Schaltjahr ";

    }else{
        std::cout << x << " ist kein Schaltjahr ";
    }

   

}

int main(int argc, char const *argv[])
{
    int wert = 0;
    if(argc <=1){
        std::cout << "Geben Sie ein Jahr ein: ";
        std::cin >> wert;
        if(!std::cin){
            return 1;
        }

    }else{
        wert=std::stoi(argv[1]);
    }
   schaltjahr(wert);

    return 0;
}
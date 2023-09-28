#include <fstream>

double PrecisioneDouble()
{
    double e = 1;
    
    while((1 + e) > 1)
    {
        e /= 2;
    }
    return(2 * e);     
}
float PrecisioneFloat()
{
    float e = 1;
    
    while((1 + e) > 1)
    {
        e /= 2;
    }
    return(2 * e);     
}




int main()
{
    std:: ofstream output("Output.txt");
    output << "eps float:" << " "<< PrecisioneFloat() << "\n";
    output << "eps double:" << " "<< PrecisioneDouble() << "\n";
}


//
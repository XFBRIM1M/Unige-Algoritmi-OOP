#include <fstream>
#include <valarray>

double precisioneDouble(double e)
{
    while((1 + e) > 1)
    {
        e /= 2;
    }
    return(2 * e);     
}
float precisioneFloat(float e)
{
    while((1 + e) > 1)
    {
        e /= 2;
    }
    return(2 * e);     
}

double factorial(int c)
{
    int factorial=1;
    for ( int i = 1; i <= c; i++ )
    {
        factorial *=i;
    }
    return factorial;
}

double taylor(double x, int n)
{
    
    double epsilon = 1 ;
    for(int i = 1 ; i<=n ; i++)
    {
        if(i == 1)
        {
            epsilon += x;
        }
        else
        {
            epsilon += (1/factorial(i)) * pow(x,i);
        }
        
    }
    epsilon += n;
    return epsilon;
    
}



int main()
{
    std:: ofstream output("Output.txt");
    output << "eps float:" << " "<< precisioneFloat(1) << "\n";
    output << "eps double:" << " "<< precisioneDouble(1) << "\n";



    double epsilon = 1 ;
    for(int i = 1 ; i<=6 ; i++)
    {
        if(i == 1)
        {
            epsilon += 0.5;
            
        }
        else
        {
            epsilon += (1/factorial(i)) * pow(0.5,i);
        }
        output << "prox : " << epsilon << " era: "  << "\n";
        
    }
   

    
    output << "y = " << epsilon; 
}


//
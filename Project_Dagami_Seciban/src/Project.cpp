#include "../include/Project.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}

void Project::multiples_3_and_5()
{
    int i, sum = 0;

    for ( i = 0; i < 1000; i++ )
    {
        if ( i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl << endl;
}

void Project::even_fibonacce()
{
    int sum = 0, present = 1, previous = 1, temp;

    while ( present < 4000000 )
    {
        if ( present % 2 == 0 )
        {
            sum += present;
        }
        temp = present;
        present += previous;
        previous = temp;
    }

    cout << "The sum of all even numbers is " << sum << endl << endl;
}

void Project::largest_prime_factor()
{

    long long largest_prime = 0;
    long long num = 600851475143LL;
    int i, j;

    for ( i = 2; i < num; i++ )
    {
        if ( num % i == 0)
        {
            for ( j = 2; j < i; j ++ )
            {
                if ( i % j == 0 )
                {
                    break;
                }

                else if ( j == i - 1 )
                {
                    largest_prime = i;
                }
            }
        }
    }

    cout << largest_prime << endl << endl;
}

void Project::largest_palindrome_product()
{
    int numbers [ 2 ];
    int largest [ 2 ];

    for ( int i = 10; i < 1000; i++ )
    {
        numbers [ 0 ] = i;
        for ( int k = 10; k < 100; k++ )
        {
            ostringstream convert;
            string palindrome;
            string final_palindrome = "";
            numbers [1] = k;
            int product = numbers[0]*numbers[1];
            convert << product;
            palindrome = convert.str();
            int range = palindrome.length();

            for ( int x = 0; x < range; x++ )
            {
                final_palindrome = palindrome.at ( x ) + final_palindrome;
                if ( palindrome == final_palindrome )
                {
                    for ( int j = 0; j < 2; j++ )
                    {
                        largest [ j ] = numbers [ j ];
                    }
                }
            }
        }
    }

    for ( int i = 0; i < 2; i++ )
    {
        cout << largest [ i ] << endl << endl;
    }
}

void Project::smallest_multiple()
{
    int i = 1;
    bool k = false;

    while ( !k )
    {
        for ( int j = 1; j <= 20; j++)
        {
            if ( i % j == 0 )
            {
                if ( j == 20 )
                {
                    k = true;
                    break;
                }
            }

            else
            {
                break;
            }
        }
        i++;
    }
    i--;

    cout << i << endl << endl;
}

void Project::sum_square_diff()
{
    int gm [101] = {};
    int sum1 = 0;
    int sum2 = 0;
    int square1 = 0;
    int square2 = 0;
    int difference = 0;

    for ( int i = 0; i < 100; i++ )
    {
        if ( gm [ i + 1 ] = gm [ i ] + 1 )
        {
            square1 = gm [ i ] * gm [ i ];
            sum1 += square1;
        }
    }

    cout << "The sum of the squares is " << sum1 << endl << endl;


    for ( int j = 0; j < 100; j++)
    {
        if ( gm [ j + 1 ] = gm [ j ] + 1 )
        {
            sum2 += gm [ j ];
            square2 = sum2 * sum2;
        }
    }

    cout << "The sum  is " << sum2 << endl << endl;
    cout << "The square of the sum  is " << square2 << endl << endl;

    difference = square2 - sum1;

    cout << "The difference between the square of the sum and the sum of its squares is "
    << difference << endl << endl;
}

void Project::the_10001st_prime()
{
    int b = 2;
    for ( int i = 0; i < 10001; i++ )
    {
        bool a = 0;
        while ( !a )
        {
            for ( int j = 2; j <= b; j++)
            {
                if ( j == b )
                {
                    a = true;
                    break;
                }

                else if ( b % j == 0 )
                {
                    break;
                }

            }
            b++;
        }
    }
    b--;

    cout<< b <<endl;
}

void Project::largest_product_in_series()
{

    ifstream ReadFile;
    string line, str;
    string numbers = "";
    int index = 0;
    int temp = 0;
    int y = 0;
    int product = 1;
    int product2 = 1;
    int getnumber[5];
    int highestproduct[5];
    ReadFile.open("4digits.txt");

    while(ReadFile.good())
    {
        getline(ReadFile, line);
        str = line;
        numbers += str;
    }
        string a;
        for(int i = 0; i < 1000 - 4;i++)
        {
            product2 = 1;

            index = i;
            for(int k = 0; k < 5; k++)
            {
                a = numbers.at(index);
                stringstream(a) >> temp;
                y = temp;
                getnumber[k] = y;
                product2 *= getnumber[k];
                index++;
             }

            if(product < product2)
            {
                product = product2;
                for(int k = 0; k < 5; k++)
                {
                    highestproduct[k] = getnumber[k];
                }
            }

        }
      cout << product << endl;

}

void Project::special_pytho_triplet()
{
    bool test = false;
    int a, b, c;

    for ( a = 1; a < 1000/3; a++ )
    {
        for(b = 2; b < 1000/2; b++)
        {
            c = 1000 - a - b;

            if ( a * a + b * b == c * c )
            {
                test = true;
                break;
            }
        }
        if ( test )
        {
            break;
        }
    }

    cout << a * b * c << endl;
}


void Project::summation_of_primes()
{
    long long sum = 0LL;
    int range = 2000000;

    for ( int i = 2; i < range; i++ )
    {
        for ( int j = 2; j <= i; j++ )
        {
            if ( j == i )
            {
                sum += i;
            }

            else if ( i % j == 0 )
            {
                break;
            }
        }
    }

    cout << sum << endl << endl;
}

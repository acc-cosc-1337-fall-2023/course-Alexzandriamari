//add include statements
#include<iostream>
#include<string>
#include "func.h"

//add function code here
using namespace::std;

// get gc content function
double get_gc_content(const string& dna)
{
    int gc_count = 0;
    for (char nucleotide : dna) 
    {
        if (nucleotide == 'C' || nucleotide == 'G')
        {
            gc_count++;
        }
    }
    return static_cast<double>(gc_count) / dna.length();
}


// get dna complement function
string get_dna_complement(const string& dna)
{
    string complement = "";
    for (char nucleotide : dna)
    {
        switch (nucleotide)
        {
            case 'A':
            complement += 'T';
            break;
            case 'T':
            complement += 'A';
            break;
            case 'C':
            complement += 'G';
            break;
            case 'G':
            complement += 'C';
            break;
        }
    }
    return complement;
}
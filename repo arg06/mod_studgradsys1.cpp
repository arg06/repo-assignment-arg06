#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

int main (){
    string familienaam,voornaam, IDnummer;
    int aantalvakken[] = {2, 3, 4, 5, 6, 7, 8};
    cout << "Vul uw familienaam in: " <<endl;
    cin >> familienaam ;
    cout << "Vul uw voornaam in: " <<endl;
    cin >> voornaam;
    cout << "Vul uw IDnummer in: " <<endl;
    cin >> IDnummer;
    cout << "Uw naam is: "<< familienaam <<" "<< voornaam <<endl;
    cout << "Uw id nummer is: "<< IDnummer <<endl;
    
    cout << " Kies het aantal vakken die u wilt invoeren."<<endl;
    cout << " Kies uit de opties 2, 3, 4, 5, 6, 7 of 8 vakken"<<endl;
    cin >> aantalvakken[7];


    float SUB1=0;
    float SUB2=0;
    float SUB3=0;
    float SUB4=0;
    float SUB5=0;
    float SUB6=0;
    float SUB7=0;
    float SUB8=0;
    string naam1, naam2, naam3, naam4, naam5, naam6, naam7, naam8;
    float Average;
    float Percentage;
    
    if (aantalvakken[7]<=2){
        cout <<"Naam vak 1 :"<<endl;
        cin >> naam1;
        cout << "Cijfer voor " << naam1<< " is :" <<endl;
        cin >> SUB1;
        cout <<" Naam vak 2 :"<<endl;
        cin >> naam2;
        cout << "Cijfer voor " << naam2<< " is :" <<endl;
        cin >> SUB2;
        
    }
    else if (aantalvakken[7]<=3){
        cout <<"Naam vak 1 :"<<endl;
        cin >> naam1;
        cout << "Cijfer voor " << naam1<< " is :" <<endl;
        cin >> SUB1;
        cout <<" Naam vak 2 :"<<endl;
        cin >> naam2; 
        cout << "Cijfer voor " << naam2<< " is :" <<endl;
        cin >> SUB2;
        cout <<" Naam vak 3 :"<<endl;
        cin >> naam3; 
        cout << "Cijfer voor " << naam3<< " is :" <<endl;
        cin >> SUB3;
    }
    else if (aantalvakken[7]<=4){
        cout <<"Naam vak 1 :"<<endl;
        cin >> naam1;
        cout << "Cijfer voor " << naam1<< " is :" <<endl;
        cin >> SUB1;
        cout <<" Naam vak 2 :"<<endl;
        cin >> naam2; 
        cout << "Cijfer voor " << naam2<< " is :" <<endl;
        cin >> SUB2;
        cout <<" Naam vak 3 :"<<endl;
        cin >> naam3; 
        cout << "Cijfer voor " << naam3<< " is :" <<endl;
        cin >> SUB3;
        cout <<" Naam vak 4 :"<<endl;
        cin >> naam4; 
        cout << "Cijfer voor " << naam4<< " is :" <<endl;
        cin >> SUB4;

    }
    else if (aantalvakken[7]<=5){
        cout <<"Naam vak 1 :"<<endl;
        cin >> naam1;
        cout << "Cijfer voor " << naam1<< " is :" <<endl;
        cin >> SUB1;
        cout <<" Naam vak 2 :"<<endl;
        cin >> naam2; 
        cout << "Cijfer voor " << naam2<< " is :" <<endl;
        cin >> SUB2;
        cout <<" Naam vak 3 :"<<endl;
        cin >> naam3; 
        cout << "Cijfer voor " << naam3<< " is :" <<endl;
        cin >> SUB3;
        cout <<" Naam vak 4 :"<<endl;
        cin >> naam4; 
        cout << "Cijfer voor " << naam4<< " is :" <<endl;
        cin >> SUB4;
        cout <<" Naam vak 5 :"<<endl;
        cin >> naam5; 
        cout << "Cijfer voor " << naam5<< " is :" <<endl;
        cin >> SUB5;

    }
    else if (aantalvakken[7]<=6){
        cout <<"Naam vak 1 :"<<endl;
        cin >> naam1;
        cout << "Cijfer voor " << naam1<< " is :" <<endl;
        cin >> SUB1;
        cout <<" Naam vak 2 :"<<endl;
        cin >> naam2; 
        cout << "Cijfer voor " << naam2<< " is :" <<endl;
        cin >> SUB2;
        cout <<" Naam vak 3 :"<<endl;
        cin >> naam3; 
        cout << "Cijfer voor " << naam3<< " is :" <<endl;
        cin >> SUB3;
        cout <<" Naam vak 4 :"<<endl;
        cin >> naam4; 
        cout << "Cijfer voor " << naam4<< " is :" <<endl;
        cin >> SUB4;
        cout <<" Naam vak 5 :"<<endl;
        cin >> naam5; 
        cout << "Cijfer voor " << naam5<< " is :" <<endl;
        cin >> SUB5;
        cout <<" Naam vak 6 :"<<endl;
        cin >> naam6; 
        cout << "Cijfer voor " << naam6<< " is :" <<endl;
        cin >> SUB6;

    }
    else if (aantalvakken[7]<=7){
        cout <<"Naam vak 1 :"<<endl;
        cin >> naam1;
        cout << "Cijfer voor " << naam1<< " is :" <<endl;
        cin >> SUB1;
        cout <<" Naam vak 2 :"<<endl;
        cin >> naam2; 
        cout << "Cijfer voor " << naam2<< " is :" <<endl;
        cin >> SUB2;
        cout <<" Naam vak 3 :"<<endl;
        cin >> naam3; 
        cout << "Cijfer voor " << naam3<< " is :" <<endl;
        cin >> SUB3;
        cout <<" Naam vak 4 :"<<endl;
        cin >> naam4; 
        cout << "Cijfer voor " << naam4<< " is :" <<endl;
        cin >> SUB4;
        cout <<" Naam vak 5 :"<<endl;
        cin >> naam5; 
        cout << "Cijfer voor " << naam5<< " is :" <<endl;
        cin >> SUB5;
        cout <<" Naam vak 6 :"<<endl;
        cin >> naam6; 
        cout << "Cijfer voor " << naam6<< " is :" <<endl;
        cin >> SUB6;
        cout <<" Naam vak 7 :"<<endl;
        cin >> naam7; 
        cout << "Cijfer voor " << naam7<< " is :" <<endl;
        cin >> SUB7;
    }
    else if (aantalvakken[7]<=8){
        cout <<"Naam vak 1 :"<<endl;
        cin >> naam1;
        cout << "Cijfer voor " << naam1<< " is :" <<endl;
        cin >> SUB1;
        cout <<" Naam vak 2 :"<<endl;
        cin >> naam2; 
        cout << "Cijfer voor " << naam2<< " is :" <<endl;
        cin >> SUB2;
        cout <<" Naam vak 3 :"<<endl;
        cin >> naam3; 
        cout << "Cijfer voor " << naam3<< " is :" <<endl;
        cin >> SUB3;
        cout <<" Naam vak 4 :"<<endl;
        cin >> naam4; 
        cout << "Cijfer voor " << naam4<< " is :" <<endl;
        cin >> SUB4;
        cout <<" Naam vak 5 :"<<endl;
        cin >> naam5; 
        cout << "Cijfer voor " << naam5<< " is :" <<endl;
        cin >> SUB5;
        cout <<" Naam vak 6 :"<<endl;
        cin >> naam6; 
        cout << "Cijfer voor " << naam6<< " is :" <<endl;
        cin >> SUB6;
        cout <<" Naam vak 7 :"<<endl;
        cin >> naam7; 
        cout << "Cijfer voor " << naam7<< " is :" <<endl;
        cin >> SUB7;
        cout <<" Naam vak 8 :"<<endl;
        cin >> naam8; 
        cout << "Cijfer voor " << naam8<<" is :" <<endl;
        cin >> SUB8;
    }


    string grade;
    string message;
    Average = ((SUB1 + SUB2 + SUB3 + SUB4 + SUB5 + SUB6 + SUB7 + SUB8)/aantalvakken[7]);
    Percentage = ((Average/10)*100);

    if (Percentage >= 80){
     grade = ("Grade: A");
     message = ("Okay NERD!!!");
     //cout << "Grade A" << endl;
     //cout << "Okay NERD!!!" << endl;
     cout << grade << endl;
     cout << message << endl;
    }
    
    else if (Percentage >=65 && Percentage <80){
     grade = ("Grade: B");
     message = ("You can do better than that");
     //cout << "Grade  B" << endl;
     //cout << "You can do better than that" << endl;
     cout << grade << endl;
     cout << message << endl;
    }
    
    else if (Percentage >= 55 && Percentage <65){
     grade = ("Grade: C");
     message = ("Oof, try harder");
     //cout << "Grade C" << endl; 
    // cout << "Oof, try harder" << endl;
     cout << grade << endl;
     cout << message << endl;
    }
    
    else if (Percentage >= 50 && Percentage <55){
     grade = ("Grade: D");
     message = ("Congrats? At least you aren't dumb ig");
     //cout << "Grade D" << endl; 
     //cout << "Congrats? At least you aren't dumb ig" << endl;
     cout << grade << endl;
     cout << message << endl;
    }
    
    else if (Percentage <50){
     grade = ("Grade: F");
     message = ("Womp womp, beter luck next time");
     //cout << "Grade F" << endl; 
     //cout << "Womp womp, beter luck next time" << endl;
     cout << grade << endl;
     cout << message << endl;
    }
    cout << "Here is the evaluation of student: " << familienaam<<" "<<voornaam << endl;
    cout << "The average off all grades: " <<Average << endl;
    cout << "Average in percentages: " << Percentage << "%" << endl;
    cout << "Printing your results in a text file: Evaluation101.exe..." << endl;
    //Start van de code om in een file te printen.
    
    int columnwidth (30);
    
    fstream output;
    
    output.open ("Evaluation101.exe", std::fstream::in | std::fstream::out | std::fstream::app);
    output << "Name: " << familienaam<<" "<< voornaam << endl;
    output << "Student number: " << IDnummer<<endl;
    output << "Here is the evaluation of student: " << familienaam<<" "<<voornaam << endl;

    output << left;
    output << setfill ('.');
    output << setw (columnwidth) << "Subject" << setw (columnwidth) << "Grade" <<endl;
    output << setw (columnwidth) << naam1 << setw (columnwidth) << SUB1 << endl;
    output << setw (columnwidth) << naam2 << setw (columnwidth) << SUB2 << endl;
    output << setw (columnwidth) << naam3 << setw (columnwidth) << SUB3 << endl;
    output << setw (columnwidth) << naam4 << setw (columnwidth) << SUB4 << endl;
    output << setw (columnwidth) << naam5 << setw (columnwidth) << SUB5 << endl;
    output << setw (columnwidth) << naam6 << setw (columnwidth) << SUB6 << endl;
    output << setw (columnwidth) << naam7 << setw (columnwidth) << SUB7 << endl;
    output << setw (columnwidth) << naam8 << setw (columnwidth) << SUB8 << endl;

    output << "The average off all grades: " << Average << endl;
    output << "Average in percentages: " << Percentage << "%" << endl;
    output << grade << endl;
    output << message << endl;
    output << " " << endl;
    output.close();
    

    return 0;
}
     
    


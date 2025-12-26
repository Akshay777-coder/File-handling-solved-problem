#include <iostream>
#include <fstream>
using namespace std;

int main(){
// 1. Write to a file

        /*string str1 = "Hello, file handling";
        ofstream out("data.txt");
        out << str1;*/

// 2. Read from a file
//      Write a c++ program that creates a file named data.txt and writes

        /*string str2;
        ifstream in("data.txt");
        getline(in,str2);
        cout << str2;*/

// 3. Append to a file
//      Write a program that reads the content of data.txt and display them on the screen

        /*string str3 = " I am appending this string into data.txt";
        ofstream out("data.txt",ios::app);
        out << str3;*/

// 4. Write multiple lines
//      Writes a program that appends the text to an existing file data.txt
//      without deleting the previous contents.

        /*string str4 = "This string is being appended and the previous data is being removedii\n";
        ofstream out("data.txt");
        out << str4;
        out << str4;
        out << str4;*/

// 5. Count characters in a file
//      Write a program that writes 5 lines entered by the user into a file called notes.txt

        /*ofstream out;
        out.open("notes.txt");
        string str1, str2, str3, str4, str5;
        cout << "Enter five lines: " << endl;
        getline(cin,str1);
        getline(cin,str2);
        getline(cin,str3);
        getline(cin,str4);
        getline(cin,str5);
        out << str1 << endl << str2<< endl << str3<< endl << str4<< endl << str5;                                                                              out.close();
        ifstream in("notes.txt");
        char ch;
        int count = 0;

        while(in.get(ch)){
                count++; // reads every character
        }
        in.close();
        cout << "Number of characters in text file is: " << count << endl;*/

        /*ifstream in("story.txt");
        char ch;
        int words = 0;
        bool inword = false;
        while(in.get(ch)){
                if(ch == ' ' || ch == '\n' || ch == '\t'){
                        inword = false;
                }else{
                        if(!inword){
                                words++;
                                inword = true;
                        }
                }
        }
        in.close();
        cout << "Total Words : "<< words << endl;*/

// 7. Write a program that copy the file content
//      Writes a program that copies the contents of source.txt into destination.txt

        /*ofstream out("source.txt");
        out << "Hi this is akshay, i am a present of it lab";
        out.close();
        ifstream in("source.txt");
        string str;
        getline(in,str);
        in.close();
        ofstream output("destination.txt");
        output << str;
        output.close();*/

// 8. Search a word in file
//      Write a program that asks the user for a word and checks whether the word exists in
//      story.txt or not.

        /*ifstream in("story.txt");
        string word;
        string target;
        cout << "Search for the word : " << endl;
        cin >> target;
        bool found = false;
        while(in >> word){
                if(word == target){
                        found = true;
                        break;
                }
        }
        in.close();
        if(found){
                cout <<word << " exists in the file"<< endl << endl;
        }else{
                cout << "word do not existed in the file" << endl;
        }*/

// 9. Count lines in file
//      Write a program that counts the number of lines in notes.txt
/*ifstream in("notes.txt");
        char ch;
        int count = 0;
        while(in.get(ch)){
                if(ch == '\n'){
                        count++;
                }else{
                        continue;
                }
        }
        in.close();
        cout << "Number of lines are "<< count << endl;*/
// 10. Store and read numbers ()
//      Write a program that:
//      * Writes 10 integers into number.txt
//      * Read them back and print their sum

        /*ofstream out("number.txt");
        int num[10];
        for(int i = 0;i < 10;i++){
                cout << "Enter Number " << i + 1 << ": " << endl;
                cin >> num[i];
                out << num[i] << " ";
        }
        out.close();
        ifstream in("number.txt");
        int n = 0;
        int sum = 0;
        while(in >> n){
                sum += n;
        }
        in.close();
        cout << "Addition of the present numbers is : "<< sum << endl;*/
        return 0;
}

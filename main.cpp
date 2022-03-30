// FCAI-Programing 1-2022-assignment 2
// Program Name: All ciphers.cpp
// Program Description: a program to encrypt and decrypt with 10 ciphers.
// Last Modification Date: 28/3/2022
// Author and Group: Marwan Ahmed Abdelmonem, Yousef Alaa Rabea, Bassem Wael Mohamed, Group A
// IDs: 20210378, 20210476, 20210085
#include <iostream>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void Affine_encryption()
{
    string str;
    int len = 0, x = 0, temp = 0, res_enc = 0, res_decr = 0, asc = 0, a = 0, b = 0, c = 0, cheker = 0;
    cout << "please enter the key of the cipher a, b, and c\n";
    cin >> a >> b >> c;
    cheker = ((a * c) % 26);
    if (cheker != 1)
    {
        while (cheker != 1)
        {
            cout << "wrong input! (a * c) mod 26\n";
            cout << "please enter the key of the cipher a, b, and c\n";
            cin >> a >> b >> c;
            cheker = ((a * c) % 26);
            if (cheker == 1)
            {
                cout << "please enter a text to be encrypted\n";
                cin >> str;
                char charcter;
                len = str.length();
                for (int i = 0; i < len; i++)
                {
                    temp = str.at(i);
                    x = temp - 65;
                    res_enc = (((a * x) + b) % 26);
                    asc = res_enc + 65;
                    charcter = asc;
                    cout << charcter;
                }
            }
        }
    }
    else if (cheker == 1)
    {
        cout << "please enter a text to be encrypted\n";
        cin >> str;
        char charcter;
        len = str.length();
        for (int i = 0; i < len; i++)
        {
            temp = str.at(i);
            x = temp - 65;
            res_enc = (((a * x) + b) % 26);
            asc = res_enc + 65;
            charcter = asc;
            cout << charcter;
        }
    }
}
void Affine_decryption()
{
    string str;
    int len = 0, x = 0, temp = 0, res_enc = 0, res_decr = 0, asc = 0, a = 0, b = 0, c = 0, cheker = 0;
    cout << "please enter the key of the cipher a, b, and c\n";
    cin >> a >> b >> c;
    cheker = ((a * c) % 26);
    if (cheker != 1)
    {
        while (cheker != 1)
        {
            cout << "wrong input! (a * c)mod 26\n";
            cout<< "please enter the key of the cipher a, b, and c\n";
            cin >> a >> b >> c;
            cheker = ((a * c) % 26);
            if (cheker == 1)
            {
                cout << "please enter a text to be decrypted\n";
                cin >> str;
                char charcter;
                len = str.length();
                for (int i = 0; i < len; i++)
                {
                    temp = str.at(i);
                    x = temp - 65;
                    res_decr = (c * (x - b)) % 26;
                    if (res_decr < 0)
                    {
                        res_decr += 26;
                    }
                    asc = res_decr + 65;
                    charcter = asc;
                    cout << charcter;
                }
            }
        }
    }
    else if (cheker == 1)
    {
        cout << "please enter a text to be decrypted\n";
        cin >> str;
        char charcter;
        len = str.length();
        for (int i = 0; i < len; i++)
        {
            temp = str.at(i);
            x = temp - 65;
            res_decr = (c * (x - b)) % 26;
            if (res_decr < 0)
            {
                res_decr += 26;
            }
            asc = res_decr + 65;
            charcter = asc;
            cout << charcter;
        }
    }
}
void ceaser_cipher()
{
    string str;
    int shift;
    cout<<"to encrypt put a positive number, to decrypt put a negative number\n";
    cout<<"please enter a text to encrypt or decrypt\n";
    getline(cin, str);
    int n, len = 0, result = 0, res = 0, temp = 0;
    cout << "please enter the key of the cipher\n";
    cin >> shift;
    len = str.length();
    char c[len];
    for(int i = 0; i < len; i++)
    {
        n = str.at(i);

        if(n != 32) {
            n = toupper(n);
            res = n + shift;
            if (res >= 65 && res <= 90) {
                result = res;
                c[i] = result;
                //cout << result;
            } else if (res > 90) {
                temp = res - 90;
                result = temp + 64;
                c[i] = result;

            } else if (res < 65) {
                temp = 65 - res;
                result = 91 - temp;
                c[i] = result;

            }
        }

    }
    for(int i = 0; i < len; i++)
    {
        cout<< c[i];
    }
}
void Atbash_cipher(){
    string str;
    cout<<"please enter a text to be encrypted or decrypted";
    cin >> str;
    int len, asc = 0;
    len = str.length();
    char arr[len];
    for (int i = 0; i < len; i++)
    {
        asc = str.at(i);
        if (asc == 65)
        {
            arr[i] = 90;
            cout << arr[i];
        }
        else if (asc == 66)
        {
            arr[i] = 89;
            cout << arr[i];
        }
        else if (asc == 67)
        {
            arr[i] = 88;
            cout << arr[i];
        }
        else if (asc == 68)
        {
            arr[i] = 87;
            cout << arr[i];
        }
        else if (asc == 69)
        {
            arr[i] = 86;
            cout << arr[i];
        }
        else if (asc == 70)
        {
            arr[i] = 85;
            cout << arr[i];
        }
        else if (asc == 71)
        {
            arr[i] = 84;
            cout << arr[i];
        }
        else if (asc == 72)
        {
            arr[i] = 83;
            cout << arr[i];
        }
        else if (asc == 73)
        {
            arr[i] = 82;
            cout << arr[i];
        }
        else if (asc == 74)
        {
            arr[i] = 81;
            cout << arr[i];
        }
        else if (asc == 75)
        {
            arr[i] = 80;
            cout << arr[i];
        }
        else if (asc == 76)
        {
            arr[i] = 79;
            cout << arr[i];
        }
        else if (asc == 77)
        {
            arr[i] = 78;
            cout << arr[i];
        }
        else if (asc == 78)
        {
            arr[i] = 77;
            cout << arr[i];
        }
        else if (asc == 79)
        {
            arr[i] = 76;
            cout << arr[i];
        }
        else if (asc == 80)
        {
            arr[i] = 75;
            cout << arr[i];
        }
        else if (asc == 81)
        {
            arr[i] = 74;
            cout << arr[i];
        }
        else if (asc == 82)
        {
            arr[i] = 73;
            cout << arr[i];
        }
        else if (asc == 83)
        {
            arr[i] = 72;
            cout << arr[i];
        }
        else if (asc == 84)
        {
            arr[i] = 71;
            cout << arr[i];
        }
        else if (asc == 85)
        {
            arr[i] = 70;
            cout << arr[i];
        }
        else if (asc == 86)
        {
            arr[i] = 69;
            cout << arr[i];
        }
        else if (asc == 87)
        {
            arr[i] = 68;
            cout << arr[i];
        }
        else if (asc == 88)
        {
            arr[i] = 67;
            cout << arr[i];
        }
        else if (asc == 89)
        {
            arr[i] = 66;
            cout << arr[i];
        }
        else if (asc == 90)
        {
            arr[i] = 65;
            cout << arr[i];
        }
        else
        {
            cout << arr[i];
        }
    }
}
void Vignere_encryption()
{
    cout << "please enter a text to be encrypted\n";
    string text;
    getline(cin, text);
    string str = "HWONE";
    cout << "please enter a key\n";
    cin >> str;
    int len = 0;
    len = str.length();
    char x;
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        x = (text[i] + str[counter]) % 26 + 65;
        cout << x;
        counter++;
        if (counter == len) {
            counter = 0;
        }
    }
}
void Vignere_decryption(){
    cout << "please enter a text to be encrypted\n";
    string text;
    getline(cin, text);
    string str = "HWONE";
    cout << "please enter a key\n";
    cin >> str;
    int len = 0;
    len = str.length();
    char x;
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] < str[counter]){
            x = (text[i] - str[counter]) % 26 + 26 + 65 ;
        }else {
            x = (text[i] - str[counter]) % 26 + 65 ;
        }
        cout << "the text is: ";
        cout << x;
        counter++;
        if (counter == len) {
            counter = 0;
        }
    }
}
void baconian_encryption()
{
    string text;
    cout<<"enter your text: ";
    getline(cin,text);
    int x= text.length();
    for(int i=0;i<=x;i++){
        switch(toupper(text[i])){
            case 'A':
                cout<<" aaaaa ";
                break;
            case 'B':
                cout<<" aaaab ";
                break;
            case 'C':
                cout<<" aaaba ";
                break;
            case 'D':
                cout<<" aaabb ";
                break;
            case 'E':
                cout<<" aabaa ";
                break;
            case 'F':
                cout<<" aabab ";
                break;
            case 'G':
                cout<<" aabba ";
                break;
            case 'H':
                cout<<" aabbb ";
                break;
            case 'I':
                cout<<" abaaa ";
                break;
            case 'J':
                cout<<" abaab ";
                break;
            case 'K':
                cout<<" ababa ";
                break;
            case 'L':
                cout<<" ababb ";
                break;
            case 'M':
                cout<<" abbaa ";
                break;
            case 'N':
                cout<<" abbab ";
                break;
            case 'O':
                cout<<" abbba ";
                break;
            case 'P':
                cout<<" abbbb ";
                break;
            case 'Q':
                cout<<" baaaa ";
                break;
            case 'R':
                cout<<" baaab ";
                break;
            case 'S':
                cout<<" baaba ";
                break;
            case 'T':
                cout<<" baabb ";
                break;
            case 'U':
                cout<<" babaa ";
                break;
            case 'V':
                cout<<" babab ";
                break;
            case 'W':
                cout<<" babba ";
                break;
            case 'X':
                cout<<" babbb ";
                break;
            case 'Y':
                cout<<" bbaaa ";
                break;
            case 'Z':
                cout<<" bbaab ";
                break;
        }
    }
}
void baconian_decryption()
{
    string arr[100];
    int i = 0; // declare a counter
    string cipher, cheker;
    char str[100]; // declare the size of string
    cout << "please enter a space between every 5 characters\n";
    cout << "Enter a string: ";
    cin.getline(str, 100); // use getline() function to read a string from input stream

    char *ptr; // declare a pointer
    ptr = strtok(str, " , "); // use strtok() function to separate string using comma (,) delimiter.

    // use while loop to check ptr is not null
    while (ptr != NULL)
    {
        cipher = ptr;
        arr[i] = cipher;
        //cout << cipher  << " - "; // print the string token
        ptr = strtok (NULL, " , ");
        i++;
    }
    for(int j = 0; j < i; j++)
    {
        cheker = arr[j];
        if(cheker == "aaaaa")
            cout << "A";
        else if(cheker == "aaaab")
            cout << "B";
        else if(cheker == "aaaba")
            cout << "C";
        else if(cheker == "aaabb")
            cout << "D";
        else if(cheker == "aabaa")
            cout << "E";
        else if(cheker == "aabab")
            cout << "F";
        else if(cheker == "aabba")
            cout << "G";
        else if(cheker == "aabbb")
            cout << "H";
        else if(cheker == "abaaa")
            cout << "I";
        else if(cheker == "abaab")
            cout << "J";
        else if(cheker == "ababa")
            cout << "K";
        else if(cheker == "ababb")
            cout << "L";
        else if(cheker == "abbaa")
            cout << "M";
        else if(cheker == "abbab")
            cout << "N";
        else if(cheker == "abbba")
            cout << "O";
        else if(cheker == "abbbb")
            cout << "P";
        else if(cheker == "baaaa")
            cout << "Q";
        else if(cheker == "baaab")
            cout << "R";
        else if(cheker == "baaba")
            cout << "S";
        else if(cheker == "baabb")
            cout << "T";
        else if(cheker == "babaa")
            cout << "U";
        else if(cheker == "babab")
            cout << "V";
        else if(cheker == "babba")
            cout << "W";
        else if(cheker == "babbb")
            cout << "X";
        else if(cheker == "bbaaa")
            cout << "Y";
        else if(cheker == "bbaab")
            cout << "Z";
        else if(cheker == "/")
            cout << " ";
    }
}
void simple_substitution_encryption() {
    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string key;
    cout << "Please enter the key: ";
    cin >> key;
    string b;
    b += key;
    bool cond = true; //if true then add if false not
    for (int i = 0; i < 26; i++) {
        cond = true;
        for (int j = 0; j < key.length(); j++) {
            if (key[j] == arr[i]) {
                cond = false;
            }
        }
        if (cond == true) {
            b += arr[i];
        }
    }
    cout << "Please enter the text: ";
    string label;
    cin.ignore();
    getline(cin, label);
    for (int i = 0; i < label.length(); i++) {
        for (int j = 0; j < 26; j++) {
            if (label[i] == ' ') {
                cout << ' ';
                break;
            }
            if (arr[j] == label[i]) {
                cout << b[j];
            }
        }
    }
}
void simple_substitution_decryption() {
    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string key;
    cout << "Please enter the key: ";
    cin >> key;
    string b;
    b += key;
    bool cond = true; //if true then add if false not
    for (int i = 0; i < 26; i++)
    {
        cond = true;
        for (int j = 0; j < key.length(); j++)
        {
            if (key[j] == arr[i])
            {
                cond = false;
            }
        }
        if (cond == true)
        {
            b += arr[i];
        }
    }
    cout << "Please enter the text: ";
    string label;
    cin.ignore();
    getline(cin, label);
    for (int i = 0; i < label.length(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (label[i] == ' ')
            {
                cout << ' ';
                break;
            }
            if (b[j] == label[i])
            {
                cout << arr[j];
            }
        }
    }
}
void polybius_square_encryption()
{
    string text;
    char y;
    int num_line[5];     /// to store the new number line of the row and column in the martrix
    char arr[5][5]=
            {
                    'a','b','c','d','e',
                    'f','g','h','i','k',
                    'l','m','n','o','p',
                    'q','r','s','t','u',
                    'v','w','x','y','z'
            };
    int s=0;        ///to take five numbers from the user
    while(s<5)
    {
        cout<<"enter you num: ";
        cin>>num_line[s];
        s+=1;
    }
    cout<<"Plain text: ";
    cin.ignore();
    getline(cin,text);  /// to accept spaces between the string
    int z=text.length();
    int game[z];
    cout<<endl;
    cout<<"  ";     /// to show an empty index before the matrix
    for(int i=0; i<5; i++)
    {
        cout<<num_line[i]<<" "; /// to print the numbers in the first row as a head of the characters
    }
    cout<<endl;
    for (int i=0; i<5; i++)
    {

        if (i<5)
        {
            cout<<num_line[i]<<" "; ///to print only one number in the beginning of every row
        }
        for (int j=0; j<5; j++)
        {
            cout<<arr[i][j]<<" ";   /// to print five characters in each row
            if (j==4)
            {
                cout<<endl;         /// after printing five characters , start a new line
            }

        }
    }

    for (int ind = 0 ;ind<text.size(); ind++) {
        y = text[ind];              /// to store one character from the text
        for (int i = 0; i < 5; i++) { /// to iterate on the rows
            if(y==' '){
                cout<<" ";      /// if there is a space
                break;
            }
            for (int j = 0; j < 5; j++) { ///to iterate on the columns
                if (y == arr[i][j]) {
                    cout << num_line[i] << num_line[j];     /*if the character in the text equal to the character in the matrix, print the same index
                                                                number in the array entered from the user.*/
                }
            }
        }
    }
}
void polybuis_square_decryption()
{
    string text;
    char y;
    int str;
    char num_line[5];
    char arr[5][5]=
            {
                    'a','b','c','d','e',
                    'f','g','h','i','k',
                    'l','m','n','o','p',
                    'q','r','s','t','u',
                    'v','w','x','y','z'
            };
    int s=0;
    while(s<5)
    {
        cout<<"enter you num: ";
        cin>>num_line[s];
        s+=1;
    }
    cout<<endl;
    cout<<"  ";
    for(int i=0; i<5; i++)
    {
        cout<<num_line[i]<<" ";
    }
    cout<<endl;


    for (int i=0; i<5; i++)
    {

        if (i<5)
        {
            cout<<num_line[i]<<" ";
        }
        for (int j=0; j<5; j++)
        {
            cout<<arr[i][j]<<" ";
            if (j==4)
            {
                cout<<endl;
            }

        }
    }
    cout<<"Plain text: ";
    cin.ignore();
    getline(cin,text);
    int z=text.length();
    cout<<endl;
    int m,b;
    for (int ind = 0 ;ind<text.size(); ind+=2) {       ///counter increases by two to take two by two numbers
        y = text[ind];
        if(text[ind]==' '){
            ind--;      /// if there is space decrease the counter one.
            cout<<" ";
            continue;
        }
        for (int i = 0; i < 5; i+=1) {
            if(text[ind]==num_line[i]){     /// if the first character(num) equal to user's array character (num)
                m=i;                        /// then store the number of index or counter(i) in a new variable
            }
        }
        for (int j=0; j< 5;j++){
            if(text[ind+1]==num_line[j]){   /// if the second character(num) equal to user's array character (num)
                b=j;                    ///  then store the number of index or counter(j) in a new variable
            }
        }
        cout<<arr[m][b];    /// print the two indexes(m,b) from the array of characters

    }
}
void morse_encrypt()
{
    char x;
    string str;
    cout<<"please enter a text\n";
    getline(cin, str);
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        //string arr[str.length()];
        x = str.at(i);
        //cout << x << " ";
        //switch (x)
        //{
        if (x == 'A')
            cout << ".- ";
        if (x == 'B')
            cout << "-... ";
        if (x == 'C')
            cout << "-.-. ";
        if (x == 'D')
            cout << "-.. ";
        if (x == 'E')
            cout << ". ";
        if (x == 'F')
            cout << "..-. ";
        if (x ==  'G')
            cout << "--. ";
        if (x ==  'H')
            cout << ".... ";
        if (x == 'I')
            cout << ".. ";
        if (x == 'J')
            cout << ".--- ";
        if (x == 'K')
            cout << "-.- ";
        if (x == 'L')
            cout << ".-.. ";
        if (x == 'M')
            cout << "-- ";
        if (x == 'N')
            cout << "-. ";
        if (x == 'O')
            cout << "--- ";
        if (x == 'P')
            cout << ".--. ";
        if (x == 'Q')
            cout << "--.- ";
        if (x == 'R')
            cout << ".-. ";
        if (x == 'S')
            cout << "... ";
        if (x == 'T')
            cout << "- ";
        if (x == 'U')
            cout << "..- ";
        if (x == 'V')
            cout << "...- ";
        if (x == 'W')
            cout << ".-- ";
        if (x == 'X')
            cout << "-..- ";
        if (x == 'Y')
            cout << "-.-- ";
        if (x == 'Z')
            cout << "--.. ";
        if (x == '1')
            cout << ".---- ";
        if (x == '2')
            cout << "..--- ";
        if (x == '3')
            cout << "...-- ";
        if (x == '4')
            cout << "....- ";
        if (x == '5')
            cout << "..... ";
        if (x == '6')
            cout << "-.... ";
        if (x == '7')
            cout << "--... ";
        if (x == '8')
            cout << "---.. ";
        if (x == '9')
            cout << "----. ";
        if (x == '0')
            cout << "----- ";
        //cout<<arr[i];
    }
}
void morse_decrypt()
{
    string arr[100];
    int i = 0; // declare a counter
    string cipher, cheker;
    char str[100]; // declare the size of string
    cout << " Enter a string: " <<endl;
    cin.getline(str, 100); // use getline() function to read a string from input stream

    char *ptr; // declare a pointer
    ptr = strtok(str, " , "); // use strtok() function to separate string using comma (,) delimiter.

    // use while loop to check ptr is not null
    while (ptr != NULL)
    {
        cipher = ptr;
        arr[i] = cipher;
        //cout << cipher  << " - "; // print the string token
        ptr = strtok (NULL, " , ");
        i++;
    }
    for(int j = 0; j < i; j++)
    {
        cheker = arr[j];
        if(cheker == ".-")
            cout << "A";
        else if(cheker == "-...")
            cout << "B";
        else if(cheker == "-.-.")
            cout << "C";
        else if(cheker == "-..")
            cout << "D";
        else if(cheker == ".")
            cout << "E";
        else if(cheker == "..-.")
            cout << "F";
        else if(cheker == "--.")
            cout << "G";
        else if(cheker == "....")
            cout << "H";
        else if(cheker == "..")
            cout << "I";
        else if(cheker == ".---")
            cout << "J";
        else if(cheker == "-.-")
            cout << "K";
        else if(cheker == ".-..")
            cout << "L";
        else if(cheker == "--")
            cout << "M";
        else if(cheker == "-.")
            cout << "N";
        else if(cheker == "---")
            cout << "O";
        else if(cheker == ".--.")
            cout << "P";
        else if(cheker == "--.-")
            cout << "Q";
        else if(cheker == ".-.")
            cout << "R";
        else if(cheker == "...")
            cout << "S";
        else if(cheker == "-")
            cout << "T";
        else if(cheker == "..-")
            cout << "U";
        else if(cheker == "...-")
            cout << "V";
        else if(cheker == ".--")
            cout << "W";
        else if(cheker == "-..-")
            cout << "X";
        else if(cheker == "-.--")
            cout << "Y";
        else if(cheker == "--..")
            cout << "Z";
        else if(cheker == ".----")
            cout << "1";
        else if(cheker == "..---")
            cout << "2";
        else if(cheker == "...--")
            cout << "3";
        else if(cheker == "....-")
            cout << "4";
        else if(cheker == ".....")
            cout << "5";
        else if(cheker == "-....")
            cout << "6";
        else if(cheker == "--...")
            cout << "7";
        else if(cheker == "---..")
            cout << "8";
        else if(cheker == "----.")
            cout << "9";
        else if(cheker == "-----")
            cout << "10";
        else if(cheker == "/")
            cout << " ";
    }
}
void xor_encryption()
{
    string str;
    int len = 0, x = 0, temp = 0, res_enc = 0, res_decr = 0, asc = 0, a = 0, b = 0, c = 0, cheker = 0;
    cout << "please enter the key of the cipher a, b, and c\n";
    cin >> a >> b >> c;
    cheker = ((a * c) % 26);
    if (cheker != 1)
    {
        while (cheker != 1)
        {
            cout << "wrong input! (a * c) mod 26\n";
            cout << "please enter the key of the cipher a, b, and c\n";
            cin >> a >> b >> c;
            cheker = ((a * c) % 26);
            if (cheker == 1)
            {
                cout << "please enter a text to be encrypted\n";
                cin >> str;
                char charcter;
                len = str.length();
                for (int i = 0; i < len; i++)
                {
                    temp = str.at(i);
                    x = temp - 65;
                    res_enc = (((a * x) + b) % 26);
                    asc = res_enc + 65;
                    charcter = asc;
                    cout << charcter;
                }
            }
        }
    }
    else if (cheker == 1)
    {
        cout << "please enter a text to be encrypted\n";
        cin >> str;
        char charcter;
        len = str.length();
        for (int i = 0; i < len; i++)
        {
            temp = str.at(i);
            x = temp - 65;
            res_enc = (((a * x) + b) % 26);
            asc = res_enc + 65;
            charcter = asc;
            cout << charcter;
        }
    }

}
void xor_decryption()
{
    string str;
    int len = 0, x = 0, temp = 0, res_enc = 0, res_decr = 0, asc = 0, a = 0, b = 0, c = 0, cheker = 0;
    cout << "please enter the key of the cipher a, b, and c\n";
    cin >> a >> b >> c;
    cheker = ((a * c) % 26);
    if (cheker != 1)
    {
        while (cheker != 1)
        {
            cout << "wrong input! (a * c)mod 26\n";
            cout<< "please enter the key of the cipher a, b, and c\n";
            cin >> a >> b >> c;
            cheker = ((a * c) % 26);
            if (cheker == 1)
            {
                cout << "please enter a text to be decrypted\n";
                cin >> str;
                char charcter;
                len = str.length();
                for (int i = 0; i < len; i++)
                {
                    temp = str.at(i);
                    x = temp - 65;
                    res_decr = (c * (x - b)) % 26;
                    if (res_decr < 0)
                    {
                        res_decr += 26;
                    }
                    asc = res_decr + 65;
                    charcter = asc;
                    cout << charcter;
                }
            }
        }
    }
    else if (cheker == 1)
    {
        cout << "please enter a text to be decrypted\n";
        cin >> str;
        char charcter;
        len = str.length();
        for (int i = 0; i < len; i++)
        {
            temp = str.at(i);
            x = temp - 65;
            res_decr = (c * (x - b)) % 26;
            if (res_decr < 0)
            {
                res_decr += 26;
            }
            asc = res_decr + 65;
            charcter = asc;
            cout << charcter;
        }
    }

}
void Rail_fence_encryption(){
    int n;
    string s;
    cout<<"Enter the message to encrypt: "<<'\n';
    cin>>s;
    cout<<"Enter key: "<<'\n';
    cin>>n;
    vector<vector<char>> a(n,vector<char>(s.size(),' '));
    int j=0;
    int flag=0;
    for(int i=0;i<s.size();i++){
        a[j][i] = s[i];
        if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;
        if(flag==0){
            j++;
        }
        else j--;
    }
    for(int i=0;i<n;i++){
        for(j=0;j<s.size();j++){
            if(a[i][j]!=' ')
                cout<<a[i][j];
        }
    }
}
void Rail_fence_decryption(){
    int n;
    string s;
    cout<<"Enter the message to decrypt: "<<'\n';
    cin>>s;
    cout<<"Enter key: "<<'\n';
    cin>>n;
    vector<vector<char>> a(n,vector<char>(s.size(),' '));
    int j=0;
    int f=0;
    for(int i=0;i<s.size();i++){
        a[j][i] = '0';
        if(j==n-1){
            f=1;
        }
        else if(j==0)
            f=0;
        if(f==0){
            j++;
        }
        else j--;
    }
    int temp =0;
    for(int i=0;i<n;i++){
        for(j=0;j<s.size();j++){
            if(a[i][j]=='0')
                a[i][j]= s[temp++];
        }
    }
    f=0;
    j=0;
    for(int i=0;i<s.size();i++){
        cout<<a[j][i];
        if(j==n-1){
            f=1;
        }
        else if(j==0)
            f=0;
        if(f==0){
            j++;
        }
        else j--;
    }
}
int main() {
cout << "please select the cipher you want\n";
cout << "1- Affine_encryption\n";
cout << "2- Affine_decryption\n";
cout << "3- ceaser_cipher\n";
cout << "4- Atbash_cipher\n";
cout << "5- Vignere_encryption\n";
cout << "6- Vignere_decryption\n";
cout << "7- baconian_encryption\n";
cout << "8- baconian_decryption\n";
cout << "9- simple_substitution_encryption\n";
cout << "10- simple_substitution_decryption\n";
cout << "11- polybius_square_encryption\n";
cout << "12- polybius_square_decryption\n";
cout << "13- morse_encrypt\n";
cout << "14- morse_decrypt\n";
cout << "15- xor_encryption\n";
cout << "16- xor_decryption\n";
cout << "17- Rail_fence_encryption\n";
cout << "18- Rail_fence_decryption\n";
int n=0;
cout << "pleses enter your choice: ";
cin >> n;
if(n == 1){
    Affine_encryption();
}
 else if(n == 2){
    Affine_decryption();
}
else if(n == 3){
    Atbash_cipher();
}
else if(n == 4){
    Vignere_encryption();
}
else if(n == 5){
    Vignere_decryption();
}
else if(n == 6){
    baconian_encryption();
}
else if(n == 7){
    baconian_decryption();
}
else if(n == 8){
    simple_substitution_encryption();
}
else if(n == 9){
    simple_substitution_decryption();
}
else if(n == 10){
    polybius_square_encryption();
}
else if(n == 11){
    polybuis_square_decryption();
}
else if(n == 12){
    morse_encrypt();
}
else if(n == 13){
    morse_decrypt();
}
else if(n == 14){
    xor_encryption();
}
else if(n == 15){
    xor_decryption();
}
else if(n == 16){
    Rail_fence_encryption();
}
else if(n == 17){
    Rail_fence_decryption();
}
    return 0;
}
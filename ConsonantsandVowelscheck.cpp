// Link : https://www.geeksforgeeks.org/problems/consonants-and-vowels-check/1

void checkString(string s) {
    int v = 0;
    int c = 0;

    // Your code here
    for(char& ch : s){
        if(ch == 'a'||'e'||'i'||'o'||'u') v++;
        else if(ch>='a' && ch<='z') c++;
    }

    if (v > c)
        cout << "Yes";
    else if (c > v)
        cout << "No";
    else
        cout << "Same";

    cout << endl;
}
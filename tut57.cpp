#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//Virtual Function in Details

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH() {}
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout << "Bogus Code:" << endl;
    }
};

class CWHVideos : public CWH
{
    float videoLength;

public:
    CWHVideos(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
     void display()
    {
        cout << "This is an amazing video with title:" << title << endl;
        cout << "Rating:" << rating << " Out of 5 Stars" << endl;
        cout << "This Video length is:" << videoLength << endl
             << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
     void display()
    {
        cout << "This is an amazing blog with title:" << title << endl;
        cout << "Rating:" << rating << " out of 5 Stars" << endl;
        cout << "This blog word length is:" << words << endl
             << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    //For Code with harry Video

    title = "django Tutorial Video";
    rating = 4.89;
    vlen = 12.3;
    CWHVideos djvideo(title, rating, vlen);
    //djvideo.display();

    //For Code with harry Text

    title = "django Tutorial ";
    rating = 4.39;
    words = 451;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tut[2];       //   ye teeno line important hai bs
    tut[0] = &djvideo; // ye teeno line important hai bs
    tut[1] = &djText;  //   ye teeno line important hai bs

    tut[0]->display();
    tut[1]->display();

    return 0;
}

/*  Rules for Virtual Function :
  1.They can't be static.
  2.They are accessed by object pointers
  3.Virtual function may be "friend" of another class
  4. A virtual function in a "base" class might not be used
  5.If a virtual function is defined in the "base" class,there is not necessity 
     of redefining it in the derived class

*/
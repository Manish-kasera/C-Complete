#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

/* Pure Virtual Function and Abstract Base function

 1.Pure Virtual Function ,abstract  base function bnne 
  ke liye use hota hai
 2. Abstract base Function wo function hai jisme pure
   atleast ek  virtual function present rhega

 
*/
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
    virtual void display() = 0; //do nothing fn ----> **pure virtual Function**
    // Ye display() he aisa bnna hai ki ishko derived class me overridden
    // kiya ja ske
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
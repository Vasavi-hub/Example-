/*Implement a system to manage different themes or skins for an HMI display.
Requirements:
Create a Theme class:
Attributes: backgroundColor, fontColor, fontSize, and iconStyle.
Implement methods to apply and display the theme.
Store multiple themes using std::map:
Example themes: Classic, Sport, and Eco.
Create a simple user interface to switch between themes:
Use console input to select a theme.
Display a preview of the selected theme on the console (e.g., "Sport Theme: Red Background, White Font").*/

#include<iostream>
#include<thread>
#include<map>
#include<vector>
#include<string>

class Themeskin{
    public:
    string backgroundcolour;
    float fontsize;
    string fontcolour;
    string iconstyle;

    Theme(string &color,float sizes,string colors,string styles){
        backgroundcolour=color;
        fontsize=sizes;
        fontcolour=colors;
        iconstyle=styles;
    }
};
     class theme{
        map<int,Themeskin> themes;
        int presentkey=1;
        public:
        
void addtheme(const Themeskin &theme){

    themes.insert({currentkey++,theme});

}

void applytheme(int key,string theme){
    if(themes.find(key)!=themes.end()){
        Themeskin appliedtheme=themes[key];
        cout << "Applying theme: " <<theme<< endl;
            cout << "Background Color: " << appliedtheme.backgroundcolour << endl;
            cout << "Font Color: " << appliedtheme.fontcolour << endl;
            cout << "Font Size: " << appliedtheme.fontsize << endl;
            cout << "Icon Style: " << appliedtheme.iconstyle << endl;

    }
    else{
        cout<<"theme not found!"<<endl;
    }

}
};
class Reload
{
    theme thememanager;
    public:
    Reload(){
        thememanager.addtheme(Themeskin("black","bluish",13,"oldschoolicon"));
        thememanager.addtheme(Themeskin("WarmRed", "AthleteYellow", 20, "EnergyIcon"));
        thememanager.addtheme(Themeskin("OrangeDimple", "ParishGreen", 16, "SimpleModelIc"));
    }
    theme getthememanager()
    {
        return thememanager;
    }

};
int main()
{
    Reload rd;
    theme thememanager=rd.getthememanager();

    int data;
    bool flag=true;
     while(flag)
     {
        switch (data)
        {
            case 1:
            thememanager.applytheme(1,"classic");
            break;
            case2:
            thememanager.applytheme(2,"sports");
            case3:
            thememanager.applytheme(3,"eco");
            break;
            case0:"exiting the programme"<,endl;
            break;
            default:
            cout<<"invalid choice!"<<endl;
        }
     }
     return 0;
}
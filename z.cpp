#include <iostream>
using namespace std;

int main() {
    char code;
    // Display menu of movie categories
    cout << "Movie Categories:" << endl<<endl;
    cout << "A for Adventure Movie" << endl;
    cout << "H for Horror Movie" << endl;
    cout << "C for Comedy Movie" << endl;
    cout << "F for Family Movie" << endl;
    cout << "S for Science Fiction Movie" <<endl<<endl<< endl;


    cout << "Enter a movie category: ";
    cin>>code;
cout<<endl;
    switch (code) {
        case 'A':
            cout << "Adventure Movies" << endl<<endl;
            cout<<"Pathan\nDilwale\nDon\nDon 2\nDhoom 3"<<endl;
		    break;
        case 'H':
            cout << "Horror Movies" <<endl<< endl;
            cout<<"Bhoot\nRazz 3\nRazz Rebot\nKanchana\nAlone"<<endl;
            break;
        case 'C':
            cout << "Comedy Movies"<<endl << endl;
            cout<<"Masti\nGrand Masti\n Great Grand Masti\dammal\nhousefull 2"<<endl;
            break;
        case 'F':
            cout << "Family Movies" <<endl<<endl;
            cout<<"Dilwale Dulhanie Le jayenge\n3idots\nMunna Bhai MBBS\nLaggan\nKabhi Khoshi Kabhi Ghum"<<endl;
	       break;
	       case 'S':
	       	cout<<"science fiction movie"<<endl<<endl;
	       	cout<<"Robot\n24\nRa one\nKrish 2\nMr.india"<<endl;
            break;
        default:
            cout << "Invalid category" << endl;
            break;
    }

    
    return 0;
}

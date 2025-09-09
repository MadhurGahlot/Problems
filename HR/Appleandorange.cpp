
#include<iostream>
#include<vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apples_on_house = 0;
    int oranges_on_house = 0;

    // Check apples
    for (int d : apples) {
        int landing_position = a + d;
        if (landing_position >= s && landing_position <= t) {
            apples_on_house++;
        }
    }

    // Check oranges
    for (int d : oranges) {
        int landing_position = b + d;
        if (landing_position >= s && landing_position <= t) {
            oranges_on_house++;
        }
    }

    // Print results
    cout << " Apples on house: " <<apples_on_house << endl;
    cout << " Oranges on house: "<<oranges_on_house << endl;
}

int main() {
    int s, t;
    cout << "Enter s  (house range): ";
    cin >> s;
    cout << "Enter s and t (house range): ";
    cin >> t;

    int a, b;
    cout<< "Enter a  (apple tree): ";
    cin >> a ;
    cout<<"Enter  b (orange tree positions): ";
    cin>>b;

    int m, n;
    cout<<" Enter number of apples : ";
    cin >> m ;
    cout<<"Enter number of oranges : ";
    cin>>n; 

    vector<int> apples(m), oranges(n);
    
    
    cout << "Enter apple distances: ";
    for (int i = 0; i < m; i++) {
        cin >> apples[i];
    }

    cout << "Enter orange distances: ";
    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}

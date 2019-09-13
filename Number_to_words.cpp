#include<iostream>
using namespace std;
int main() {
    int num, ten, one, hund, hund_mod, thousand, thousand_mod;

    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven","eight", "nine", "ten",
                            "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                         "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", 
                        "sixty","seventy", "eighty", "ninety"};

    cout << "Enter a number upto 9999: ";
    cin >> num;
    if(num >= 1 and num <= 19) {
        cout << ones[num];
    }else if(num >= 20 and num <= 99) {
        ten = num / 10;
        one = num % 10;
        cout << tens[ten] << " "<<ones[one] << endl;
    }else if(num >= 100 and num <= 999) {
        hund = num / 100;
        hund_mod = num % 100;
        if(hund_mod>10 && hund_mod<=19) {
        	cout<<ones[hund]<<" hundred "<<ones[hund_mod]<<endl;
		} else{
			ten = hund_mod / 10;
        	one = hund_mod % 10;
        	cout << ones[hund] << " hundred "<<tens[ten]<<" "<< ones[one]<<endl;
		}
    }else if(num >= 1000 and num <= 9999) {
        thousand = num / 1000;
        thousand_mod =  num % 1000;
        hund = thousand_mod / 100;
        hund_mod = thousand_mod % 100;
        if(hund_mod>10 && hund_mod<=19)
        {
        	cout<<ones[thousand]<<" thousand "<<ones[hund]<<" hundred "<<ones[hund_mod];
		} else {
			ten = hund_mod / 10;
	        one = hund_mod % 10;
	    	cout << ones[thousand] << " thousand "<<ones[hund]<<" hundred "<<tens[ten]<<" "<<ones[one]<<endl;
		}

   } else {
        cout << "number must between 1-9999:"<<endl;
    }

    return 0;
}

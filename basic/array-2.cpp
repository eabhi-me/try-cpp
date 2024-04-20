#include<iostream>
using namespace std;
void print_array(int array[], int n);
void reverse_array(int array[], int n);
float average_array(int array[], int n);
float modSum_array(int array[], int n);
string isFoundElement(int array[], int n , int key);
void sortArray(int array[], int n);
void alternateSwap(int array[], int n);
int eCount(int array, int n);

int main(){
    // Array sample
    int array_1[] = {1, -10, 3, 4, 5, 10};
    int n = sizeof(array_1)/sizeof(array_1[0]);
    // Printf before
    cout << "Before Reverse" << endl;
    print_array(array_1, n); 
    // Reversing array
    reverse_array(array_1 , n);
    cout << endl << "After reverse" << endl;
    print_array(array_1, n);
    // Doing operaton on array
    cout << endl << "Average of Array is: " << average_array(array_1, n);
    cout << endl << "Modulus Sum is " << modSum_array(array_1, n) << " and Mod Avg is: " << modSum_array(array_1,n)/n;
    // Searching element
    cout << endl << isFoundElement(array_1, n, 1);
    // Sorting
    sortArray(array_1,n);
    cout << endl; // Line break
    print_array(array_1, n); // print
    // Swaping the alternate array
    cout << endl << "Swaping the alternating element:" << endl;
    alternateSwap(array_1,n);
    print_array(array_1,n); // printing
    return 0;
    
}

// Defnition of function
// printf function of array
void print_array(int array[], int n){
    int i = 0;
    while(i<n){
        cout << array[i] << " ";
        i++;
    }
}

// reverse array function
void reverse_array(int array[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}

// Average Array function
float average_array(int array[], int n){
    float sum = 0;
    int i = 0;
    while(i < n){
        sum = sum + array[i];
        i++;
    }
    float avg = sum / n;
    return avg;
}

// Positive sum
float modSum_array(int array[], int n){
    float sum = 0;
    int i = 0;
    while(i<n){
        if(array[i]>=0){
            sum = sum + array[i];
        }
        else if(array[i]<0){
            sum = sum + (array[i]-(2*array[i]));
        }
        i++;
    }
    return sum;
}

// Searching
string isFoundElement( int array[], int n, int key){
    int i = 0;
    bool flag;
    while(i<n){
        if(array[i]==key){
            return "Key is Found";
            break;
        }
        i++;
    }
    return "Key is not found";

}

// Soritng
void sortArray(int array[], int n){
    int i=0, j=0;
    while(i<n){
        while(j<n){
            if(array[j+1]<array[j]){
            }
            j++;
        }
        i++;
    }
}

// Alternate swap
void alternateSwap(int array[], int n){
    int i=0;
    while(i+1<n){
        swap(array[i], array[i+1]);
        i=i+2;
    }
}

// Element count
// incomplete
int eCount(int array[], int n){
    int i=0, j=0, count=0, eCount[n];
    while(i<n){
        while(j<n){
            if(array[i]==array[j]);
            count++;
            j++;
        }
        eCount[i]=count;
        i++;
    }
    return eCount[5];
    print_array(eCount,5);

}
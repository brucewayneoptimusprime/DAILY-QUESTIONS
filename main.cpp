/*I have commented all the code as I wanted to save all different codes in same folder
,if you want to test the code then remove the comments*/



//QUESTION 1 Calculating the average age//
/*

#include <iostream>
using namespace std;

int main() {

    int ages[] = {19, 24, 36, 45, 56, 52, 21, 27, 24, 34, 29, 60, 40, 42, 45, 47, 22, 30, 34, 20, 18, 26, 51, 43, 47, 39, 22, 34, 56, 52, 21, 27, 24, 37, 19, 24, 36, 45, 44, 49, 23, 25, 19, 40, 29, 60, 40, 42, 45, 47, 61, 30, 19, 43, 47, 39, 41, 46, 29, 24, 21, 25, 28};

    int size = 63;

    int *p = ages;
    int average_age=0;
    for(int i=0;i<size;i++) {

        average_age = average_age + *p;
        p++;
    }

    cout << average_age/size;
    return 0;

}

*/

/* QUESTION 2 [ENTER THE ELEMENTS OF ARRAY DYNAMICALLY AND THEN FIND THE MAXIMUM ]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; //size of the array
    //your code goes here

    int *nums = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int max = nums[0];
    for(int i=0; i<n; i++) {
        if(nums[i]>max)
            max = nums[i];
    }
    cout << max;

}
*/

/*QUESTION 3 [CREATE A LOADING FUNCTION AND CALL IT]*/
#include <iostream>
using namespace std;


void Loading()
{
    cout << "Loading..."<<endl;
}

int main() {

    Loading();
    return 0;

}


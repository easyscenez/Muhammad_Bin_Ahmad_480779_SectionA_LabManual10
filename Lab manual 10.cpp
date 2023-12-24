#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

struct Employee {
    string name;
    double salary;
    int hoursperday;
};



class triangle{
	public:
		int length1=6;
		int length2=8;
		int length3=10;
		
	int perimeter(){
		return length1+length2+length3;
		
	}
	double area(){
		int area,m;
		m=perimeter()/2;
		return sqrt(m * (m - length1) * (m - length2) * (m - length3));
	}
};



int mean(vector<int> vec){
	int sum=0, size=vec.size();
	for(int i=0; i<vec.size(); i++){
		sum=vec[i]+sum;
	}
	int mean=sum/vec.size();
	
	return mean;
}
int median(vector<int> vec){
	int i, j, temp, median;
	for(i=0; i<vec.size()-1; i++){
		for(j=0; j<vec.size()-1; j++){
			if(vec[j]>vec[j+1]){
				temp=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=temp;
			}
		}
	}
	int n=vec.size();
	if(n%2 == 0){
		median=((n/2)+((n/2)+1))/2;
	}
	else{
		median=(n+1)/2;
		
	}

	return vec[median-1]	;
}

int mode(vector<int> vec){
	int repetition=0, maxrep=0, mostrepeated;
	for(int i=0; i<vec.size(); i++){
		repetition=0;
		for(int j=0; j<vec.size(); j++){
			if(vec[i]==vec[j]){
				repetition++;
			}
		}
		if(repetition>maxrep){
			maxrep=repetition;
			mostrepeated=vec[i];
		}
	}
	return mostrepeated;
}

void students_mode(vector<string> vec, vector<int> vec2, int mode){
	int i=0;
	cout<<"Students with Grade Equal to Mode: ";
	for(i=0; i<vec.size(); i++){
		if(vec2[i]==mode){
			cout<<vec[i]<<" , ";
		}
	}
}



int main(){
//	int num, i;
//	vector<int> vec;
//	for(i=0; i<10; i++){
//		cout<<"Enter a value in the vector.\n";
//		cin>>num;
//		vec.push_back(num);
//	}
//	cout<<endl<<"Current vector: \n";
//	for(i=0; i<10; i++)
//	{
//		
//	cout<<vec.at(i)<<", ";
//	}
//	
//    vec.erase(vec.begin()+5);
//  	vec.insert(vec.begin()+5, 5);
//	cout<<endl<<"New Vector: ";
//		for(i=0; i<10; i++)
//	{
//	cout<<vec.at(i)<<", ";
//	}
//		end os task1
//	vector<string> names;
//	vector<int> grades;
//	int i,j,input,num,Mean,Median,Mode;
//	string name;
//	cout<<"Enter Number of Students. ";
//	cin>>num;
//	for(i=0; i<num; i++){
//		cout<<"Enter the Name of Student:\n";
//		cin>>name;
//		names.push_back(name);
//		cout<<"Enter Grade of Student in Percentage:\n";
//		cin>>input;
//		grades.push_back(input);
//		}
//	Mean=mean(grades);
//	cout<<endl<<"Mean is: "<<Mean<<endl;
//	Median=median(grades);
//	cout<<"Median is: "<<Median<<endl;
//	Mode=mode(grades);
//	cout<<"Mode is: "<<Mode<<endl;
//	students_mode(names, grades, Mode);
//		end of task 2

//	triangle tri;
//	int perimeter;
//	double area;
//	perimeter=tri.perimeter();
//	area=tri.area();
//	
//	cout<<"Area is: "<<area<<endl;
//	cout<<"Perimeter is: "<<perimeter<<endl;
//		end of task 3

//	const int no_employees = 10;
//    Employee employees[no_employees];
//
//    for (int i = 0; i < no_employees; ++i) {
//        cout << "Enter name of employee " <<": ";
//        cin >> employees[i].name;
//
//        cout << "Enter salary " << ": ";
//        cin >> employees[i].salary;
//
//        cout << "Enter hours of work per day " << ": ";
//        cin >> employees[i].hoursperday;
//
//        cout << endl;
//    }
//
//    for (int i = 0; i < no_employees; ++i) {
//        if (employees[i].hoursperday >= 12) {
//            employees[i].salary += 150;
//        } else if (employees[i].hoursperday >= 10) {
//            employees[i].salary += 100;
//        } else if (employees[i].hoursperday >= 8) {
//            employees[i].salary += 50;
//        }
//    }
//
//    cout << "Employee Details:" << endl;
//    for (int i = 0; i < no_employees; ++i) {
//        cout << "Name: " << employees[i].name << ", Final Salary: $" << employees[i].salary << endl;
//    }
// end os task 4


		
}





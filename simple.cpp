#include<iostream>
using namespace std;

class std_basic_info{
private:
	char name[30];
	int age;
	char gender;
	
	public:
		void getBasicInfo(void);
		void putBasicInfo(void);
};
void std_basic_info::getBasicInfo(void)
{
	cout<<"Enter students Basic information:"<<endl;
	cout<<"name:";
	cin>> name;
	cout<<"age:";
	cin>> age;
	cout<<"gender";
	cin>> gender;
}
void std_basic_info::putBasicInfo(void)
{
	cout<<"name"<<name<<",age"<<age<<",gender"<<gender<<endl;
 } 
 class std_result_info: public std_basic_info{
 	private:
 		int totalM;
 		float perc;
 		char grade;
 	public:
 		void getresultinfo(void);
 		void putresultinfo(void);
 };
void std_result_info::getresultInfo(void){
 	cout<<"Enter student's result information"<<endl;
 	cout<<"Total marks:";
 	cin>>totalM;
 	perc=(float)((totalM*100)/500):
 		cout<<"grade:";
 		cin>>grade:
 } 
 void std_result_info::putresultInfo(void)
 {
 	cout<<"total Marks:"<<totalM<<",percentage:"<<perc<<",grade:"<<grade<<endl;
 }
int main()
{
	std_result_info std;
	
	std.getBasicInfo();
	std.getResultInfo();
	
	std.putBasicInfo();
	std.getResultInfo();
	
	return 0;
	 
}
 
//   ------C++ Quiz Game------

#include <iostream>
using namespace std;

int const MAX=10;

struct question{
	string question;
	string option1;
	string option2;
	string option3;
	string option4;
	int answer;
};


//Question Display Karny Aur Quiz Run Karny K Liye Function

void quiz(question q[], int &score){
	int choice;
	
	score=0;
	
	cout<<endl;
	cout<<"========================================"<<endl;
	cout<<"              C++ QUIZ"<<endl;
	cout<<"========================================"<<endl;
	cout<<endl;
	
	for(int i=0; i<MAX; i++){
		
		cout<<"Question "<<i+1<<" : "<<q[i].question<<endl;
		cout<<endl;
		
		cout<<"1. "<<q[i].option1<<endl;
		cout<<"2. "<<q[i].option2<<endl;
		cout<<"3. "<<q[i].option3<<endl;
		cout<<"4. "<<q[i].option4<<endl;
		
		cout<<endl;
		
		cout<<"Enter Your Answer : ";
		cin>>choice;
		
		while(choice<1 || choice>4){
			cout<<"Invalid Answer! Enter 1, 2, 3 or 4 : ";
			cin>>choice;
		}
		
		if(choice==q[i].answer){
			cout<<"Correct Answer! +1"<<endl;
			score++;
		}
		else{
			cout<<"Wrong Answer!"<<endl;
		}
		
		cout<<"----------------------------------------"<<endl;
		cout<<endl;
	}
}


//Quiz Ka Result Display Karny K Liye Function

void result(int score){
	int wrong;
	float percentage;
	
	wrong=MAX-score;
	percentage=(float(score)/MAX)*100;
	
	cout<<endl;
	cout<<"========================================"<<endl;
	cout<<"             QUIZ RESULT"<<endl;
	cout<<"========================================"<<endl;
	
	cout<<"Total Questions : "<<MAX<<endl;
	cout<<"Correct Answers : "<<score<<endl;
	cout<<"Wrong Answers   : "<<wrong<<endl;
	cout<<"Total Score     : "<<score<<"/"<<MAX<<endl;
	cout<<"Percentage      : "<<percentage<<"%"<<endl;
	
	cout<<"Grade           : ";
	
	if(percentage>=80){
		cout<<"A"<<endl;
	}
	else if(percentage>=70){
		cout<<"B"<<endl;
	}
	else if(percentage>=60){
		cout<<"C"<<endl;
	}
	else if(percentage>=50){
		cout<<"D"<<endl;
	}
	else{
		cout<<"F"<<endl;
	}
	
	cout<<"========================================"<<endl;
	cout<<endl;
}


//Main Function

int main()
{
	question q[MAX]={
		
		{
			"What is used to store multiple values of same data type?",
			"Variable",
			"Array",
			"Function",
			"Loop",
			2
		},
		
		{
			"Which symbol is used to end a statement in C++?",
			".",
			":",
			";",
			",",
			3
		},
		
		{
			"Which keyword is used to create a structure?",
			"class",
			"struct",
			"object",
			"array",
			2
		},
		
		{
			"Which loop is commonly used when the number of repetitions is known?",
			"if",
			"while",
			"for",
			"switch",
			3
		},
		
		{
			"Which operator is used to get the address of a variable?",
			"*",
			"&",
			"%",
			"#",
			2
		},
		
		{
			"Which keyword is used to return a value from a function?",
			"break",
			"continue",
			"return",
			"exit",
			3
		},
		
		{
			"Which statement is used for multiple choices?",
			"if",
			"switch",
			"for",
			"while",
			2
		},
		
		{
			"Which data type is used to store decimal values?",
			"int",
			"char",
			"float",
			"void",
			3
		},
		
		{
			"Which operator is used to compare two values for equality?",
			"=",
			"==",
			"!=",
			"+=",
			2
		},
		
		{
			"Which function is the starting point of a C++ program?",
			"start()",
			"run()",
			"begin()",
			"main()",
			4
		}
	};
	
	
	int choice;
	int score=0;
	
	jump:
	
	cout<<"========================================"<<endl;
	cout<<"             C++ QUIZ GAME"<<endl;
	cout<<"========================================"<<endl;
	cout<<endl;
	
	cout<<"1. Start Quiz"<<endl;
	cout<<"2. Exit"<<endl;
	
	cout<<endl;
	cout<<"Enter Your Choice : ";
	cin>>choice;
	
	switch(choice){
		
		case 1:
			quiz(q,score);
			result(score);
			goto jump;
			
		case 2:
			cout<<"Thank You For Playing!"<<endl;
			break;
			
		default:
			cout<<"Invalid Choice! Enter 1 or 2 "<<endl;
			goto jump;
	}
	
	return 0;
}
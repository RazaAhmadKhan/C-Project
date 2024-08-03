#include <iostream>
#include<string>
using namespace std;



class Subject {
private:

public:

    void maths() {
        int count = 0, tmarks = 15;
        float percent;
        char g[16], c[15] = {'B', 'C', 'B', 'D', 'A', 'B', 'B', 'D', 'C', 'B', 'C', 'A', 'D', 'B', 'A'};

        cout << "\t\t\t\t\t\t\t\t            MATHS" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n" << endl;
        cout << "\tQ :- 1 :What is 5 + 3 ?" << endl;
        cout << "\tA) 7\n\tB) 8" << endl;
        cout << "\tC) 9\n\tD) 10" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[0];
        if (g[0] == c[0]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 2 :What is 12-7?" << endl;
        cout << "\tA) 7\n\tB) 8" << endl;
        cout << "\tC) 5\n\tD) 4" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[1];
        if (g[1] == c[1]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 3 :What is 5 + 3 ?" << endl;
        cout << "\tA) 7\n\tB) 8" << endl;
        cout << "\tC) 9\n\tD) 10" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[2];
        if (g[2] == c[2]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 4 :What is 4 x 6 ?" << endl;
        cout << "\tA) 14\n\tB) 16" << endl;
        cout << "\tC) 9\n\tD) 24" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[3];
        if (g[3] == c[3]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 5 :What is 140 / 7 ?" << endl;
        cout << "\tA) 20\n\tB) 24" << endl;
        cout << "\tC) 17\n\tD) 14" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[4];
        if (g[4] == c[4]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 6 :What is 9 + 2 x 3 ?" << endl;
        cout << "\tA) 14\n\tB) 15" << endl;
        cout << "\tC) 21\n\tD) 13" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[5];
        if (g[5] == c[5]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 7 :What is 2 power 3 ?" << endl;
        cout << "\tA) 13\n\tB) 8" << endl;
        cout << "\tC) 41\n\tD) 10" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[6];
        if (g[6] == c[6]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 8 :What is  the value of  pi to two decimal places ?" << endl;
        cout << "\tA) 3.11\n\tB) 3.10" << endl;
        cout << "\tC) 3.41\n\tD) 3.14" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[7];
        if (g[7] == c[7]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 9 :What is 5! ?" << endl;
        cout << "\tA) 100\n\tB) 130" << endl;
        cout << "\tC) 120\n\tD) 110" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[8];
        if (g[8] == c[8]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 10 :What is 4! ?" << endl;
        cout << "\tA) 21\n\tB) 23" << endl;
        cout << "\tC) 24\n\tD) 22" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[9];
        if (g[9] == c[9]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 11 : What is the sum of interior angles of triangle ?" << endl;
        cout << "\tA) 90\n\tB) 360" << endl;
        cout << "\tC) 120\n\tD) 180" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[10];
        if (g[10] == c[10]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 12 :What is 10% of 50 ?" << endl;
        cout << "\tA) 15\n\tB) 8" << endl;
        cout << "\tC) 10\n\tD) 14" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[11];
        if (g[11] == c[11]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 13 :What is 7 x 4 / 2 ?" << endl;
        cout << "\tA) 13\n\tB) 15" << endl;
        cout << "\tC) 12\n\tD) 14" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[12];
        if (g[12] == c[12]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 14 :What is 10 X 10 /4 ?" << endl;
        cout << "\tA) 24\n\tB) 25" << endl;
        cout << "\tC) 20\n\tD) 23" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[13];
        if (g[13] == c[13]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 15 :What is log(45) ?" << endl;
        cout << "\tA) 1.653\n\tB) 0.134" << endl;
        cout << "\tC) 1.45\n\tD) 2.34" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[14];
        if (g[14] == c[14]) {
            count++;
        }
        cout << "\n\n";

        percent = (static_cast<float>(count) / tmarks) * 100;

        cout << "\n\n\n\t\t\t\t\t\t\t\t           RESULT" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n\n" << endl;
        cout << "\tYou got " << count << " out of " << tmarks << " correct.\n" << endl;
        cout << "\tYour percentage is: " << percent << "%" << endl;
        cout << "\n=======================================================================================================================================================================\n\n";
        cout << "\n\n\n\t\t\t\t\t\t\t\t         INCORRECT ANSWERS" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================" << endl;
        int i,cnt=0;
        for (i = 0; i < 15; i++) {
            if (g[i] != c[i]) {
                cout << "\t\n\nQuestion no :- " << " " << i + 1 << " " << "is answered incorrect...";
                cnt++;
                
            }
            
        }
        if(cnt==0)
            {
            	            	cout<<"\t\n\nThere is no incorrect answer...........Thank u <3\n";          	
			}

	cout<<"\n\n";
        cout << "\n=======================================================================================================================================================================\n\n";

        cout << "\n\n";
    }
};

   class subject1 : public Subject {
public:
	 void sports() {
        int count = 0, tmarks = 15;
        float percent;
        char g[16], c[15] = {'A', 'B', 'C', 'B', 'A', 'B', 'D', 'B', 'D', 'C', 'B', 'A', 'C', 'B', 'C'};
   
       
        cout << "\t\t\t\t\t\t\t\t            SPORTS" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n" << endl;

        cout << "\tQ :- 1 :Who is known as the God of Cricket?" << endl;
        cout << "\tA) Sachin Tendulkar\n\tB) Virat Kohli" << endl;
        cout << "\tC) Babar Azam\n\tD) Shahid Afridi" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[0];
        if (g[0] == c[0]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 2 :Who is considered the greatest basketball player of all time?" << endl;
        cout << "\tA) LeBron James\n\tB) Michael Jordan" << endl;
        cout << "\tC) Kobe Bryant\n\tD) Magic Johnson" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[1];
        if (g[1] == c[1]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 3 :Which country won the FIFA World Cup in 2018?" << endl;
        cout << "\tA) Brazil\n\tB) Argentina" << endl;
        cout << "\tC) France\n\tD) Portugal" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[2];
        if (g[2] == c[2]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 4 :In which sport would you perform a slam dunk?" << endl;
        cout << "\tA) Tennis\n\tB) Basketball" << endl;
        cout << "\tC) Cricket\n\tD) Soccer" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[3];
        if (g[3] == c[3]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 5 :Who is the number 1 batsman in Cricket in now a days?" << endl;
        cout << "\tA) Babar Azam\n\tB) Rohit sharma" << endl;
        cout << "\tC) Fakhar Zaman\n\tD)  Muhammad Rizwan" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[4];
        if (g[4] == c[4]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 6 :Which of these is not a standard event in gymnastics?" << endl;
        cout << "\tA) Vault\n\tB) Pommel Horse" << endl;
        cout << "\tC) Parallel Bars\n\tD) Fencing" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[5];
        if (g[5] == c[5]) {
            count++;
        }
        cout << "\t\n\n";

        cout << "\tQ :- 7 :Who is has most sixes in t20 in 2023 ?" << endl;
        cout << "\tA) Iftikhar Ahmad\n\tB) Fakhar zaman" << endl;
        cout << "\tC) Muhammad Rizwan\n\tD) Babar Azam" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[6];
        if (g[6] == c[6]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 8 :Who holds the record for the most Grand Slam titles in men's tennis?" << endl;
        cout << "\tA) Rafael Nadal\n\tB) Roger Federer " << endl;
        cout << "\tC) Pete Sampras\n\tD) Novak Djokovic" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[7];
        if (g[7] == c[7]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 9 :Which country hosted the 2016 Summer Olympics?" << endl;
        cout << "\tA) China\n\tB) Brazil " << endl;
        cout << "\tC) Russia\n\tD) United States" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[8];
        if (g[8] == c[8]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 10 :What is the highest possible break in snooker?" << endl;
        cout << "\tA) 100\n\tB) 120" << endl;
        cout << "\tC) 147\n\tD) 222" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[9];
        if (g[9] == c[9]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 11 :Who won the Super Bowl in 2021?" << endl;
        cout << "\tA) Kansas City Chiefs\n\tB) Tampa Bay Buccaneers " << endl;
        cout << "\tC) New England Patriots\n\tD) Los Angeles Rams" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[10];
        if (g[10] == c[10]) {
            count++;
        }
        cout << "\t\n\n";

        cout << "\tQ :- 12 :Which athlete is known as The Fastest Man on Earth?" << endl;
        cout << "\tA) Usain Bolt \n\tB) Michael Phelps" << endl;
        cout << "\tC) Simone Biles\n\tD) Serena Williams" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[11];
        if (g[11] == c[11]) {
            count++;
        }
        cout << "\t\n\n";

        cout << "\tQ :- 13 :Who is the fastest bowler in the history of cricket, known for his lightning-fast deliveries?" << endl;
        cout << "\tA) Mitchell Starc\n\tB) Brett Lee" << endl;
        cout << "\tC) Shoaib Akhtar \n\tD) Lasith Malinga" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[12];
        if (g[12] == c[12]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 14 :Which cricket team won the inaugural ICC T20 World Cup in 2007?" << endl;
        cout << "\tA) Australia\n\tB) Pakistan" << endl;
        cout << "\tC) India\n\tD) Sri Lanka" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[13];
        if (g[13] == c[13]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 15 :What is the diameter of a standard basketball hoop in inches?" << endl;
        cout << "\tA) 16\n\tB) 18" << endl;
        cout << "\tC) 185\n\tD) 20" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[14];
        if (g[14] == c[14]) {
            count++;
        }
        cout << "\n\n";

        percent = (static_cast<float>(count) / tmarks) * 100;

        cout << "\n\n\n\t\t\t\t\t\t\t\t           RESULT" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n\n" << endl;
        cout << "\tYou got " << count << " out of " << tmarks << " correct.\n" << endl;
        cout << "\tYour percentage is: " << percent << "%" << endl;
        cout << "\n=======================================================================================================================================================================\n\n";
        cout << "\n\n\n\t\t\t\t\t\t\t\t         INCORRECT ANSWERS" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================" << endl;
        int i,cnt=0;
        for ( i = 0; i < 15; i++) {
            if (g[i] != c[i]) {
                cout << "\t\n\nQuestion no :- " << " " << i + 1 << " " << "is answered incorrect...";
                cnt++;
            }
            
        }
        if(cnt==0)
            {
            	            	cout<<"\t\n\nThere is no incorrect answer...........Thank u <3\n";          	
			}
	cout<<"\n\n";
        cout << "\n=======================================================================================================================================================================\n\n";

        cout << "\n\n";
    }
};


class subject2 : public subject1 {
public:
    void Comp() {
        int count = 0, tmarks = 15;
        float percent;
        char g[16], c[15] = {'D', 'A', 'B', 'D', 'D', 'B', 'B', 'C', 'A', 'B', 'D', 'A', 'D', 'C', 'B'};

        cout << "\t\t\t\t\t\t\t\t       COMPUTER SCIENCE" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n" << endl;

        cout << "\tQ :- 1 :What is the fundamental unit of computation in a Turing machine?" << endl;
        cout << "\tA) Tape \n\tB) State" << endl;
        cout << "\tC) Transition Function \n\tD) Cell" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[0];
        if (g[0] == c[0]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 2 :In computational complexity theory, what does P represent?" << endl;
        cout << "\tA) Polynomial time \n\tB) Exponential time " << endl;
        cout << "\tC) Logarithmic time\n\tD) Linear time" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[1];
        if (g[1] == c[1]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 3 :Which data structure uses First-In-First-Out (FIFO) order?" << endl;
        cout << "\tA) Stack\n\tB) Queue" << endl;
        cout << "\tC) Heap\n\tD) Tree" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[2];
        if (g[2] == c[2]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 4 :What is the purpose of a hash function in hashing?" << endl;
        cout << "\tA) To sort data\n\tB) To compress data" << endl;
        cout << "\tC) To encrypt data \n\tD) To generate a unique key from data " << endl;

        cout << "\n\tYour answer: ";
        cin >> g[3];
        if (g[3] == c[3]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 5 :Which sorting algorithm has the best average-case time complexity?" << endl;
        cout << "\tA) Bubble sort\n\tB) Insertion sort" << endl;
        cout << "\tC) Selection sort\n\tD) Merge sort " << endl;

        cout << "\n\tYour answer: ";
        cin >> g[4];
        if (g[4] == c[4]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 6 :What is the time complexity of searching in a binary search tree (BST) with n elements in the worst case?" << endl;
        cout << "\tA) O(n) \n\tB) O(log n) " << endl;
        cout << "\tC) O(n^2)\n\tD) O(1)" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[5];
        if (g[5] == c[5]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 7 :Which of the following is a non-deterministic Turing machine?" << endl;
        cout << "\tA) DFA\n\tB) NFA" << endl;
        cout << "\tC) PDA\n\tD) LBA" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[6];
        if (g[6] == c[6]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 8 :What is the primary role of the operating system?" << endl;
        cout << "\tA) File management\n\tB) User interface  " << endl;
        cout << "\tC) Resource allocation and management\n\tD) Hardware maintenance" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[7];
        if (g[7] == c[7]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 9 :Which programming paradigm emphasizes the use of functions as the primary building blocks?" << endl;
        cout << "\tA) Functional programming\n\tB) Procedural programming " << endl;
        cout << "\tC) Imperative programming\n\tD) Object-oriented programming" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[8];
        if (g[8] == c[8]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 10 :Which of the following is an example of an NP-complete problem?" << endl;
        cout << "\tA) Sorting\n\tB) Graph coloring" << endl;
        cout << "\tC) Binary search\n\tD) Hashing" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[9];
        if (g[9] == c[9]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 11 : What does the term recursion refer to in computer science?" << endl;
        cout << "\tA) A looping construct\n\tB) A type of data structure " << endl;
        cout << "\tC) A sorting algorithm\n\tD) A function calling itself  " << endl;

        cout << "\n\tYour answer: ";
        cin >> g[10];
        if (g[10] == c[10]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 12 :What is the purpose of an interpreter in programming languages?" << endl;
        cout << "\tA) Executes code directly without compilation  \n\tB) Converts high-level code to machine code" << endl;
        cout << "\tC) Optimizes code for performance\n\tD) Checks code for errors" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[11];
        if (g[11] == c[11]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 13 :Which of the following is not a type of network topology?" << endl;
        cout << "\tA) Star \n\tB) Mesh" << endl;
        cout << "\tC) Bus\n\tD) Circular" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[12];
        if (g[12] == c[12]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 14 :What is the role of an algorithm in computer science?" << endl;
        cout << "\tA) To implement hardware\n\tB) To implement hardware" << endl;
        cout << "\tC) To solve problems step by step \n\tD) To store data" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[13];
        if (g[13] == c[13]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 15 :What is the binary representation of the decimal number 12?" << endl;
        cout << "\tA) 1111\n\tB) 1100" << endl;
        cout << "\tC) 1101\n\tD) 1110" << endl;

        cout << "\n\tYour answer: ";
        cin >> g[14];
        if (g[14] == c[14]) {
            count++;
        }
        cout << "\n\n";

        percent = (static_cast<float>(count) / tmarks) * 100;

        cout << "\n\n\n\t\t\t\t\t\t\t\t           RESULT" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n\n" << endl;
        cout << "\tYou got " << count << " out of " << tmarks << " correct.\n" << endl;
        cout << "\tYour percentage is: " << percent << "%" << endl;
        cout << "\n=======================================================================================================================================================================\n\n";

        cout << "\n\n\n\t\t\t\t\t\t\t\t         INCORRECT ANSWERS" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n\n" << endl;
        int i,cnt;
        for ( i = 0; i < 15; i++) {
            if (g[i] != c[i]) {
                cout << "\t\n\nQuestion no :- " << " " << i + 1 << " " << "is answered incorrect...";
                cnt++;
            }
        }
        if(cnt==0)
            {
            	            	cout<<"\t\n\nThere is no incorrect answer...........Thank u <3\n";          	
			}
        
	cout<<"\n\n";
        cout << "\n=======================================================================================================================================================================\n\n";

        cout << "\n\n";
    }
};

   
#include <iostream>
#include <string>
using namespace std;

class subject3 : public subject2 {
public:
    subject3(const char name[]) {
        cout << "\tHi, " << name << "!\n" << endl;
    }

    int Pak() {
        int count = 0, tmarks = 15;
        float percent;
        char g[16], c[15] = {'D', 'A', 'B', 'D', 'D', 'A', 'A', 'C', 'A', 'B', 'D', 'A', 'A', 'A', 'B'};

        cout << "\t\t\t\t\t\t\t\t          PAK-STUDIES" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n" << endl;

        cout << "\tQ :- 1 :When did Pakistan become a member of the United Nations (UN)?" << endl;
        cout << "\tA) 1940 \n\tB) 1978" << endl;
        cout << "\tC) 1947 \n\tD) 1948" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[0];
        if (g[0] == c[0]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 2 :Who is known as the Father of the Nation in Pakistan?" << endl;
        cout << "\tA) Quaid-e-Azam Muhammad Ali Jinnah \n\tB) Allama Iqbal " << endl;
        cout << "\tC) Liaquat Ali Khan\n\tD) Zulfikar Ali Bhutto" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[1];
        if (g[1] == c[1]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 3 :What was the capital of Pakistan before Islamabad?" << endl;
        cout << "\tA) Lahore\n\tB) Karachi" << endl;
        cout << "\tC) Peshawar\n\tD) Quetta" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[2];
        if (g[2] == c[2]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 4 :Which mountain range separates Pakistan from Afghanistan?" << endl;
        cout << "\tA) Karakoram Range\n\tB) Pamir Mountains" << endl;
        cout << "\tC) Hindu Kush\n\tD) Himalayas" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[3];
        if (g[3] == c[3]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 5 :What is the official language of Pakistan?" << endl;
        cout << "\tA) Pashto\n\tB) Panjabi" << endl;
        cout << "\tC) Sindhi\n\tD) Urdu" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[4];
        if (g[4] == c[4]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 6 :Who was the first Prime Minister of Pakistan?" << endl;
        cout << "\tA) Liaquat Ali Khan\n\tB) Muhammad Ali Jinnah" << endl;
        cout << "\tC) Zulfikar Ali Bhutto\n\tD) Nawaz Sharif" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[5];
        if (g[5] == c[5]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 7 :Who is the national poet of Pakistan?" << endl;
        cout << "\tA) Allama Iqbal\n\tB) Faiz Ahmed Faiz" << endl;
        cout << "\tC) Mirza Ghalib\n\tD) Faizan Haq" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[6];
        if (g[6] == c[6]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 8 :What is the primary role of the Supreme Court of Pakistan?" << endl;
        cout << "\tA) Legislative\n\tB) Executive" << endl;
        cout << "\tC) Judicial\n\tD) Regulatory" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[7];
        if (g[7] == c[7]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 9 :What is the name of the largest dam in Pakistan?" << endl;
        cout << "\tA) Tarbela Dam\n\tB) Mangla Dam" << endl;
        cout << "\tC) Warsak Dam\n\tD) Diamer-Bhasha Dam" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[8];
        if (g[8] == c[8]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 10 :What is the currency of Pakistan?" << endl;
        cout << "\tA) Dollar\n\tB) Yen" << endl;
        cout << "\tC) Rupee\n\tD) Peso" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[9];
        if (g[9] == c[9]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 11 :What is the name of the national cricket stadium of Pakistan?" << endl;
        cout << "\tA) Gaddafi Stadium\n\tB) National Stadium" << endl;
        cout << "\tC) Rawalpindi Cricket Stadium\n\tD) Lahore Stadium" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[10];
        if (g[10] == c[10]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 12 :Who is the current President of Pakistan?" << endl;
        cout << "\tA) Arif Alvi\n\tB) Imran Khan" << endl;
        cout << "\tC) Asif Ali Zardari\n\tD) Shah Mehmood Qureshi" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[11];
        if (g[11] == c[11]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 13 :What is the largest province by area in Pakistan?" << endl;
        cout << "\tA) Punjab\n\tB) Sindh" << endl;
        cout << "\tC) Khyber Pakhtunkhwa\n\tD) Balochistan" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[12];
        if (g[12] == c[12]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 14 :What is the national flower of Pakistan?" << endl;
        cout << "\tA) Jasmine\n\tB) Rose" << endl;
        cout << "\tC) Sunflower\n\tD) Marigold" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[13];
        if (g[13] == c[13]) {
            count++;
        }
        cout << "\n\n";

        cout << "\tQ :- 15 :What is the national bird of Pakistan?" << endl;
        cout << "\tA) Eagle\n\tB) Parrot" << endl;
        cout << "\tC) Peacock\n\tD) Chukar" << endl;
        cout << "\n\tYour answer: ";
        cin >> g[14];
        if (g[14] == c[14]) {
            count++;
        }
        cout << "\n\n";

        percent = (static_cast<float>(count) / tmarks) * 100;

        cout << "\tYou got " << count << " out of " << tmarks << " correct.\n" << endl;
        cout << "\tYour percentage is: " << percent << "%" << endl;
        cout << "\n=======================================================================================================================================================================\n\n";

        // Display incorrect answers
        cout << "\n\n";
        cout << "\t\t\t\t\t\t\t\t         INCORRECT ANSWERS" << endl;
        cout << "\t\t\t\t\t\t\t\t=============================\n\n" << endl;
        int i,cnt=0;
        for (int i = 0; i < 15; i++) {
            if (g[i] != c[i]) {
                cout << "\t\n\nQuestion no :- " << " " << i + 1 << " " << "is answered incorrect...";
            }
        }
        if(cnt==0)
            {
            	            	cout<<"\t\n\nThere is no incorrect answer...........Thank u <3\n";          	
			}
			cout<<"\n\n";
        

        cout << "\n=======================================================================================================================================================================\n\n";

        return 0;
    }
};

		

    	
    	
    
    

 void display()
 {
 	std::cout << "\t\t\t\t\t\t\t\t=============================" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t        QUIZ MASTER" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t=============================" << std::endl;
    cout<<"\n\n\t\t\t\t\t\t\t\t        ASSALAMUALIKUM\n\n";
    char name[50];
    char choise,repeat ;
    cout<<"\tEnter your name please :- ";
    gets(name);
    subject3  obj(name);
    cout<<"\tNOTE :- only enter Options Symbols i.e :- (A,B,C,D)...........Thank you <3\n"<<endl;
    
   
    	
            do {
        cout<<"\tPlease select a subject in which you want to give us a short Quiz :- \n"<<endl;
    cout<<"\t A) Maths \n\t B) Sports\n";
    cout<<"\t C) Computer Science \n\t D) Pakistan Studies\n";
    cout<<"\t";cin>>choise;
    cout<<"\n\n";
            	switch (choise) {
        case 'A':
        case 'a':
           obj.maths();   
            break;
        case 'B':
        case 'b':
              obj.sports();
            break;
        case 'C':
        case 'c':
              obj.Comp();
            break;
        case 'D':
        case 'd':
                  obj.Pak();;
              break;
        default:
            std::cout << "\tInvalid choice. Please select A, B, C, or D." << std::endl;
            break;
        }
            
        
        cout << "\n\n\n\tDo you want to take the quiz again? (y/n):\n\n ";
        cout<<"\tyour Answer :- ";cin >> repeat;
        cout<<"\n\n";
    } while (repeat == 'y' || repeat == 'Y');
            
            
            	
            
            	
            	
			
            
    
    cout<<"\n\n\tThank you Sir/Ma'm for your Time....:-)\n\n\n\n\n";
    
    

	
}

 
 int main() {
 	
	 
	 display();
    
    return 0;
}









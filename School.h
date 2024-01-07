#define Subjects 6
class Person {
    private :
        string name ; 
        int age ; 
        static int StudentCount ; 
        static int EmployersCount ; 
    public:
    void SetPersonName(string name ); 
    void SetpersonAge(int age); 
    string GetPersonName(void);
    static void IncrementStudentCount(void); 
    static void IncrementEmployerCount(void); 
    static void DecrementStudentCount(void); 
    static void DecrementEmployerCount(void); 
};

class Employer :public Person{
    private: 
    string PositionName ; 
    string Department; 
    string AssingnedSubject ; 
    public : 
    void SetEmployerPosition(string Position );
    void SetEmployerDepartment(string Department );
    void SetAssignedSubject(string Subject);
    string GetEmployerPosition(void);
    string GetEmployerDepartment(void );
    string GetAssignedSubject(void);


};

class Student : public Person{
    private :  
    string Subject[Subjects]; 
    int SubjectScore[Subjects]; 
    public: 
    void SetSubjectName(string Subject, int position); 
    void SetSubjectScore(int Score, int position); 
    void SetSubjectsName(string Subject[]); 
    void SetSubjectsScore(int Score[]); 
    int  GetSubjectScore( int Position); 
    string GetsubjectName(int position); 

};
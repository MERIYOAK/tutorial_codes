#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charactername[]="meron";
    int characterage=75;
    printf("There once was a man named %s\n",charactername);
    printf("He was %d years old.\n",characterage);
    characterage = 90;
    printf("He really liked the name %s\n",charactername);
    printf("but did not like being %d.\n",characterage);
    printf("i love the %s %f.\n","number",99.99 );

    /*int favnum=90;
    printf("my favorite %s is %d.\n","number" ,favnum);

    char mychar = 'M';
    printf("my name starts with the letter %c.\n",mychar);

    printf("%f\n", pow(4,2));

    printf("%f\n",sqrt(36));

    printf("%f\n",ceil(10.539));

    printf("%f\n",floor(10.89));

    const int num=5;
    printf("%d\n",num);

    int age;
    printf("enter your age?");
    scanf("%d",&age);
    printf("you are %d years old\n", age);

    double gpa;
    printf("enter your gpa?");
    scanf("%lf",&gpa);
    printf("your gpa is %f\n",gpa);

    char grade;
    printf("enter your grade?");
    scanf("%c",&grade);
    printf("your grade is %c\n",grade);

    char name[20];
    printf("enter your name?");
    scanf("%s",&name);
    printf("your name is %s\n",name);

    char wholename[20];
    printf("enter your name?");
    fgets(wholename,20,stdin);
    printf("your name is %s\n",wholename);

    double num1;
    double num2;
    printf("enter first number?");
    scanf("%lf",&num1);
    printf("enter second number?");
    scanf("%lf",&num2);
    printf("answer is %f",num1+num2);

    char color[20];
    char pluralnoun[20];
    char celebrity[20];

    printf("enter a color?");
    scanf("%s,",color);
    printf("enter a plural noun?");
    scanf("%s,",pluralnoun);
    printf("enter a celebrity?");
    scanf("%s,",celebrity);


    printf("roses are %s\n",color);
    printf("%s are blue\n",pluralnoun);
    printf("i love %s\n",celebrity);

    int luckynumber[]={4,8,15,23,42};
    printf("%d",luckynumber[4]);

    int luckynumber[];
    luckynumber[1]=90;
    luckynumber[3]=50;
    printf("%d",luckynumber[4]);


    return 0;



}

int main()
{
    printf("top");
    sayhi();
    printf("bottom");



}

void sayhi(){
    printf("hello world");
}

int main()
{

    sayhi("mike");
    sayhi("meron");

    return 0;
}

void sayhi(char name[])
{
    printf("hello %s\n",name);
}

int main()
{

    sayhi("mike",40);
    sayhi("meron",30);

    return 0;
}

void sayhi(char name[],int age[])
{
    printf("hello %s, you are %d years old right?\n",name,age);
}

double cube (double num){
      double result =num*num*num ;
      return result;
}






int main()
{

    printf("answer, %f,",cube (3.0));

    return 0;
}

int max (int num1, int num2, int num3){
    int result;

    if(num1 >=num2 && num1>=num3){
        result=num1;
    }
    else if(num2>=num1 && num2>=num3){
       result=num2;
       }else {
       result=num3;
       }
      return result;
}


int main()
{

    printf("%d",max(40,30,100));

    return 0;
}
int main()
{

    if (3<2 || 2<5){
        printf("true");

    } else {
    printf ("false");
}

    return 0;
}
int main()
{

    if (!(3!=3)){
        printf("true");

    } else {
    printf ("false");
}

    return 0;
}
int main()
{
     double num1;
     double num2;
     char op;


    printf("enter a number, ");
    scanf("%lf",&num1);
    printf("enter operator, ");
    scanf(" %c", &op);
    printf("enter a number, ");
    scanf("%lf", &num2);

    if(op == +�){
        printf("%f", num1+num2);
        }
        else if(op==�-�){
            printf("%f",num1-num2);
        }
        else if(op==�/�){
            printf("%f",num1/num2);
        }
        else if(op==�*�){
            printf("%f",num1*num2);
        }else {
        printf("invalid operator");
        }
    return 0;
struct student{

        char name [50];
        char major[50];
        int age;
        double gpa;

};


int main (){

    struct student student1;
    student1.age=22;
    student1.gpa=3.2;
    strcpy(student1.name, "jim");
    strcpy(student1.major, "software engineer");

    printf("%f\n",student1.gpa);
    printf("%d\n",student1.age);
    printf("%s\n",student1.name);
    printf("%s\n",student1.major);

    return 0;

}
int main (){
       int index=1;
       while(index <= 10){
        printf("%d\n", index);
        index++;

       }

    return 0;
int main (){
       int secretnumber = 5;
       int guess;

       while(guess != secretnumber){

        printf("ENTER YOUR NUMBER\n");
        scanf("%d",&guess);

       }
        printf("YOU WIN!");
    return 0;
int main (){
       int secretnumber = 5;
       int guess;
       int guesscount= 0;
       int guesslimit=3;
       int outofguesses=0;

       while(guess != secretnumber && outofguesses==0 ){
       if(guesscount< guesslimit){
        printf("ENTER YOUR NUMBER\n");
        scanf("%d",&guess);
        guesscount++;
       }else{
       outofguesses=1;
       }
       }
       if(outofguesses==1){
        printf("out of guesses");
       }
        else{
                printf("YOU WIN!");
        }

    return 0;

}

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

string answer = get_string("What's your name? ");


#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, answer\n");
}


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);
}


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    long x = get_long("x: ");

    // Prompt user for y
    long y = get_long("y: ");

    // Perform addition
    printf("%li\n", x + y);
}


if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else (x == y)
{
    printf("x is equal to y\n");
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose? ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else if (points == 2)
    {
        printf("You lost the same number of points as me.\n");
    }
}


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MINE = 2;
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");

    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
}

while (true)
{
    printf("meow\n");
}

int i = 0;
while (i < 3)
{
    printf("meow\n");
    i++;
}

for (int i = 0; i < 3; i++)
{
    printf("meow\n");
}

#include <stdio.h>

void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}

#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = 0; j < n; j++)
        {
            // Print a brick
            printf("#");
        }

        // Move to next row
        printf("\n");
    }
}

while (true)
{
    n = get_int("Size: ");
    if (n > 1)
    {
        break;
    }
}

include <cs50.h>
#include <stdio.h>

int main(void)
{
    float amount = get_float("Dollar Amount: ");
    int pennies = amount * 100;
    printf("Pennies: %i\n", pennies);
}

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float amount = get_float("Dollar Amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}

$ clang -o hello hello.c -lcs50
 clang hello.c

 #include <stdio.h>

  int main(void)
  {
      for (int i = 0; i <= 3; i++)
      {
          printf("i is %i\n", i);
          printf("#\n");
      }
  }


  #include <cs50.h>
#include <stdio.h>

int main(void)
{
    int scores[3];

    for (int i = 0; i < 3; i++)
    {
      scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3);
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%i %i %i\n", s[0], s[1], s[2]);
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");

    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    printf("%i\n", i);
}

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: \n");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }
}

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("hello, %s\n", argv[1]);
}

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (names[i] == "Ron")
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

if (strcmp(names[i], "Ron") == 0)

   include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
    printf("%i\n", *p);
}

#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
}

include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    char c = s[0];
    char *p = &c;
    printf("%p\n", s);
    printf("%p\n", p);
}


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    char *p = &s[0];
    printf("%p\n", p);
    printf("%p\n", s);
}

#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}

#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("s: ");

    string t = s;

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    for (int i = 0, n = strlen(s) + 1; i < n; i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}

include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}

include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
}

valgrind ./memory

include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}

include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

clude <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    printf("a is %i, b is %i\n", a, b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("a is %i, b is %i\n", a, b);
}

nclude <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

nclude <stdio.h>

int main(void)
{
    char *s = malloc(4);
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
$ clang -o scanf scanf.c
$ ./scanf
s: HI!
s: HI!


nclude <stdio.h>

int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
$ clang -o scanf scanf.c
$ ./scanf
s: helloooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
s: helloooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
Segmentation fault (core dumped)


// Saves names and numbers to a CSV file

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");
    if (!file)
    {
        return 1;
    }

    // Get name and number
    string name = get_string("Name: ");
    string number = get_string("Number: ");

    // Print to file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);
}


// Detects if a file is a JPEG

#include <stdint.h>
#include <stdio.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        return 1;
    }

    // Open file
    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        return 1;
    }

    // Read first three bytes
    BYTE bytes[3];
    fread(bytes, sizeof(BYTE), 3, file);

    // Check first three bytes
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Yes, possibly\n");
    }
    else
    {
        printf("No\n");
    }

    // Close file
    fclose(file);
}

include "helpers.h"

// Only let red through
void filter(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtBlue = 0x00;
            image[i][j].rgbtGreen = 0x00;
        }
    }
}

typedef struct node
{
    int number;
    struct node *next;
}
node;*/














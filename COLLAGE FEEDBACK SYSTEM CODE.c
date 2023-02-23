#include <stdio.h>
#include <stdlib.h>

int main()
{

   int name,rollnumber,course,section,choice,option,feedback,none,mess;
   printf("                                           ''COLLAGE FEEDBACK SYSTEM''\n\n");
   printf("\n                                     ''WELCOME TO COLLAGE FEEDBACK SYSTEM''\n\n");
   printf("   MOTIVE OF COLLAGE FEEDBACK SYSTEM:\n ");
   printf("''COLLAGE FEEDBACK SYSTEM HELPS US TO GIVE FEEDBACK ON VARIOUS ASPECTS OF COLLAGE MANAGEMENT''\n\n");
   printf("   INSTRUCTIONS:\n");
   printf(" ''STEP-1-ENTER YOUR DETAILS''\n");
   printf(" ''STEP-2-SELECT YOUR TOPIC TO GIVE FEEDBACk''\n");
   printf("\nSTUDENT DETAILS:\n\n");
   printf("ENTER YOUR NAME:\n");
   scanf("%s",&name);
   printf("ENTER YOUR ROLLNUMBER:\n");
   scanf("%sd",&rollnumber);
   printf("ENTER YOUR COURSE:\n");
   scanf("%s",&course);
   printf("ENTER YOUR SECTION:\n");
   scanf("%s",&section);
   char start;
   {
   printf("\nSelect option as per your choice:\n\n");
   printf("1.Press 1 to give Feedback on faculty: \n");
   printf("2.Press 2 to give Feedback on classes or virtual classes: \n");
   printf("3.Press 3 to give Feedback on collage mess:\n");
   printf("4.Press 4 to give Feedback on collage facilites: \n");
   printf("5.Press 5 to give Feedback on games or sports:\n");
   printf("6.Press 6 to give Feedback on extracurricular activites:\n");
   printf("7.Press 7 to give feedback on all topics:\n");
   printf("Enter your choice\n");
   scanf("%d",&choice);
   if(choice==1)
{
    printf("\n\n");
    printf("YOU HAVE CHOOSED TO GIVE FEEDBACK ON FACULTY:\n\n");
    printf("1.How are faculty teaching skills?\n");
    printf("1.Excellent\n");
    printf("2.Average\n");
    printf("3.Poor\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.How are satisfied are you with the faculty based upon his/her knowledge,communication and instruction quality?\n");
    printf("1.Satisfied\n");
    printf("2.Netural\n");
    printf("3.Dissatisfied\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.How could you rate the quality of learning and training content?\n");
    printf("1.Excellent\n");
    printf("2.Average\n");
    printf("3.Poor\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.Is he/she covering the syllbus in the given time?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.Is the faculty clarifying the doubts which students are asking?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("What will you recommend faculty to improve? (Enter none if there nothing to tell) \n");
    scanf("%s",&feedback);

    printf("\n                ''THANKYOU FOR GIVING FEEDBACK ON VIRATUAL CLASSES''\n");

    return 0;
}
if(choice==2)
{
    printf("\n\n");
    printf("YOU HAVE CHOOSEN TO GIVE FEEDBACK ON VIRTUAL CLASSES:\n\n");
    printf("1.How do you feel overall about diastance education?\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Below average\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Do you have ascess to device for learning online?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.What device do you use for distance learning?\n");
    printf("1.Laptop\n");
    printf("2.Desktop\n");
    printf("3.Tablet\n");
    printf("4.Smartphone\n");
    printf("Enter your option:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.How much time can you spent each day on an average on online education?\n");
    printf("1.1-3 hours\n");
    printf("2.3-5 hours\n");
    printf("3.5-7 hours\n");
    printf("4.7-10 hours\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.How helpful you collage has been in offering you the resources to learn from home?\n");
    printf("1.Extremely helpful\n");
    printf("2.Very helpful\n");
    printf("3.Slightly helpful\n");
    printf("4.Not at all helpful\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("What will you recommend collage management to improve? (Enter none if there nothing to tell) \n");
    scanf("%s",&feedback);

    printf("\n                ''THANKYOU FOR GIVING FEEDBACK ON VIRATUAL CLASSES''\n");

    return 0;

}
if(choice==3)
{
    printf("\n\n");
    printf("YOU HAVE CHOOSEN TO GIVE FEEDBACK ON COLLAGE MESS:\n\n");
    printf("1.Rate the quality and taste of food of your collage mess:\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Rate the cleanliness of kitchen:\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.How is supply and adequacy of drinking water?\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.How is the supply and adequacy of water at wash basins?\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.Overall rating of your collage mess:\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("What will you recommend collage management to improve in your collage mess? (Enter none if there nothing to tell) \n");
    scanf("%s",&mess);

    printf("\n                ''THANKYOU FOR GIVING FEEDBACK ON COLLAGE MESS''\n");


    return 0;
}
if(choice==4)
{
    printf("\n\n");
    printf("YOU HAVE CHOOSEN TO GIVE FEEDBACK ON COLLAGE FACILITES:\n\n");
    printf("1.Rate the infrastructure of your collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Rate your classrooms as per your experiences:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.Does every classrooms have projectors?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.Rate your computer lab as per your experience:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.How is software and connectivity and anti-virus in the computer lab:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("6.Rate the accessibility of wi-fi and netspeed in collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("7.Is there a canteen in collage premises?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("8.Is canteen food hygienic?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("9.Rate the libary of your collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("10.Rate the availability of books or jonurals in the libary:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("11.How are medical facilites and availability of doctor and medicines in collage?\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("12.How is transportation facility especially for day scholar?\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("13.Is there a avaliability bank or ATM in collage premesis?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("14.Rate the hostel/washrooms of your collage as per your experience:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("15.Rate overall impression of the collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("What will you recommend collage management to improve in your collage mess? (Enter none if there nothing to tell) \n");
    scanf("%s",&mess);

    printf("\n                ''THANKYOU FOR GIVING FEEDBACK ON COLLAGE FACILITES''\n");

    return 0;
}
if(choice==5)
{
    printf("\n\n");
    printf("YOU HAVE CHOOSEN TO GIVE FEEDBACK ON SPORTS OR GAMES:\n\n");
    printf("1.Does the collage conduct sports or games apart from academics?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Does collage conduct both outdoor and indoor games?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.How often do you have sports or games in collage?\n");
    printf("1.Onces in a week\n");
    printf("2.Twice in a week\n");
    printf("3.onces in a month\n");
    printf("4.Twice or Thrice in a week\n");
    printf("Enter your option:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.How understanding is your coach whlie teaching a sport or game?\n");
    printf("1.Excellent understanding\n");
    printf("2.Good understanding\n");
    printf("3.Average understanding\n");
    printf("4.Bad understanding\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.Overall impression on sports or games of your collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("What will you recommend collage management to improve in sports/games? (Enter none if there nothing to tell) \n");
    scanf("%s");

    printf("\n                ''THANKYOU FOR GIVING FEEDBACK ON SPORTS/GAMES''\n");

    return 0;
}
if(choice==6)
{
    printf("\n\n");
    printf("YOU HAVE CHOOSEN TO GIVE FEEDBACK ON EXTRA CURRICULAR ACTIVITIES,EVENTS:\n\n");
    printf("1.Do you take part in any sports activity at the collage?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Are you satisfied with the equipment,amenities,and assistance provided for your pratice and traning sessions for these activites?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.Does your collage conduct fine arts,dance,debates,music,photography etc?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.Do you think such extra curricular events are useful and add to the all around development of the students in collage?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.Overall impression on extracurricular activites in collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("Any other suggestion on extracurricular activites conducted in collage? (Enter none if there nothing to tell) \n");
    scanf("%s");

    printf("\n                ''THANKYOU FOR GIVING FEEDBACK ON EXTRACURRICULAR EVENTS''\n");

    return 0;

}
if(choice==7)
{
    printf("\n\n");
    printf("YOU HAVE CHOOSEN TO GIVE FEEDBACK ON ALL TOPICS:\n\n");
    printf("\n\n");
    printf("FEEDBACK ON FACULTY:\n\n");
    printf("1.How are faculty teaching skills?\n");
    printf("1.Excellent\n");
    printf("2.Average\n");
    printf("3.Poor\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.How are satisfied are you with the faculty based upon his/her knowledge,communication and instruction quality?\n");
    printf("1.Satisfied\n");
    printf("2.Netural\n");
    printf("3.Dissatisfied\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.How could you rate the quality of learning and training content?\n");
    printf("1.Excellent\n");
    printf("2.Average\n");
    printf("3.Poor\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.Is he/she covering the syllbus in the given time?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.Is the faculty clarifying the doubts which students are asking?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("FEEDBACK ON VIRTUAL CLASSES:\n\n");
    printf("1.How do you feel overall about diastance education?\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Below average\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Do you have ascess to device for learning online?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.What device do you use for distance learning?\n");
    printf("1.Laptop\n");
    printf("2.Desktop\n");
    printf("3.Tablet\n");
    printf("4.Smartphone\n");
    printf("Enter your option:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.How much time can you spent each day on an average on online education?\n");
    printf("1.1-3 hours\n");
    printf("2.3-5 hours\n");
    printf("3.5-7 hours\n");
    printf("4.7-10 hours\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.How helpful you collage has been in offering you the resources to learn from home?\n");
    printf("1.Extremely helpful\n");
    printf("2.Very helpful\n");
    printf("3.Slightly helpful\n");
    printf("4.Not at all helpful\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("FEEDBACK ON COLLAGE MESS:\n\n");
    printf("1.Rate the quality and taste of food of your collage mess:\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Rate the cleanliness of kitchen:\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.How is supply and adequacy of drinking water?\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.How is the supply and adequacy of water at wash basins?\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.Overall rating of your collage mess:\n");
    printf("1.Good\n");
    printf("2.Average\n");
    printf("3.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("FEEDBACK ON COLLAGE FACILITES:\n\n");
    printf("1.Rate the infrastructure of your collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Rate your classrooms as per your experiences:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.Does every classrooms have projectors?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.Rate your computer lab as per your experience:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.How is software and connectivity and anti-virus in the computer lab:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("6.Rate the accessibility of wi-fi and netspeed in collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("7.Is there a canteen in collage premises?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("8.Is canteen food hygienic?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("9.Rate the libary of your collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("10.Rate the availability of books and jonurals in the libary:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("11.How are medical facilites and availability of doctor and medicines in collage?\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("12.How is transportation facility especially for day scholar?\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("13.Is there a avaliability bank or ATM in collage premesis?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("14.Rate the hostel/washrooms of your collage as per your experience:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("15.Rate overall impression of the collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("GIVE FEEDBACK ON SPORTS OR GAMES:\n\n");
    printf("1.Does the collage conduct sports or games apart from academics?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Does collage conduct both outdoor and indoor games?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.How often do you have sports or games in collage?\n");
    printf("1.Onces in a week\n");
    printf("2.Twice in a week\n");
    printf("3.onces in a month\n");
    printf("4.Twice or Thrice in a week\n");
    printf("Enter your option:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.How understanding is your coach whlie teaching a sport or game?\n");
    printf("1.Excellent understanding\n");
    printf("2.Good understanding\n");
    printf("3.Average understanding\n");
    printf("4.Bad understanding\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.Overall impression on sports or games of your collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");


printf("\n\n");
    printf("FEEDBACK ON EXTRA CURRICULAR ACTIVITIES OR EVENTS:\n\n");
    printf("1.Do you take part in any sports activity at the collage?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("2.Are you satisfied with the equipment,amenities,and assistance provided for your pratice and traning sessions for these activites?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("3.Does your collage conduct fine arts,dance,debates,music,photography etc?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("4.Do you think such extra curricular events are useful and add to the all around development of the students in collage?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter your options:\n");
    scanf("%d");

    printf("\n\n");
    printf("5.Overall impression on extracurricular activites in collage:\n");
    printf("1.Excellent\n");
    printf("2.Good\n");
    printf("3.Average\n");
    printf("4.Bad\n");
    printf("Enter your experience as per above given options:\n");
    scanf("%d");

    printf("\n\n");
    printf("Any other suggestion? (Enter none if there nothing to tell) \n");
    scanf("%s",&feedback);

    printf("\n                ''THANKYOU FOR GIVING FEEDBACK ''\n");

    return 0;
}
   }
}


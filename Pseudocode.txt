Declare class question1
    Define method myMethod
        Declare variables: name, penny, nickel, dime, quarter, weeks, grand_total, year, average_week
        Display piggy bank illustration
        Display welcome message
        Prompt and get user's full name
        Prompt and get counts of different coins
        Prompt and get the number of weeks saving
        Calculate grand_total
        Display coin counts
        Set output precision to two decimal places
        Display grand total
        Calculate and display average money saved per week
        Calculate and display potential savings in a year
        Display thank you message

Declare class question2
    Define method myMethod
        Declare variables: name, snum, mk11, mk12, mk13, mk14, mk21, mk22, mk23, mk24, mk31, mk32, mk33, mk34, mk41, mk42, mk43, mk44
        Declare variables: q11, q12, q21, q22, q31, q32, q41, q42, totalmk1, totalmk2, totalmk3, totalmk4, totalq1, totalq2, totalq3, totalq4
        Declare variables: totalc1, totalc2, totalc3, totalc4, percentagemk1, percentagemk2, percentagemk3, percentagemk4, percentageq1, percentageq2, percentageq3, percentageq4
        Prompt and get student's name and number
        Prompt and get test and quiz scores for the first subject
        Calculate totalmk1, percentagemk1, totalq1, percentageq1, totalc1
        Repeat the same steps for the other subjects
        Calculate total percentage for all subjects
        Display student's report card

In the main function:
    Declare question variable
    Prompt user to select a question
    If question is 1
        Create an instance of question1 class
        Call myMethod on the instance
    If question is 2
        Create an instance of question2 class
        Call myMethod on the instance
    Return 0 to indicate successful execution

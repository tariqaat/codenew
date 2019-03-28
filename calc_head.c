int calculator(int op,int firstNumber,int secondNumber)
{
    int v;
 switch(op)
    {
        case 1:
            v=firstNumber+secondNumber;
            break;

        case 2:
            v=firstNumber-secondNumber;
            break;

        case 3:
            v=firstNumber*secondNumber;
            break;

        case 4:
            v=firstNumber/secondNumber;
            break;


    }
    return v;
   }


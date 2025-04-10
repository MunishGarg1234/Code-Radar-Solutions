// Your code here...
int calculatePenalty(int subDay,int subMonth,int subYear,int dueDay,int dueMonth,int dueYear){
    if(subMonth==dueMonth && subYear==dueYear && subDay!=dueDay){
        return (subDay-dueDay)*10;
    }
    else if(subYear==dueYear && subMonth!=dueMonth && subDay!=dueDay){
        return (subMonth-dueMonth)*200;
    }
    else if(subYear!=dueYear){
        return 5000;
    }
}
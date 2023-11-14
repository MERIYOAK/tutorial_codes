function isLeap(year) { 
    if (year % 4 === 0){
        if (year % 100 === 0){
            if (year % 400 === 0){
                return "it is a leap year";
            } 
               return "it is not a leap year";         
        }
          return "it is a leap year";    
    }
        return "it is not a leap year";
  }


function isLeap1(year){
  console.log((year % 4 === 0 && year % 100 !== 0 || year % 400 === 0) ? "Leap year." : "Not leap year.");
}

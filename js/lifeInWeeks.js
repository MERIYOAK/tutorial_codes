function lifeInWeeks(age) {           
    //Write your code here.
  var months = (90 * 12) - (age * 12);
  var weeks = (90 * 52) - (age * 52);
  var days = (90 * 365) - (age * 365);
    console.log("You have " + days + ", " + weeks + ", and " + months + " months left.")   
}
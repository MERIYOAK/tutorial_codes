function bmiCalculator (weight, height) {
    var bmi = weight / Math.pow(height, 2);
    return result;
   }
   var bmi = Math.round(bmiCalculator(100, 2));


function bmiCalculator1 (weight, height) {
 
 var bmi = Math.round(weight / Math.pow(height, 2));
 var result = "";
 
  if (bmi < 18.5){
  result = "your BMI is " + bmi + ", so you are underweight.";
 } else if (bmi >= 18.5 && bmi <= 24.9){
  result = "your BMI is " + bmi + ", so you have a normal weight";
 } else {
  result = "your BMI is " + bmi + ", so you are overweight.";
 }
  return result;
 }

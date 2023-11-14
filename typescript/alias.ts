type CarYear = number;
type CarType = string;
type CarModel = string;
type Car = {
  year: CarYear,
  type: CarType,
  model: CarModel
};

const mycarYear: CarYear = 2001
const mycarType: CarType = "Toyota"
const mycarModel: CarModel = "Corolla"
const mycar: Car = {
  year: mycarYear,
  type: mycarType,
  model: mycarModel
};

const hercarYear: CarYear = 2023
const hercarType: CarType = "Ford"
const hercarModel: CarModel = "land cruiser"
const hercar: Car = {
  year: hercarYear,
  type: hercarType,
  model: hercarModel
};

console.log(hercar);                       
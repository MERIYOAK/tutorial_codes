import generateName from "sillyname";
import superheroes from "superheroes";


var sillyName = generateName();
console.log(`My name is ${sillyName}`);

var superHeroes = superheroes.random();
console.log(`I am a ${superHeroes} !`);

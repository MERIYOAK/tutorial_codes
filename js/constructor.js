function HouseKeeper (name, age, experience, hobby) {
    this.name = name;
    this.age = age;
    this.experience = experience;
    this.hobby = hobby;
    this.cleanup = function () {
        console.log("cleaning in progress");
    }
}

var houseKeeper1 = new HouseKeeper ("janet", 30, "two years", ["listening music", "playing chess"]);
console.log(houseKeeper1.hobby);
console.log(houseKeeper1.cleanup);
houseKeeper1.cleanup();


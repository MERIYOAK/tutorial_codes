
const mongoose = require("mongoose");

mongoose.connect("mongodb://127.0.0.1:27017/fruitsDB");

const fruitSchema = new mongoose.Schema({
    name: {
        type: String,
        required: [true, "Please check your data entry, no name specified."]
    },
    rating: {
        type: Number,
        min: 1,
        max: 10
    },
    review: String
});

const Fruit = mongoose.model("fruits", fruitSchema);

const fruit = new Fruit({
    name: "Apple",
    rating: 7,
    review: "so great!"
});

//fruit.save();

mongoose.connect("mongodb://127.0.0.1:27017/fruitsDB");

const personSchema = new mongoose.Schema({
    name: String,
    age: Number,
    favoriteFruit: fruitSchema
});

const Person = mongoose.model("people", personSchema);

const person = new Person({
    name: "Meron",
    age: 30,
});

//person.save();

const kiwi = new Fruit({
    name: "Kiwi",
    rating: 10,
    review: "Kiwi is so great!"
});

const orange = new Fruit({
    name: "Orange",
    rating: 4,
    review: "Too sour for me."
});

const banana = new Fruit({
    name: "Banana",
    rating: 3,
    review: "Weird texture."
});

async function insertFruits() {
    try {
        await Fruit.insertMany([kiwi, orange, banana]);
        console.log("Successfully inserted all fruits to fruitsDB");
    } catch (err) {
        console.error("Error:", err);
    } finally {
        // Close the Mongoose connection when done
        mongoose.connection.close();
    }
};

//insertFruits();

// Find all fruits in the database
async function findFruits() {
    try {
        const fruits = await Fruit.find();
        console.log(fruits);
    } catch (err) {
        console.error("Error:", err);
    } finally {
        mongoose.connection.close();
    }
};

//findFruits();

async function logEachfruits() {
    try {
        const fruits = await Fruit.find();
        fruits.forEach(f => console.log(f.name));
    } catch (err) {
        console.error("Error:", err);
    } finally {
        mongoose.connection.close();
    }
};

//logEachfruits();

//embedde document example
async function updateFruits() {
    try {
        await Person.updateOne({ _id: "64f46ba14cd71174dbbc66d9" }, { favoriteFruit: kiwi });
        console.log(" updated successfully");
    } catch (err) {
        console.error("Error:", err);
    } finally {
        mongoose.connection.close();
    }
};

//updateFruits();

async function deleteFruits() {
    try {
        await Fruit.deleteOne({ name: { $regex: /^banana$/i } }); // Case-insensitive regex
        console.log("deleted successfully");
    } catch (err) {
        console.error("Error:", err);
    } finally {
        mongoose.connection.close();
    }
};

//deleteFruits();

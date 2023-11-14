
const MongoClient = require("mongodb").MongoClient;
const assert = require("assert");


// Connection URL
const url = "mongodb://127.0.0.1:27017";

// Database Name
const dbName = "fruitsDB";

// Create New MongoClient
const client = new MongoClient(url);

// Use Connect Methods to Connect to the server
client.connect(function (err) {
    assert.equal(null, err);
    console.log("Connected successfully to server");

    const db = client.db(dbName);

    findDocuments(db, function () {
        client.close();
    });
});

const insertDocuments = function (db, callback) {
    // Get the documents collection
    const collection = db.collection("fruits");
    // insert some documents
    collection.insertMany([
        {
            name: "Apple",
            score: 8,
            review: "Great fruit"
        },
        {
            name: "Orange",
            score: 6,
            review: "Kinda sour"
        },
        {
            name: "Banana",
            score: 9,
            review: "Great stuff!"
        }
    ], function (err, result) {
        assert.equal(err, null);
        assert.equal(3, result.insertedCount);
        console.log("Inserted 3 documents in to the collection");
        callback(result);
    });
}

const findDocuments = function (db, callback) {
    // Get the documents collection
    const collection = db.collection("fruits");
    // find some documents
    collection.find({}).toArray(function (err, fruits) {
        assert.equal(err, null);
        console.log("Found the following records");
        console.log(fruits);
    });
}
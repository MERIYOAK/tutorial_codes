import express from "express";
import bodyParser from "body-parser";

const app = express();
const port = 3000;

app.use(bodyParser.urlencoded({ extended: true }));

app.get("/", (req, res) => {
  res.render("index.ejs", {
    header: "<h1> Enter your name below</h1>"
  });
});

app.post("/submit", (req, res) => {
  const numberOfLetters = req.body["fName"].length + req.body["lName"].length;
  res.render("index.ejs", {
    header: `<h1>Your Fullname is ${numberOfLetters} letters long!</h1>`,
    numberOfLetters: numberOfLetters
  });
});

app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});

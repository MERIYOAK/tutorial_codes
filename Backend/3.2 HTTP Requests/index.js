import express from "express";
const app = express();
const port = 3000;

app.get("/", (req, res) => {
    res.send("<h1>Hello World, Welcome!</h1>");
    //console.log(req.rawHeaders);
}); 

app.get("/about", (req, res) => {
    res.send("<h1>About Me</h1><p>This is Meron Michael from Angola.</p>");
    //console.log(req.rawHeaders);
});

app.get("/contact", (req, res) => {
    res.send("<h1>Contact Me</h1><small>email: merommichaelahw@gmail.com</small>");
    //console.log(req.rawHeaders);
});

app.listen(port, () => {
    console.log(`Server running on port ${port}.`);
});

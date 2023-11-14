import  express  from "express";

const app= express();

app.set('view engine', 'ejs');
app.set('views', './views');

app.use((req, res, next) => {
    // Get the current day of the week (0 is Sunday, 6 is Saturday)
    const currentDay = new Date().getDay();
    // Determine if it's a weekend or a weekday
    const isWeekend = currentDay === 0 || currentDay === 6;
    // Attach the isWeekend value to the response.locals object
    res.locals.isWeekend = isWeekend;
    next(); // Move to the next middleware or route handler
});
  
app.get('/', (req, res) => {
    res.render('index'), {
        isWeekend: res.locals.isWeekend
    };
});
  
app.listen(3000, () => {
    console.log('Server is running on port 3000');
});
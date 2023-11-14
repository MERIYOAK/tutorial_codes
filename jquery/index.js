//this means that once the document is loaded, jquery will be executd.
/*
but if you write the jquery script tag of your html on the bottom,
of the body right above your index.js you dont this .ready function of jquery.
 */
/*
$(document).ready(function() {
    $("h1").css("color", "red");
    // this line in vanilla js is document.querySelectorALL("h1").style.color = "red";
})
*/



$("h1").addClass("big-title margin-50");
$("h1").removeClass("big-title");




var has = $("h1").hasClass("margin-50");
console.log(has);



$("h1").text("bye");
$("button").html("<em>bye</em>");


$("a").attr("href"); //gives you the value of href at that anchor tag. you are getting
$("a").attr("href", "https://www.github.com/");//setting the value of that anchor's href. you are setting



$("h1").click(function() {
    $("h1").css("color", "red");
});




$("button").click(function() {
    $("h1").css("color", "purple");
});



// you can replace the "input" with document if you want to hear for the whole document.
$("input").keypress(function(event) {
    console.log(event.key);
    $("h1").text(event.key);
});




$("h1").on("mouseover", function() {
    $("h1").css("color", "violet");
});




$("h1").before("<button>New</button>");
$("h1").after("<button class='button'>New</button>");
$("h1").prepend("<button>New</button>");
$("h1").append("<button>New</button>");





$("img").remove();



$("#button").click(function() {
    $("h1").show();
    $("h1").hide();
    $("h1").toggle();
    $("h1").fadeIn();
    $("h1").fadeOut();
    $("h1").fadeToggle();
    $("h1").slideUp();
    $("h1").slideDown();
    $("h1").slideToggle();
    $("h1").animate({
                    margin: "20"            // means 20px  or you can say like "20%".
    });
});



$(".button").click(function() {
    $("h1").slideUp().slideDown().animate({
                    opacity: "0.5"            
    });
});




$("selector").eq(index);




const secondH1 = $("h1").eq(1); // Selects the second <h1> element



const h1Text = $("h1").first().text();




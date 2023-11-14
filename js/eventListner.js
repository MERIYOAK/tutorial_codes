// example of what does an eventlistner does internally
function anotherAddEventListner(typeOfEvent, callback) {
    // detect event code
    var eventThatHappened = {
        eventType: "keypress",
        key: "p",
        durationOfKeypress: 2,
        clean: function () {
            console.log("cleaning in progress");
        }
    }

    if (eventThatHappened.eventType === typeOfEvent) {
        callback(eventThatHappened);
    }  
}

anotherAddEventListner("keypress", function(event) {
    console.log(event);
    event.clean();
});

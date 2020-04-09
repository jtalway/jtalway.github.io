// array with the button colors
var buttonColours = ["red", "blue", "green", "yellow"];
// new empty array - store randomly generated pattern
var gamePattern = [];
// new empty array - store what user clicks
var userClickedPattern = [];
// has the game started or not
var started = false;
// level tracker
var level = 0;
// on first keypress, start the game
$(document).keypress(function() {
  // if game has not started
  if (!started) {
    // set level to 0
    $("#level-title").text("Level " + level);
    // find first color in sequence
    nextSequence();
    // game has started
    started = true;
  }
});

// detect when any of the buttons are clicked and trigger a handler function
$(".btn").click(function() {
  // new var to store the id of the button that got clicked
  var userChosenColour = $(this).attr("id");
  // add the clicked color to the userClickedPattern array
  userClickedPattern.push(userChosenColour);
  // when user clicks, play corresponding sound
  playSound(userChosenColour);
  // when user clicks, animate button
  animatePress(userChosenColour);
  // compare computer vs. user using last answer in user sequence
  checkAnswer(userClickedPattern.length-1);
});
// function for checking if the chosen color is correct
function checkAnswer(currentLevel) {
  // if answer is same, success!
  if (gamePattern[currentLevel] === userClickedPattern[currentLevel]) {
    console.log("success");
    // is current sequence complete?
    if (userClickedPattern.length === gamePattern.length) {
      // call nextSequence after 1000 millisecond delay
      setTimeout(function () {
        nextSequence();
      }, 1000);
    }
  } else {
      // wrong answer
      console.log("wrong");
      playSound("wrong");
      // add class "game-over to body of the website
      $("body").addClass("game-over");
      // remove class "game-over" from body of the website after delay
      setTimeout(function() {
        $("body").removeClass("game-over");
      }, 200);
      // change h1 to Game Over
      $("#level-title").text("Game Over, Press Any Key to Restart");
      // call startOver to restart game if user gets sequence wrong
      startOver();
  }
}

// function for determining the next color in the sequence
function nextSequence() {
  // reset userClickedPattern to empty array for next level
  userClickedPattern = [];
  // increase level by 1 each time this function is called
  level++;
  // update h1 with new level
  $("#level-title").text("Level " + level);
  // randomly generate a number between 0 and 3
  var randomNumber = Math.floor(Math.random() * 4);
  // select a random color from the buttonColours array
  var randomChosenColour = buttonColours[randomNumber];
  // add the generated color to the gamePattern array
  gamePattern.push(randomChosenColour);
  // select the button with the same id as the color, animate a flash to the button
  $("#" + randomChosenColour).fadeIn(100).fadeOut(100).fadeIn(100);
  // function call to play sound when random choice is determined
  playSound(randomChosenColour);

}
// function for playing sound
function playSound(name) {
  // select the sound for the button color
  var audio = new Audio("sounds/" + name + ".mp3");
  // play the selected sound
  audio.play();
}

// function to animate pressed button
function animatePress(currentColour) {
  // add pressed class to button that gets clicked
  $("#" + currentColour).addClass("pressed");
  // remove the pressed class after 100 milliseconds
  setTimeout(function() {
    $("#" + currentColour).removeClass("pressed");
  }, 100);
}

// function to start the game Over
function startOver() {
  // reset variables
  level = 0;
  gamePattern = [];
  started = false;
}

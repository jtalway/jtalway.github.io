//
// Detect Button Clicks
//
// Apply the "click" eventListener to every button using a for loop

for (var i = 0; i < document.querySelectorAll(".drum").length; i++) {

  document.querySelectorAll(".drum")[i].addEventListener("click", detectClick);
}

// callback function that detects button Clicks
function detectClick() {
  // Assign the innerHTML property of the returned "this" object as a variable
  // https://www.w3schools.com/js/js_this.asp
  var buttonInnerHTML = this.innerHTML;
  // Use the variable as an input of the makeSound function
  makeSound(buttonInnerHTML);
  buttonAnimation(buttonInnerHTML);
}

//
// Detecting Keyboard Press
//
// Apply the "keydown" eventListener to the entire document to detect key pressed
document.addEventListener("keydown", detectKeyPress);
// callback function that detects key pressed
function detectKeyPress(input) {
  // "input" is the key that the "keydown" eventListener detected
  // specify the property "key" inside the object
  makeSound(input.key);
  buttonAnimation(input.key);
}
// Make the Sound
function makeSound(keyClicked) {
  // "keyClicked" connects the input of the function and the expression of the switch statement
  // passed by "input.key"
  switch (keyClicked) {
    case "w":
      var tom1 = new Audio("sounds/tom-1.mp3");
      tom1.play();
      break;
    case "a":
      var tom2 = new Audio("sounds/tom-2.mp3");
      tom2.play();
      break;
    case "s":
      var tom3 = new Audio("sounds/tom-3.mp3");
      tom3.play();
      break;
    case "d":
      var tom4 = new Audio("sounds/tom-4.mp3");
      tom4.play();
      break;
    case "j":
      var snare = new Audio("sounds/snare.mp3");
      snare.play();
      break;
    case "k":
      var crash = new Audio("sounds/crash.mp3");
      crash.play();
      break;
    case "l":
      var kick = new Audio("sounds/kick-bass.mp3");
      kick.play();
      break;
    default:
      console.log(buttonInnerHTML);

  }
}

function buttonAnimation(currentKey) {
  var activeButton = document.querySelector("." + currentKey);
// apply "pressed" class to the active button
  activeButton.classList.add("pressed");
// remove "pressed" class one second later from the active button
  setTimeout(function() {
    activeButton.classList.remove("pressed");

  }, 100);
}

const maleMC = document.getElementById('MaleMC');
const femaleMC = document.getElementById('FemaleMC');

let current = maleMC;
let next = femaleMC;

function switchCharacters() {
  current.classList.add('enter');

  setTimeout(() => {
    current.classList.remove('enter');
    current.classList.add('exit');

    setTimeout(() => {
      current.classList.remove('exit');
      [current, next] = [next, current];
      switchCharacters();
    }, 500); // match the exit animation duration
  }, 3000); // visible duration
}

window.onload = () => {
  switchCharacters();
};

function validateLogin(event) {
  event.preventDefault();

  const username = document.getElementById("username").value.trim();
  const password = document.getElementById("password").value.trim();

  if (!username || !password) {
    alert("Please enter both username and password.");
    return false;
  }

  window.location.href = "Thanks.html";
}

function validateSignUpForm(event) {
  event.preventDefault();

  const username = document.getElementById("signup-username").value.trim();
  const email = document.getElementById("signup-email").value.trim();
  const password = document.getElementById("signup-password").value;
  const confirmPassword = document.getElementById("signup-confirm-password").value;

  if (!username || !email || !password || !confirmPassword) {
    alert("Please fill in all the fields.");
    return false;
  }

  if (password !== confirmPassword) {
    alert("Passwords do not match.");
    return false;
  }

  window.location.href = "Sign-Up Thanks.html";
}

const maleMC = document.getElementById('MaleMC');
const femaleMC = document.getElementById('FemaleMC');

let current = maleMC;
let next = femaleMC;

function switchCharacters() {
    // Step 1: Enter current
    current.classList.add('enter');

    // Step 2: Wait 3s, then exit
    setTimeout(() => {
        current.classList.remove('enter');
        current.classList.add('exit');

        // Step 3: After exit is done, switch to next
        setTimeout(() => {
            current.classList.remove('exit');

            // Swap characters
            [current, next] = [next, current];

            // Loop again
            switchCharacters();

        }, 500); // match the exit animation time (1s)
    }, 5000); // visible for 3 seconds
}


window.onload = () => {
    switchCharacters();
};


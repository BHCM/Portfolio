document.addEventListener('DOMContentLoaded', () => {

//Génerer un nombre aléatoire à deviner
const randomNumber = Math.floor(Math.random() * 100) +1;
var guessChance = 3;

//Sélectionner les élements du DOM
const guessInput = document.getElementById('guessInput');
const guessButton = document.getElementById('guessButton');
const resultDisplay = document.getElementById('result');
const nbchance = document.getElementById('nbchance');

//Fonction pour verifier la supposition
function checkGuess() {
    const userGuess = Number(guessInput.value);

    if (userGuess === randomNumber) {
        resultDisplay.textContent = 'Félicitation! Vous avez trouver le bon nombre!';
    } else if (userGuess < randomNumber) {
        resultDisplay.textContent = 'Trop bas! Essayez un nombre plus élevé.';
    } else if (userGuess > randomNumber) {
        resultDisplay.textContent = 'Trop haut! Essayez un nombre plus bas.';
    }

    chances();
    //Réinitialiser l'entrée
    guessInput.value = '';
}
//Fonction pour les chances de propositions
function chances(){
    console.log('je suis dans ma fonction chance');
    guessChance--;
    nbchance.textContent = 'Il vous restait ' + guessChance +  ' chances';
    if (guessChance === 0) {
        resultDisplay.textContent = 'Perdu';
        guessButton.style.display = "none";
    }
   /* if (userGuess === randomNumber & guessChance === 3) {
        resultDisplay.textContent = 'Il vous restait 3 chances';
    } else if (userGuess == false ) {
        guessChance - 1;
       
    } else 
    }*/
}

//Ajouter un écouteur d'événements au bouton
guessButton.addEventListener('click', checkGuess);

});
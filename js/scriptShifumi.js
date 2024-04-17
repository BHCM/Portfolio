const containingChoiceComputer = document.getElementById('choice-computer')  ;
const containingChoiceUser = document.getElementById('choice-user');
const containingResult = document.getElementById('result');

const choicePossible = document.querySelectorAll('button');
let choiceUser;
let result;
let choiceComputer;
let userpoint=0;
let pcpoint=0;

choicePossible.forEach(choicePossible => choicePossible.addEventListener('click',(e)=>{
    choiceUser = e.target.id ;
    containingChoiceUser.innerHTML = "<img src='img/"+choiceUser+".png'>";
    generate_choice_computer ();
    verification();
}))

function generate_choice_computer(){
    random = Math.floor(Math.random()*3+1)
    if (random === 1) {
        choiceComputer = "rocks"
    } else if (random === 2) {
        choiceComputer = "paper"
    } else if (random === 3) {
        choiceComputer = "scissors"
    } 
    containingChoiceComputer.innerHTML = "<img src='img/"+choiceComputer+".png'>"
}
function verification(){
    if (choiceUser == choiceComputer ) {
        result = "Egalité !";
    } else if(choiceUser == "rocks" && choiceComputer == "paper") {
        result = "Perdu ! ";
        pcpoint++;
    }else if(choiceUser == "paper" && choiceComputer == "scissors") {
        result = "Perdu ! ";
        pcpoint++;
    }else if(choiceUser == "scissors" && choiceComputer == "rocks") {
        result = "Perdu ! ";
        pcpoint++;
    }else if(choiceUser == "rocks" && choiceComputer == "scissors") {
        result = "Gagné ! ";  
        userpoint++;  
    }else if(choiceUser == "scissors" && choiceComputer == "paper") {
        result = "Gagné ! ";
        userpoint++;
    }else if(choiceUser == "paper" && choiceComputer == "rocks") {
        result = "Gagné ! ";
        userpoint++; 
    }
    containingResult.innerHTML = result + "Score : Ordinateur : " + pcpoint + " Joueur : " + userpoint;
}
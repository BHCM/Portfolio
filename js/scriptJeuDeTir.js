document.addEventListener('DOMContentLoaded', () => {

    // Selectioner les éléments html
    let container = document.querySelector('.container');
    let btn = document.querySelector('.start-btn');
    let scoreContainer = document.querySelector('.score');
    let timeContainer = document.querySelector('.time');
    let isPlay = false;
    let interval;

    btn.addEventListener('click', function(){
        if(isPlay === true){
            console.log('test jeux is play');
            clearInterval(interval);
        }
        
        let score = 0;
        let time = 30;
        isPlay = true;
        container.innerHTML = "";

        interval = setInterval(function showTarget() 
        {
            //Création de la cible
            let target = document.createElement('img');
            target.id="target";
            target.src="img/silly.png";
            container.appendChild(target) ;
            target.style.top = Math.random() * (500 - target.offsetHeight) + 'px';
            target.style.left = Math.random() * (1350 - target.offsetWidth) + 'px';
            
            //Faire disparaitre la ciblee
            setTimeout(function(){
                target.remove();
            }, 3000) 

            //Quand on clique sur la cible
            target.onclick = function(){
                score += 1 ;
                target.style.display = 'none';
            }
            time-= 1;

            //Afficher les infos
            scoreContainer.innerHTML = 'Score : ' + score  ;
            timeContainer.innerHTML =  'Temps : ' +time ;

            //fin du jeu quand le temps est écoulé
            if (time == 0) {
                clearInterval(interval);
                container.innerHTML = "Le jeu est terminé"
            }
        }, 500);
    })
});
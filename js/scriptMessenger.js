document.addEventListener('DOMContentLoaded', function() {
    const messageContainer = document.querySelector('.message-container');
    const databaseContainer = document.querySelector('.database-container');
    const messageInput = document.getElementById('message-input');
    const smileyContainer = document.querySelector('.smiley-container');
    const sendButton = document.getElementById('send-button'); 
    const smileyButtons = document.querySelectorAll('.smiley-container .smiley');
    let typingTimeout; // Définir la variable typingTimeout

    // Liste des smileys
    const smileys = [
        '😊', '😂', '😍', '😎', '🤔', '😜', '😁', '😋', '😘', '😆',
        '😇', '😉', '😄', '😏', '😬', '😌', '😝', '😛', '😤', '😫',
        '😴', '😢', '😭', '😓', '😩', '😔', '😑', '😶', '😪', '😷',
        '😋', '😲', '😵', '😐', '😯', '😦', '😧', '😨', '😰', '😡',
        '😠', '😈', '👿', '💀', '☠️', '💩', '🤡', '👹', '👺', '👻',
        '👽', '👾', '🤖', '🎃', '😺', '😸', '😹', '😻', '😼', '😽',
        '🙀', '😿', '😾', '🙈', '🙉', '🙊', '💋', '💌', '💘', '💝',
        '💖', '💗', '💓', '💞', '💕', '💜', '💛', '💚', '💙', '🧡',
        '❤️', '💔', '❣️', '💤', '💢', '💥', '💫', '💦', '💨', '🕳️'
    ];


    // Afficher la liste des smileys
    smileys.forEach(smiley => {
    // Pour chaque smiley dans la liste
    const smileyButton = document.createElement('button'); // Créer un bouton pour le smiley
    smileyButton.textContent = smiley; // Définir le texte du bouton comme le smiley actuel
    smileyButton.addEventListener('click', function() {
        // Ajouter un écouteur d'événements pour le clic sur le bouton
        messageInput.value += smiley; // Ajouter le smiley au champ de saisie de texte
        messageInput.focus(); // Mettre le focus sur le champ de saisie de texte après avoir ajouté le smiley
    });
    smileyContainer.appendChild(smileyButton); // Ajouter le bouton de smiley au conteneur de smileys dans l'interface utilisateur
    });


    // Fonction pour envoyer un message
    function sendMessage() {
        // Récupérer le texte du champ de saisie de texte en supprimant les espaces vides au début et à la fin
        const messageText = messageInput.value.trim();
        // Vérifier si le texte du message n'est pas vide
        if (messageText !== '') {
            // Créer un nouvel élément div pour représenter le message
            const message = document.createElement('div');
            // Ajouter la classe "message" à l'élément div pour le style
            message.classList.add('message');
            // Définir le contenu textuel de l'élément div comme le texte du message
            message.textContent = messageText;
            // Ajouter l'élément de message au conteneur des messages dans l'interface utilisateur
            messageContainer.appendChild(message);
            // Stocker le message dans la base de données simulée (ajouter un élément div avec le même contenu textuel)
            const messageEntry = document.createElement('div');
            messageEntry.textContent = messageText;
            databaseContainer.appendChild(messageEntry);
            // Effacer le contenu du champ de saisie après l'envoi du message
            messageInput.value = '';
        }
    }


    // Écouter l'événement "keypress" pour envoyer le message lorsque la touche "Enter" est pressée
    messageInput.addEventListener('keypress', function(event) {
        // Vérifier si la touche pressée est la touche "Enter"
        if (event.key === 'Enter') {
            // Appeler la fonction sendMessage pour envoyer le message
            sendMessage();
        }
    });

    // Écouter l'événement du clic sur le bouton "Envoyer"
        sendButton.addEventListener('click', sendMessage);

    // Fonction pour afficher un message lorsque l'utilisateur commence à taper
        messageInput.addEventListener('keypress', function() {
            // Effacer le délai d'attente précédent s'il y en a un
            clearTimeout(typingTimeout);
            // Afficher le message "Un utilisateur rédige un message..." dans le conteneur des messages
            messageContainer.textContent = "Un utilisateur rédige un message...";
            // Définir un délai d'attente avant d'effacer le message
            typingTimeout = setTimeout(() => {
                messageContainer.textContent = ""; // Effacer le message après 2 secondes
            }, 2000);
        });


});

#Projet test pour apprendre les bases de la programmation et de l'électronique

##But du projet : 
Réaliser un carrefour de leds.

##La réalisation : 
4 leds sont placées pour simuler un carrefour. 
4 boutons poussoirs sont placées devant les leds pour simuler l'arrivée d'un véhicule.

Lorsqu'un véhicule arrive (appuie sur un bouton poussoir) alors après un délai de 3 secondes son feu et celui opposé s'allument
Les 2 autres s'éteignent.

###1ère étape : 
On appuie sur chaque bouton 1 par 1 et on vérifie que tout marche bien.

###2ème étape : 
Si pendant le délai de 3 secondes un autre véhicule arrive à une intersection alors l'information est gardée en mémoire. Les feux changeront d'état en fonction de la pile (pile = FIFO = First In First Out = premier arrivé premier sorti).

###3ème étape : 
Gérer les appuis boutons à l'aide d'interruption.

###4ème étape : 
Gérer la pile de façon dynamique et en passant par pointeur.

##Intérêt du projet :
On s'initie à la gestion des entrées / sorties.
Les différents type de délai.
La gestion d'un tableau de données.
La gestion des interruptions.

##Commentaire du chef pour ce code :
Les 2 premières étapes sont assez facilement réalisables
Cela permet de voir l'utilisation de fonctions simples et les bases de l'algorithmie
**Il est _IMPERATIF_ de bien commenter son code**
Lorsque des modifications surviendront cela sauvera du temps et des chatons (oui car dans le monde un chaton mignon meurt dès qu'une fonction non commentée est créée)

Si des gens sont motivés alors l'étape 3 est réalisable mais elle est plus présente pour éviter l'ennui si quelqu'un fini à temps

Si quelqu'un arrive à finir l'étape 3 alors je lui offrirai un cookie

Si quelqu'un finit honnetement l'étape 4 je lui demande cordialement de sortir de mon groupe XD

##Commentaire pour le projet global :
Je posterai une série de code résumant la méthodologie à utiliser (commentaire, fonctions, onglets)
Même si ces étapes peuvent sembler évidentes pour certains je les invite à bien commenter leur code et à ne pas céder à la facilité car celle-ci mène toujours au côté obscur.
J'invite chaque personne à déposer son code sur le github. Quel que soit votre niveau de confiance. Je reprécise que c'est un cours pour débutant, mon but étant de vous aider et vous conseiller.
Rien n'est pire que des gens qui n'osent pas, donc osez et trompez-vous. C'est par l'échec qu'on apprend.

#Bonne chance à tous et que le code soit avec vous !!!

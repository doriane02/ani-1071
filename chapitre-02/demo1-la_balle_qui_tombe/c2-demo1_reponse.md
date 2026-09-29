Pour une hauteur h = 100m on modifie dt et on relève le temps d'impact pour chacune de ces valeurs:
-pour dt = 0.1 s , le temps d'impact est compris entre 4.3s et 4.4s
-pour dt = 0.01 s , le temps d'impact est 4.5 s
-pour dt = 1.0 s, le temps d'impact est 4.0 s
 
  on peut donc voir que le temps d'impact chaque pour des intervalle de temps différents, alors qu'il ne devrait pas car il s'agit de la même hauteur et la même gravité.

  Le temps influence le résultat car le programme ne calcule pas le temps de manière continue, il avance sur de peti intervalle de durée dt, et chaque fois il suppose que la vitesse est constante ce qui est complètement faux car celle-ci augmente à mesure que la hauteur diminue. Pour un jeu qui tourne à 30 ou 144 images par seconde, si dt correspond au te,ps entre deux images, il va se comporter différemment selon le nombre d'images par seconde; le même jeu qui tourne à 30 images par seconde et ensuite à 144 image par seconde ne simuleraient pas la même chute.

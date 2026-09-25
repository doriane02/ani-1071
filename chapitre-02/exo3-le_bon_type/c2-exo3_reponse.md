  donnons  pour chacune des valeurs suivantes, le type le plus adapté et justifions
1) Age: l' âge étant un entier positif généralement plus petit que 200, le type le plus adapté est unsigned char, car la plage de valeur de ce type est [0;255] et sa taille est  1 octet. les opérations refusées sont les opérations avec type incompatibles sans conversion , ainsi que les opérations avec les nombres négatifs 
   
2) le nombres d'habitants sur terre: la population est un nombre positif de l'ordre milliards ( actuellement estimé à 8,3 milliards) , le type le plus adapté pour l'exprimer est unsigned long long, car la plage de valeur de ce type est [0;18,4 trilliards] et sa taille est 8 octets.  les opérations refusées sont les opérations avec type incompatibles sans conversion , ainsi que les opérations avec les nombres négatifs 

3) Température en degré: la température est généralement un nombre décimal, donc le type le plus adapté pour la représenté est float; la taille d'un float est 4 octets et sa plage de valeur est [-3,4*10^38; 3,4 *10^38].  Les opérations refusées sont Modulo(%), le  et logique (&), et bit à bit(|), le ou logique (^); decalage de bits (<< ,>>)

4) Un caractère tapé au clavier: le type le plus adapté est char; la taille d'un char est 1 octet et ses valeurs se situent entre [-128; 127]. les opérations refusées sont les opérations avec type incompatibles sans conversion.  les opérations refusées sont les opérations avec type incompatibles sans conversion , ainsi que les opérations avec les nombres négatifs 

5) le fait qu'une porte soit ouverte: la porte peut être soit ouverte soit fermée, donc le type le plus adapté est bool; sa taille est octet et ses valeurs sont true et false. Les opérations refusées sont les opérations arithmétiques

6) le nombre de pixels d'une image 4000*3000: le nombre de pixels d'une telle image est 12 millions, le type le plus adapté est unsigned int; la taille de ce type est 4 octets et la plage de ses valeurs est [0; 4,3 milliards].  les opérations refusées sont les opérations avec type incompatibles sans conversion , ainsi que les opérations avec les nombres négatifs 

7) un solde bancaire en fcfa: le type le plus adapté est double; la taille d'un double est 8 octets et la plage de valeur est [-1,8*10^308; 1,8*10^308]. Les opérations refusées sont Modulo(%), le  et logique (&), et bit à bit(|), le ou logique (^); decalage de bits (<< ,>>)

    

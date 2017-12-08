% Criando figura
figure;

% Fase 1
% Definindo grafos
g = graph();
g = addnode(g, 3);
subplot(3,2,1);
plot(g);
title('Fase 1');

% Fase 2
g = addedge(g, 1, 2);
subplot(3,2,2);
plot(g);
title('Fase 2');

% Fase 3
g = rmedge(g, 1, 2);
g = addedge(g, 2, 3);
subplot(3,2,3);
plot(g);
title('Fase 3');

% Fase 4
g = rmedge(g, 2, 3);
g = addedge(g, 1, 3);
subplot(3,2,4);
plot(g);
title('Fase 4');

% Fase 5
g = addedge(g, 2, 3);
subplot(3,2,5);
plot(g);
title('Fase 5');

% Fase 6
g = addedge(g, 2, 1);
subplot(3,2,6);
plot(g);
title('Fase 6');

% Fase 7




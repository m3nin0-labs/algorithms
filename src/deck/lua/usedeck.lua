require("deck")

dmaster = deck();

done = decknode(1);
dtwo = decknode(2);
dthree = decknode(3);

addAtFirst(dmaster, dtwo);
addAtEnd(dmaster, done);
addAtFirst(dmaster, dthree);

-- Exibindo do início para o fim
showFromStart(dmaster);
print("---")
showFromEnd(dmaster);

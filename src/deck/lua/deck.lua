function deck(  )
    return {
        next = nil,
        previous = nil
    }
end

function decknode( value )
    return {
        value = value,
        next = nil,
        previous = nil
    }
end

function addAtFirst( deck, decknode )
    if (deck.next == nil) then
        deck.next = decknode;
        deck.previous = decknode
    else 
        decknode.next = deck.next;
        deck.next.previous = decknode;

        deck.next = decknode;
    end
end

function addAtEnd( deck, decknode )
    if (deck.previous == nil) then
        deck.next = decknode;
        deck.previous = decknode;
    else
        decknode.previous = deck.previous;
        deck.previous.next = decknode;

        deck.previous = decknode;
    end
end

function showFromStart( deck )
    if (deck == nil) then
        error( "Deck is empty!" )
    end
    el = deck.next

    while(el ~= nil) do
        print(el.value);
        el = el.next;
    end
end

function showFromEnd( deck )
    if (deck == nil) then
        error( "Deck is empty!" );
    end
    el = deck.previous;

    while(el ~= nil) do
        print(el.value);
        el = el.previous;
    end
end

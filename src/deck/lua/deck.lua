--[[
    A estratégia de implementação deste deck utiliza um nó de referência que sabe
    onde estão as posições iniciais e finais do deck, de modo que os nós iniciais e finais
    não sabem que estão nesta posição ou mesmo quem é o início ou o fim
]]

-- Funções auxiliares para a geração da documentação
function document( str )
    return function(obj) docstrings[obj] = str; return obj end
end

-- Cria uma estrutura de referência a toda estrutura do deck
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

function removeFromStart( deck )
    if (deck == nil) then
        error( "Deck is empty!" );
    end
    
    -- Configurando os elementos
    removedelement = deck.next
    
    -- Movendo as referências
    deck.next = removedelement.next;

    if (deck.next ~= nil) then
        deck.next.previous = nil;
    end

    return removedelement
end

function removeFromEnd( deck )
    if (deck == nil) then
        error( "Deck is empty!" );
    end

    -- Selecionando o elemento a ser removido
    removedelement = deck.previous;
    deck.previous = removedelement.previous;
    
    if (deck.previous ~= nil) then
        deck.previous.next = nil
    end
    return removedelement
end

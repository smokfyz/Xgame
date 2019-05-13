function setImpLevel(x, y, perm) {
    let hex = document.getElementById(x + "-" + y)
    if(perm < 10)
        hex.classList.add("hexagon-lvl-1")
    else if(perm < 20)
        hex.classList.add("hexagon-lvl-2")
    else if(perm < 30)
        hex.classList.add("hexagon-lvl-3")
    else if(perm < 40)
        hex.classList.add("hexagon-lvl-4")
    else if(perm < 50)
        hex.classList.add("hexagon-lvl-5")
    else if(perm < 60)
        hex.classList.add("hexagon-lvl-6")
}

function createField(x) {
    let field = document.getElementsByClassName("field")[0]
    for(let i = 0; i < x; i++) {
        addFieldRow(field, x, i)
    }
}

function clearField() {
    let field = document.getElementsByClassName("field")[0]

    for(let i = 0; i < field.children.length; i++) {
        for(let j = 0; j < field.children[i].children.length; j++) {
            field.children[i].children[j].classList.remove("hexagon-picked")
        }
    } 
}

function addFieldRow(field, x, y_coord) {
    let row = document.createElement("div")
    row.className = "hexagon-row"
    for(let i = 0; i < x; i++) {
        addFieldCell(row, i, y_coord)
    }
    field.appendChild(row)
}

function addFieldCell(row, x_coord, y_coord) {
    let cell = document.createElement("div")
    cell.className = "hexagon"
    cell.id = x_coord + "-" + y_coord
    cell.onclick = function() { 
            OnPickHex(x_coord, y_coord)
    }
    row.appendChild(cell)
}

function showCurrentHexInfo(permeability) {
    let el = document.getElementById("picked-hex-info-imp")
    el.textContent = "Impediment: " + permeability
}

function showCurrentSecondHexInfo(permeability) {
    let el = document.getElementById("picked-second-hex-info-imp")
    el.textContent = "Impediment: " + permeability
}

function makeReachable(x, y) {
    let hex = document.getElementById(x + "-" + y)
    hex.classList.add("hexagon-picked")
}

function setUnit(x, y) {
    let hex = document.getElementById(x + "-" + y)
    let unit = document.createElement("div")
    unit.className = "unit"
    unit.style.backgroundColor = "black";
    hex.appendChild(unit)
}

function removeUnit(x, y) {
    let hex = document.getElementById(x + "-" + y)
    hex.removeChild(hex.children[0])
}

function showUnitInfo(attack, attack_type, health, energy, health_max, energy_max) {
    let el = document.getElementById("picked-unit-info")
    if(arguments.length == 0) {
        el.classList.add("hide")
        return
    } else {
        el.classList.remove("hide")
    }    

    el.children[1].textContent = "Attack: " + attack
    el.children[2].textContent = "Attack Type: " + attack_type
    el.children[3].textContent = "Health: " + health + "/" + health_max
    el.children[4].textContent = "Energy: " + energy + "/" + energy_max
}

function nextTurn(name) {
    let el = document.getElementById("current-turn-info")
    el.textContent = "Current turn: " + name
}

function updateNumOfMoves(num) {
    let el = document.getElementById("num-of-moves-info")
    el.textContent = "Number of moves: " + num
}

/*document.addEventListener('DOMContentLoaded', function(){ 
    createField(50)
}, false)*/
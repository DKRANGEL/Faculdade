function area () {
    const altura = document.querySelector('#a').value;
    const largura = document.querySelector('#l').value;
    
    const area2 = altura * largura
    
    document.getElementById('r').innerHTML = area2
};
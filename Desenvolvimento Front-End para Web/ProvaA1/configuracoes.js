const cidadeAeroviaria = [-15.7801, -47.9292]; 

const map = L.map('map').setView(cidadeAeroviaria, 13); 

L.tileLayer('https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', {
    attribution: 'Mapa da Cidade Aeroviária com Leaflet & OpenStreetMap', 
}).addTo(map); 

L.marker(cidadeAeroviaria) 
    .addTo(map) 
    .bindPopup('<b>Rua Sem Número</b><br>Centro da Cidade Aeroviária.') 
    .openPopup(); 


"use strict";

const populateTable = (data) => {
    const table = document.getElementById("collectors")

    data.map(item => {
        const row = document.createElement("tr");

        const idColumn = document.createElement("td");
        idColumn.className = "id-column";
        idColumn.innerHTML = '<a href="collector.html">' + item.id + '</a>';
        idColumn.onclick = () =>{
            sessionStorage.setItem("collectorId", item.id)
        }
        row.appendChild(idColumn);

        const nameColumn = document.createElement("td");
        nameColumn.className = "id-column";
        nameColumn.innerHTML = item.name;
        row.appendChild(nameColumn);

        const emailColumn = document.createElement("td");
        emailColumn.className = "email-column";
        emailColumn.innerHTML = item.email;
        row.appendChild(emailColumn);

        const carColumn = document.createElement("td");
        carColumn.className = "car-column";
        carColumn.innerHTML = item.cars;
        row.appendChild(carColumn);

        table.appendChild(row)
    })
}

const fetchCollectors = async() => {

    try {
        const response = await fetch('http://localhost:5000/api/collectors/');
        const jsonData = await response.json();
        populateTable(jsonData.data)
    } catch (error) {
        console.error(error);
    }
}
fetchCollectors();
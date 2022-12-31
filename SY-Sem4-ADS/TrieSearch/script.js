import {Trie} from "./Trie.js";


onload = function(){
    if(!localStorage.getItem("myValue")){
        let arr = [
            ["geek","12345"],
            ["geeks","22222"],
            ["geeking","99999"],
            ["salok", "343434"]
        ];
        localStorage.setItem("myValue", JSON.stringify(arr));
    }
    // console.log(JSON.parse(localStorage.getItem("myValue"))[0]);

    let add_input = document.querySelector("#contact_input");
    let add_button = document.querySelector("#add")
    let delete_input = document.querySelector("#delete_input")
    let delete_button = document.querySelector("#del")
    let search_input = document.querySelector("#myInput");
    let cancel_button = document.querySelector("#cancel");
    let alert = document.getElementById('alert');
    const templates = document.getElementsByTagName('template')[0];
    const contact_item = templates.content.querySelector("div");
    let trie = new Trie( JSON.parse(localStorage.getItem("myValue")));


    add_button.onclick = function(){
        let details = add_input.value;
        details = details.split(',');
        trie.add(details[0],details[1]);
        add_input.value = "";

        localStorage.setItem("myValue", JSON.stringify([ ... JSON.parse(localStorage.getItem("myValue")), [details[0], details[1]]]));
        
        alert.innerHTML = details[0] + " added to your contact list";
        alert.style.display = "inline-block";

        setTimeout(function () {
            // Closing the alert
            alert.style.display = "none";
        }, 3000);
    }

    cancel_button.onclick = function(){
        search_input.value = "";
    }

    delete_button.onclick = function(){
        trie.delete(delete_input.value);

        localStorage.setItem("myValue", JSON.stringify( JSON.parse(localStorage.getItem("myValue")).filter(arr => arr[0]!== delete_input.value ) ));

        alert.innerHTML = delete_input.value + " deleted from your contact list";
        alert.style.display = "inline-block";

        setTimeout(function () {
            // Closing the alert
            alert.style.display = "none";
        }, 3000);
    }
    
    let autocomplete = (inp)=>{
        // inp.input = "";
        
        inp.addEventListener("input",function(e){
            closeAllLists();

            let a = document.createElement("DIV");
            a.setAttribute("id", this.id + "autocomplete-list");
            a.setAttribute("class", "autocomplete-items list-group text-left");
            this.parentNode.appendChild(a);

            let res = [];
            trie.find(this.value,res);
            // console.log(res);
            for(let i=0;i<res.length;i++){
                let item = contact_item.cloneNode(true);
                item.querySelector('#Name').innerText = res[i][0];
                item.querySelector('#Number').innerHTML = "<strong>" + res[i][1] +
                                                                "</strong>";
                item.number = res[i][1];
    
                // console.log(item);
                a.appendChild(item);
                
            }
        })



        let closeAllLists = (elmnt) => {
            /*close all autocomplete lists in the document, except the one passed as an argument:*/
            const x = document.getElementsByClassName("autocomplete-items");
            for (let i = 0; i < x.length; i++) {
                if (elmnt !== x[i] && elmnt !== inp) {
                    x[i].parentNode.removeChild(x[i]);
                }
            }
        };

        document.addEventListener("click", function (e) {
            closeAllLists(e.target);
        });

    }
    
    
    autocomplete(document.getElementById("myInput"));
    
            
            
            

}
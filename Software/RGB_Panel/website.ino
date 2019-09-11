const char MAIN_page[] PROGMEM = R"=====(
<html>
<head>
    <style>
        h1 {
            text-align: center;

            /*display: inline-block;*/
            font-family: Consolas;
            text-decoration: none;
            margin: 2px 0;
            padding: 0.5em 1em;
            color: #000000;
        }
        #Text {
            font-family: Consolas;
            font-size: large;
        }
        #BTN_Rot {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #ff6666;
        }
        #BTN_Orange {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #ffa666;
        }
        #BTN_Gelb {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #ffe866;
        }
        #BTN_Hellgrün {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #d4ff66;
        }
        #BTN_Grün {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #70ff66;
        }
        #BTN_Türkis {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #66ffbd;
        }
        #BTN_Hellblau {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #66bfff;
        }
        #BTN_Blau {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #667dff;
        }
        #BTN_Violett {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #9166ff;
        }
        #BTN_Pink {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #ff66eb;
        }
        #BTN_Weiss {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #000000;
            background-color: #d9d9d9;
        }
        #BTN_Aus {
            display: inline-block;
            text-align: center;
            text-decoration: none;
            margin: 2px 0;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #ffffff;
            background-color: #4d4d4d;
        }
        #rectangle {
            margin: 0 auto;
            border-radius: 10px;
            width: 365px;
            height: auto;
            background-color: #9b9b9b;
            padding-bottom: 50px;
        }
        #rectangle_data {
            margin: 0 auto;
            width: 335px;
            height: auto;
            background-color: #9b9b9b;
            padding-bottom: 50px;
        }
        #Colorviewer {
            width: 120px;
            height: 18px;
            display: inline-block;
            text-align: center;
            text-decoration: none;
            border: solid 1px transparent;
            border-radius: 4px;
            padding: 0.5em 1em;
            color: #ffffff;
            background-color: #000000;
        }
        body {
            margin: 0 auto;
            /*width: 400px;*/
            height: 100%;
            background-color: #E3E3E3;
            padding-bottom: 5px;
            text-align: justify;
            /*color: #E3E3E3;*/
        }
        .slider_red {
            -webkit-appearance: none;
            border-radius: 5px;
            width: 100%;
            height: 25px;
            background: #d3d3d3;
            outline: none;
            opacity: 0.7;
            -webkit-transition: .2s;
            transition: opacity .2s;
        }

        .slider_red:hover {
            opacity: 1;
        }

        .slider_red::-webkit-slider-thumb {
            -webkit-appearance: none;
            appearance: none;
            border-radius: 5px;
            width: 25px;
            height: 25px;
            background: #ff0000;
            cursor: pointer;
        }

        .slider_red::-moz-range-thumb {
            width: 25px;
            height: 25px;
            background: #4CAF50;
            cursor: pointer;
        }

        .slider_Green {
            -webkit-appearance: none;
            width: 100%;
            border-radius: 5px;
            height: 25px;
            background: #d3d3d3;
            outline: none;
            opacity: 0.7;
            -webkit-transition: .2s;
            transition: opacity .2s;
        }

        .slider_Green:hover {
            opacity: 1;
        }

        .slider_Green::-webkit-slider-thumb {
            -webkit-appearance: none;
            border-radius: 5px;
            appearance: none;
            width: 25px;
            height: 25px;
            background: #0a9200;
            cursor: pointer;
        }

        .slider_Green::-moz-range-thumb {
            width: 25px;
            height: 25px;
            background: #4CAF50;
            cursor: pointer;
        }

        .slider_Blue {
            -webkit-appearance: none;
            width: 100%;
            border-radius: 5px;
            height: 25px;
            background: #d3d3d3;
            outline: none;
            opacity: 0.7;
            -webkit-transition: .2s;
            transition: opacity .2s;
        }

        .slider_Blue:hover {
            opacity: 1;
        }

        .slider_Blue::-webkit-slider-thumb {
            -webkit-appearance: none;
            appearance: none;
            border-radius: 5px;
            width: 25px;
            height: 25px;
            background: #0026ff;
            cursor: pointer;
        }

        .slider_Blue::-moz-range-thumb {
            width: 25px;
            height: 25px;
            background: #4CAF50;
            cursor: pointer;
        }
    </style>

    <title>Farbauswahl</title>
    
    
</head>
<body>
    <meta name="viewport" content="width = device-width, initial-scale=1.0, user-scalable=no">
    <div id="rectangle">
        <h1>Farbauswahl:</h1>
        <div id="rectangle_data">
            <p id="Text">Aktuelle Farbe:</p>
            <a id="Colorviewer"></a>





            <p id="Text">Farben ausw&aumlhlen:</p>
            <a><button id="BTN_Rot" , onclick="Funktion('BTN_Rot')">Rot</button></a>
            <a><button id="BTN_Orange" , onclick="Funktion('BTN_Orange')">Orange</button></a>
            <a><button id="BTN_Gelb" , onclick="Funktion('BTN_Gelb')">Gelb</button></a>
            <a><button id="BTN_Hellgrün" , onclick="Funktion('BTN_Hellgrün')">Hellgr&uumln</button></a>
            <a><button id="BTN_Grün" , onclick="Funktion('BTN_Grün')">Gr&uumln</button></a>
            <a><button id="BTN_Türkis" , onclick="Funktion('BTN_Türkis')">T&uumlrkis</button></a>
            <a><button id="BTN_Hellblau" , onclick="Funktion('BTN_Hellblau')">Hellblau</button></a>
            <a><button id="BTN_Blau" , onclick="Funktion('BTN_Blau')">Blau</button></a>
            <a><button id="BTN_Violett" , onclick="Funktion('BTN_Violett')">Violett</button></a>
            <a><button id="BTN_Pink" , onclick="Funktion('BTN_Pink')">Pink</button></a>
            <a><button id="BTN_Weiss" , onclick="Funktion('BTN_Weiss')">Weiss</button></a>
            <a><button id="BTN_Aus" , onclick="Funktion('BTN_Aus')">Aus</button></a>

            <br />
            <p id="Text"> Farben mischen: </p>
            <input type="range" min="0" max="255" value="0" class="slider_red" onchange=" Slider_bewegt()" id="Slider_red_ID">
            <input type="range" min="0" max="255" value="0" class="slider_Green" onchange=" Slider_bewegt()" id="Slider_green_ID">
            <input type="range" min="0" max="255" value="0" class="slider_Blue" onchange=" Slider_bewegt()" id="Slider_blue_ID">
            <br />



        </div>
    </div>
    <script>

        function Slider_bewegt() {
            var r = document.getElementById("Slider_red_ID").value;
            var g = document.getElementById("Slider_green_ID").value;
            var b = document.getElementById("Slider_blue_ID").value;
            document.getElementById("Colorviewer").style.backgroundColor = "#" + dh(r) + dh(g) + dh(b);
            SendOverWebsocket();
        }
        function dh(d) { // decimal to hex conversion
            var hex = Number(d).toString(16);
            if (hex.length < 2) hex = "0" + hex;
            return hex;
        }
        function Funktion(ID) {

           


            document.getElementById("BTN_Rot").style.backgroundColor = "#ff6666";
            document.getElementById("BTN_Orange").style.backgroundColor = "#ffa666";
            document.getElementById("BTN_Gelb").style.backgroundColor = "#ffe866";
            document.getElementById("BTN_Hellgrün").style.backgroundColor = "#ddff66";
            document.getElementById("BTN_Grün").style.backgroundColor = "#70ff66";
            document.getElementById("BTN_Türkis").style.backgroundColor = "#66ffbd";
            document.getElementById("BTN_Hellblau").style.backgroundColor = "#66bfff";
            document.getElementById("BTN_Blau").style.backgroundColor = "#667dff";
            document.getElementById("BTN_Violett").style.backgroundColor = "#9166ff";
            document.getElementById("BTN_Pink").style.backgroundColor = "#ff66eb";
            document.getElementById("BTN_Weiss").style.backgroundColor = "#d9d9d9";
            document.getElementById("BTN_Aus").style.backgroundColor = "#4d4d4d";
            

            
            switch (ID) {
                case 'BTN_Rot':
                    document.getElementById(ID).style.backgroundColor = "#ff0000";
                    document.getElementById("Colorviewer").style.backgroundColor = "#ff0000";
                    document.getElementById("Slider_red_ID").value      = 255;
                    document.getElementById("Slider_green_ID").value    = 0;
                    document.getElementById("Slider_blue_ID").value     = 0;
                    break;
                case 'BTN_Orange':
                    document.getElementById(ID).style.backgroundColor = "#ff6a00";
                    document.getElementById("Colorviewer").style.backgroundColor = "#ff6a00";
                    document.getElementById("Slider_red_ID").value = 255;
                    document.getElementById("Slider_green_ID").value = 106;
                    document.getElementById("Slider_blue_ID").value = 0;
                    break;
                case 'BTN_Gelb':
                    document.getElementById(ID).style.backgroundColor = "#ffd800";
                    document.getElementById("Colorviewer").style.backgroundColor = "#ffd800";
                    document.getElementById("Slider_red_ID").value = 255;
                    document.getElementById("Slider_green_ID").value = 216;
                    document.getElementById("Slider_blue_ID").value = 0;
                    break;
                case 'BTN_Hellgrün':
                    document.getElementById(ID).style.backgroundColor = "#b6ff00";
                    document.getElementById("Colorviewer").style.backgroundColor = "#b6ff00";
                    document.getElementById("Slider_red_ID").value = 182; 
                    document.getElementById("Slider_green_ID").value = 255;
                    document.getElementById("Slider_blue_ID").value = 0;
                    break;
                case 'BTN_Grün':
                    document.getElementById(ID).style.backgroundColor = "#0a9200";
                    document.getElementById("Colorviewer").style.backgroundColor = "#0a9200";
                    document.getElementById("Slider_red_ID").value = 10;
                    document.getElementById("Slider_green_ID").value = 146;
                    document.getElementById("Slider_blue_ID").value = 0;
                    break;
                case 'BTN_Türkis':
                    document.getElementById(ID).style.backgroundColor = "#00ff90";
                    document.getElementById("Colorviewer").style.backgroundColor = "#00ff90";
                    document.getElementById("Slider_red_ID").value = 0;
                    document.getElementById("Slider_green_ID").value = 255;
                    document.getElementById("Slider_blue_ID").value = 144;
                    break;
                case 'BTN_Hellblau':
                    document.getElementById(ID).style.backgroundColor = "#0094ff";
                    document.getElementById("Colorviewer").style.backgroundColor = "#0094ff";
                    document.getElementById("Slider_red_ID").value = 0;
                    document.getElementById("Slider_green_ID").value = 148;
                    document.getElementById("Slider_blue_ID").value = 255;
                    break;
                case 'BTN_Blau':
                    document.getElementById(ID).style.backgroundColor = "#0026ff";
                    document.getElementById("Colorviewer").style.backgroundColor = "#0026ff";
                    document.getElementById("Slider_red_ID").value = 0;
                    document.getElementById("Slider_green_ID").value = 38;
                    document.getElementById("Slider_blue_ID").value = 255;
                    break;
                case 'BTN_Violett':
                    document.getElementById(ID).style.backgroundColor = "#4800ff";
                    document.getElementById("Colorviewer").style.backgroundColor = "#4800ff";
                    document.getElementById("Slider_red_ID").value = 72;
                    document.getElementById("Slider_green_ID").value = 0;
                    document.getElementById("Slider_blue_ID").value = 255;
                    break;
                case 'BTN_Pink':
                    document.getElementById(ID).style.backgroundColor = "#ff00dc";
                    document.getElementById("Colorviewer").style.backgroundColor = "#ff00dc";
                    document.getElementById("Slider_red_ID").value = 255;
                    document.getElementById("Slider_green_ID").value = 0;
                    document.getElementById("Slider_blue_ID").value = 220;
                    break;
                case 'BTN_Weiss':
                    document.getElementById(ID).style.backgroundColor = "#ffffff";
                    document.getElementById("Colorviewer").style.backgroundColor = "#ffffff";
                    document.getElementById("Slider_red_ID").value = 255;
                    document.getElementById("Slider_green_ID").value = 255;
                    document.getElementById("Slider_blue_ID").value = 255;
                    break;
                case 'BTN_Aus':
                    document.getElementById(ID).style.backgroundColor = "#000000";
                    document.getElementById("Colorviewer").style.backgroundColor = "#000000";
                    document.getElementById("Slider_red_ID").value = 0;
                    document.getElementById("Slider_green_ID").value = 0;
                    document.getElementById("Slider_blue_ID").value = 0;
                    break;
            }
            SendOverWebsocket();

        }

        var Socket = new WebSocket('ws://' + window.location.hostname + ':81');
        var lastSend = 0;
        function SendOverWebsocket() {
            var now = (new Date).getTime();
            var r = document.getElementById("Slider_red_ID").value;
            var g = document.getElementById("Slider_green_ID").value;
            var b = document.getElementById("Slider_blue_ID").value;
             

            if (lastSend > now - 20) return;
            lastSend = now;
            /*var Senden = ("0x" + dh(r) + dh(g) + dh(b));
            Socket.send(Senden);*/
           Socket.send(r);
            Socket.send(g);
            Socket.send(b);
        }
        
    </script>
    

</body>

</html>)=====";
String website = MAIN_page;

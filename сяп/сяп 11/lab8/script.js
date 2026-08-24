    //1
    $("#ex1").mouseover(function(){
        $("#ex1").css("color", "red");
    });
    //2
    $("#ex2").click(function(){
        $("#ex2").css("font-size", "100px");
    });
    //3
    $("img").click(function() {
    $("#image").attr("src", "gif.gif");
     });
     
    //4
    function changeText() {
        let text = $('#text');
        text.html("<img src=22.webp>");
    }
    
    //5
    function changeImage() {
        var image = $('#image1'); 
        image.mouseover(function() {
            image.css('width', '400px');
        });
        image.mouseout(function() {
            image.css('width', '200px');
        });
    }
    //6
    function changeStyle() {
        let paragraph = $('#paragraph');
        paragraph.css('border', 'solid black');
        paragraph.css('padding', '10px');
        paragraph.css('background-color', 'yellow');
    }

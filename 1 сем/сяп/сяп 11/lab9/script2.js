Pagego();
Pagesq();

$("#text").dblclick(Pageclick);
$("#page1").dblclick(Pageclick);

function Pageclick(cho) {
    let choise =  true

    let target = cho.target
    $(document).on("mousemove", (cho) => {
        if (choise) {
            $(target).css("left", cho.clientX + "px");
            $(target).css("top", cho.clientY + "px");
        }
    });

    $(document).on("click", () => {
        choise = false;
    });
}


function Pagego() {
    let targ = $("#page2");

    let step = -1;
    let posit = 0;

    setInterval(() => {
        if (posit === screen.width - targ.width() || posit === 0) {
            step = -step;
        }
        posit += step;
        targ.css("left", posit + "px");
    }, 1);
}


function Pagesq() {
    let ang = 0;
    let tar = $("#page3");

    setInterval(circle, 1);

    function circle() {
        let radius = 300;
        let centerX = screen.width / 2 - tar.width() / 2;
        let centerY = screen.height / 2 - tar.height() / 2;
        ang += 2 * Math.PI / 180;

        tar.css("left", centerX + radius * Math.sin(ang) + "px");
        tar.css("top", centerY + radius * Math.cos(ang) + "px");
    }
}


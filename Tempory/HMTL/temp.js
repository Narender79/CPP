//onchnage-input field(capture the key value)
//onclick-button
//onmouseover- on hovering
//onmousout- on removing hover from element
//onkeydown- on keyword type
//onload- wehn the page is loaded

const btn= document.getElementById("button")
// 1.event type
// 2.a function
btn.addEventListener("click" ,() => {
    console.log("it ran")
    const bgColor = "red"
document.body.style.backgroundColor = bgColor
})

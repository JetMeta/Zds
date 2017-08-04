﻿Axis-Aligned Bounding BoxEdit

One of the simpler forms of collision detection is between two rectangles that are axis aligned — meaning no rotation. The algorithm works by ensuring there is no gap between any of the 4 sides of the rectangles. Any gap means a collision does not exist.

var rect1 = {x: 5, y: 5, width: 50, height: 50}
var rect2 = {x: 20, y: 10, width: 10, height: 10}

// mdn 
if (
	rect1.x < rect2.x + rect2.width &&
	rect1.x + rect1.width > rect2.x &&
	rect1.y < rect2.y + rect2.height &&
	rect1.height + rect1.y > rect2.y
	)
{
    // collision detected!
}

// filling in the values =>

if (5 < 30 &&
        55 > 20 &&
        5 < 20 &&
        55 > 10)
{
    // collision detected!
}

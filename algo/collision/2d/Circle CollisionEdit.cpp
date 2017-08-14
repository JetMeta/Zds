﻿Circle CollisionEdit

Another simple shape for collision detection is between two circles. This algorithm works by taking the centre points of the two circles and ensuring the distance between the centre points are less than the two radii added together.

var circle1 = {radius: 20, x: 5, y: 5};
var circle2 = {radius: 12, x: 10, y: 5};

var dx = circle1.x - circle2.x;
var dy = circle1.y - circle2.y;
var distance = Math.sqrt(dx * dx + dy * dy);

if (distance < circle1.radius + circle2.radius) {
    // collision detected!
}
type t;

let createWithByteLength: int => t;

let byteLength: t => int;

let isView: t => bool;

let slice: (t, int, int) => t;

let sliceRest: (t, int) => t;
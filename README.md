# bs-typed-array

Fairly similar binding to the TypedArray classes.

See [BsTypedArray_TypedArray.rei](https://github.com/tomp4l/bs-typed-array/blob/master/src/BsTypedArray_TypedArray.rei) for available bindings.

See [the MDN web docs](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/TypedArray) for the javascript interfaces these are based off. The interfaces are very similar to standard arrays.


## Installation

```sh
npm install --save bs-typed-array
```

Then add `bs-typed-array` to `bs-dependencies` in your `bsconfig.json`:
```js
{
  ...
  "bs-dependencies": ["bs-typed-array", ...]
}
```


## Example

```reason

open BsTypedArray;

let array = TypedArray.from(TypedArray.Uint16, [|1, 3, 5, 6|]);

let copy = TypedArray.copyFromTypedArray(TypedArray.Int16, array);

let mapped = TypedArray.map(copy, (. a, _index) => - a);

Js.log(array);
Js.log(copy);
Js.log(mapped);
/**
 * Uint16Array [ 1, 3, 5, 6 ]
 * Int16Array [ 1, 3, 5, 6 ]
 * Int16Array [ -1, -3, -5, -6 ]
 */;

 ```
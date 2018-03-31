# bs-typed-array

Fairly similar binding to the TypedArray classes.

See BsTypedArray_TypedArray.rei for available bindings.

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
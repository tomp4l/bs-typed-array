type t('ocamlType, 'elementType);

type typedArray('a, 'b) = t('a, 'b);

/**
 * Static interface of typed array, can use GADT to lookup correct type
 * Provides constructors mainly
 */
module type TypedArray = {
  type ocamlType;
  type element;
  type t = typedArray(ocamlType, element);
  let from: array(ocamlType) => t;
  let createWithLength: int => t;
  let copyFromTypedArray: typedArray('a, 'b) => t;
  let createFromArrayBuffer: (BsTypedArray_ArrayBuffer.t, int, int) => t;
  let bytesPerElement: int;
  let name: string;
};

module Int8Array: TypedArray with type ocamlType = int;

module Uint8Array: TypedArray with type ocamlType = int;

module Uint8ClampedArray: TypedArray with type ocamlType = int;

module Int16Array: TypedArray with type ocamlType = int;

module Uint16Array: TypedArray with type ocamlType = int;

module Int32Array: TypedArray with type ocamlType = int;

module Uint32Array: TypedArray with type ocamlType = int;

module Float32Array: TypedArray with type ocamlType = float;

module Float64Array: TypedArray with type ocamlType = float;

type kind('ocamlType, 'jsType) =
  | Int8: kind(Int8Array.ocamlType, Int8Array.element)
  | Uint8: kind(Uint8Array.ocamlType, Uint8Array.element)
  | Uint8Clamped: kind(Uint8ClampedArray.ocamlType, Uint8ClampedArray.element)
  | Int16: kind(Int16Array.ocamlType, Int16Array.element)
  | Uint16: kind(Uint16Array.ocamlType, Uint16Array.element)
  | Int32: kind(Int32Array.ocamlType, Int32Array.element)
  | Uint32: kind(Uint32Array.ocamlType, Uint32Array.element)
  | Float32: kind(Float32Array.ocamlType, Float32Array.element)
  | Float64: kind(Float64Array.ocamlType, Float64Array.element);

/**
 * TypedArray.from([...])
 * This method also supports other array like types there isn't a great
 * way I can think to bind to this more generally without loosing safety
 */
let from: (kind('a, 'b), array('a)) => t('a, 'b);

/**
 * new TypedArray(byteLength)
 */
let createWithLength: (kind('a, 'b), int) => t('a, 'b);

/**
 * new TypedArray(typeArray)
 * Copies the existing array
 */
let copyFromTypedArray: (kind('a, 'b), t('c, 'd)) => t('a, 'b);

/**
 * new TypedArray(arrayBuffer, byteOffset, length)
 * Creates a view around existing buffer
 */
let createFromArrayBuffer:
  (kind('a, 'b), BsTypedArray_ArrayBuffer.t, int, int) => t('a, 'b);

/**
 * typedarray.buffer
 * Gets underlying buffer
 */
let getBuffer: t('a, 'b) => BsTypedArray_ArrayBuffer.t;

/**
 * typedarray.length
 */
let getLength: t('a, 'b) => int;

/**
 * typedarray.slice()
 */
let copy: t('a, 'b) => t('a, 'b);

/**
 * typedarray.copyWithin(target, start, end)
 */
let copyWithin: (t('a, 'b), int, int, int) => t('a, 'b);

/**
 * typedarray.copyWithin(target, start)
 */
let copyWithinRest: (t('a, 'b), int, int) => t('a, 'b);

/**
 * typedarray.every(callback)
 */
let every: (t('a, 'b), (. 'a, int) => bool) => bool;

/**
 * typedarray.every(callback)
 */
let fill: (t('a, 'b), 'a) => t('a, 'b);

/**
 * typedarray.filter(callback)
 */
let filter: (t('a, 'b), (. 'a, int) => bool) => t('a, 'b);

/**
 * typedarray.find(callback)
 */
let find: (t('a, 'b), (. 'a, int) => bool) => option('a);

/**
 * typedarray.forEach(callback)
 */
let forEach: (t('a, 'b), (. 'a, int) => unit) => unit;

/**
 * typedarray[index]
 * Get method for access
 */
let get: (t('a, 'b), int) => option('a);

/**
 * typedarray.includes(searchElement);
 */
let includes: (t('a, 'b), 'a) => bool;

/**
 * typedarray.includes(searchElement, fromIndex);
 */
let includesFrom: (t('a, 'b), 'a, int) => bool;

/**
 * typedarray.indexOf(searchElement);
 */
let indexOf: (t('a, 'b), 'a) => int;

/**
 * typedarray.indexOf(searchElement, fromIndex);
 */
let indexOfFrom: (t('a, 'b), 'a, int) => int;

/**
 * typedarray.join(separator);
 */
let join: (t('a, 'b), string) => string;

/**
 * typedarray.lastIndexOf(searchElement);
 */
let lastIndexOf: (t('a, 'b), 'a) => int;

/**
 * typedarray.lastIndexOf(searchElement, fromIndex);
 */
let lastIndexOfFrom: (t('a, 'b), 'a, int) => int;

/**
 * typedarray.map(callback)
 * Restricted to same type
 */
let map: (t('a, 'b), (. 'a, int) => 'a) => t('a, 'b);

/**
 * typedarray.reduce(callback, initialValue)
 */
let reduce: (t('a, 'b), (. 'r, 'a) => 'r, 'r) => 'r;

/**
 * typedarray.reduceRight(callback, initialValue)
 */
let reduceRight: (t('a, 'b), (. 'r, 'a) => 'r, 'r) => 'r;

/**
 * typedarray.reverse()
 */
let reverseInPlace: t('a, 'b) => t('a, 'b);

/**
 * typedarray.set(array)
 */
let set: (t('a, 'b), array('a)) => t('a, 'b);

/**
 * typedarray.set(array, offset)
 */
let setAt: (t('a, 'b), array('a), int) => t('a, 'b);

/**
 * typedarray.set(typedarray)
 */
let setFromTyped: (t('a, 'b), t('c, 'd)) => t('a, 'b);

/**
 * typedarray.set(typedarray, offset)
 */
let setFromTypedAt: (t('a, 'b), t('c, 'd), int) => t('a, 'b);

/**F
 * typedarray[index] = item
 */
let setOneAt: (t('a, 'b), int, 'a) => t('a, 'b);

/**
 * typedarray.slice(begin, end)
 *
 * See copy for slice with no args
 */
let slice: (t('a, 'b), int, int) => t('a, 'b);

/**
 * typedarray.slice(begin)
 */
let sliceRest: (t('a, 'b), int) => t('a, 'b);

/**
 * typedarray.some(callback)
 */
let some: (t('a, 'b), (. 'a, int) => bool) => bool;

/**
 * typedarray.sort()
 */
let sortInPlace: t('a, 'b) => t('a, 'b);

/**
 * typedarray.sort(callback)
 */
let sortCustomInPlace: (t('a, 'b), (. 'a, 'a) => int) => t('a, 'b);
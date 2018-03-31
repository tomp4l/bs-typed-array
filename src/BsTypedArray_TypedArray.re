type t('ocamlType, 'jsType);

type typedArray('a, 'b) = t('a, 'b);

module ArrayBuffer = BsTypedArray_ArrayBuffer;

module type TypedArray = {
  type ocamlType;
  type element;
  type t = typedArray(ocamlType, element);
  let from: array(ocamlType) => t;
  let createWithLength: int => t;
  let copyFromTypedArray: typedArray('a, 'b) => t;
  let createFromArrayBuffer: (ArrayBuffer.t, int, int) => t;
  let bytesPerElement: int;
  let name: string;
};

module Int8Array = {
  type ocamlType = int;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Int8Array"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Int8Array";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t = "Int8Array";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Int8Array";
  [@bs.val] [@bs.scope "Int8Array"] external name : string = "";
  [@bs.val] [@bs.scope "Int8Array"] external bytesPerElement : int = "";
};

module Uint8Array = {
  type ocamlType = int;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Uint8Array"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Uint8Array";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t = "Uint8Array";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Uint8Array";
  [@bs.val] [@bs.scope "Uint8Array"] external name : string = "";
  [@bs.val] [@bs.scope "Uint8Array"] external bytesPerElement : int = "";
};

module Uint8ClampedArray = {
  type ocamlType = int;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Uint8ClampedArray"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Uint8ClampedArray";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t =
    "Uint8ClampedArray";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Uint8ClampedArray";
  [@bs.val] [@bs.scope "Uint8ClampedArray"] external name : string = "";
  [@bs.val] [@bs.scope "Uint8ClampedArray"]
  external bytesPerElement : int = "";
};

module Int16Array = {
  type ocamlType = int;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Int16Array"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Int16Array";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t = "Int16Array";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Int16Array";
  [@bs.val] [@bs.scope "Int16Array"] external name : string = "";
  [@bs.val] [@bs.scope "Int16Array"] external bytesPerElement : int = "";
};

module Uint16Array = {
  type ocamlType = int;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Uint16Array"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Uint16Array";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t = "Uint16Array";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Uint16Array";
  [@bs.val] [@bs.scope "Uint16Array"] external name : string = "";
  [@bs.val] [@bs.scope "Uint16Array"] external bytesPerElement : int = "";
};

module Int32Array = {
  type ocamlType = int;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Int32Array"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Int32Array";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t = "Int32Array";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Int32Array";
  [@bs.val] [@bs.scope "Int32Array"] external name : string = "";
  [@bs.val] [@bs.scope "Int32Array"] external bytesPerElement : int = "";
};

module Uint32Array = {
  type ocamlType = int;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Uint32Array"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Uint32Array";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t = "Uint32Array";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Uint32Array";
  [@bs.val] [@bs.scope "Uint32Array"] external name : string = "";
  [@bs.val] [@bs.scope "Uint32Array"] external bytesPerElement : int = "";
};

module Float32Array = {
  type ocamlType = float;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Float32Array"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Float32Array";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t = "Float32Array";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Float32Array";
  [@bs.val] [@bs.scope "Float32Array"] external name : string = "";
  [@bs.val] [@bs.scope "Float32Array"] external bytesPerElement : int = "";
};

module Float64Array = {
  type ocamlType = float;
  type element;
  type t = typedArray(ocamlType, element);
  [@bs.val] [@bs.scope "Float64Array"]
  external from : array(ocamlType) => t = "";
  [@bs.new] external createWithLength : int => t = "Float64Array";
  [@bs.new]
  external copyFromTypedArray : typedArray('a, 'b) => t = "Float64Array";
  [@bs.new]
  external createFromArrayBuffer : (ArrayBuffer.t, int, int) => t =
    "Float64Array";
  [@bs.val] [@bs.scope "Float64Array"] external name : string = "";
  [@bs.val] [@bs.scope "Float64Array"] external bytesPerElement : int = "";
};

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

let from =
    (
      type ocamlType,
      type e,
      kind: kind(ocamlType, e),
      arr: array(ocamlType),
    )
    : t(ocamlType, e) =>
  switch (kind) {
  | Int8 => Int8Array.from(arr)
  | Uint8 => Uint8Array.from(arr)
  | Uint8Clamped => Uint8ClampedArray.from(arr)
  | Int16 => Int16Array.from(arr)
  | Uint16 => Uint16Array.from(arr)
  | Int32 => Int32Array.from(arr)
  | Uint32 => Uint32Array.from(arr)
  | Float32 => Float32Array.from(arr)
  | Float64 => Float64Array.from(arr)
  };

let createFromArrayBuffer =
    (
      type ocamlType,
      type e,
      kind: kind(ocamlType, e),
      buffer,
      offset,
      length,
    )
    : t(ocamlType, e) =>
  switch (kind) {
  | Int8 => Int8Array.createFromArrayBuffer(buffer, offset, length)
  | Uint8 => Uint8Array.createFromArrayBuffer(buffer, offset, length)
  | Uint8Clamped =>
    Uint8ClampedArray.createFromArrayBuffer(buffer, offset, length)
  | Int16 => Int16Array.createFromArrayBuffer(buffer, offset, length)
  | Uint16 => Uint16Array.createFromArrayBuffer(buffer, offset, length)
  | Int32 => Int32Array.createFromArrayBuffer(buffer, offset, length)
  | Uint32 => Uint32Array.createFromArrayBuffer(buffer, offset, length)
  | Float32 => Float32Array.createFromArrayBuffer(buffer, offset, length)
  | Float64 => Float64Array.createFromArrayBuffer(buffer, offset, length)
  };

let copyFromTypedArray =
    (type ocamlType, type e, kind: kind(ocamlType, e), typed)
    : t(ocamlType, e) =>
  switch (kind) {
  | Int8 => Int8Array.copyFromTypedArray(typed)
  | Uint8 => Uint8Array.copyFromTypedArray(typed)
  | Uint8Clamped => Uint8ClampedArray.copyFromTypedArray(typed)
  | Int16 => Int16Array.copyFromTypedArray(typed)
  | Uint16 => Uint16Array.copyFromTypedArray(typed)
  | Int32 => Int32Array.copyFromTypedArray(typed)
  | Uint32 => Uint32Array.copyFromTypedArray(typed)
  | Float32 => Float32Array.copyFromTypedArray(typed)
  | Float64 => Float64Array.copyFromTypedArray(typed)
  };

let createWithLength =
    (type ocamlType, type e, kind: kind(ocamlType, e), length)
    : t(ocamlType, e) =>
  switch (kind) {
  | Int8 => Int8Array.createWithLength(length)
  | Uint8 => Uint8Array.createWithLength(length)
  | Uint8Clamped => Uint8ClampedArray.createWithLength(length)
  | Int16 => Int16Array.createWithLength(length)
  | Uint16 => Uint16Array.createWithLength(length)
  | Int32 => Int32Array.createWithLength(length)
  | Uint32 => Uint32Array.createWithLength(length)
  | Float32 => Float32Array.createWithLength(length)
  | Float64 => Float64Array.createWithLength(length)
  };

type callback('a, 'r) = (. 'a, int) => 'r;

type reduceCallback('a, 'r) = (. 'r, 'a) => 'r;

[@bs.get] external getBuffer : t('a, 'b) => ArrayBuffer.t = "buffer";

[@bs.get] external getLength : t('a, 'b) => int = "length";

[@bs.send] external _copy : (t('a, 'b), unit) => t('a, 'b) = "splice";

let copy = a => _copy(a, ());

[@bs.send]
external copyWithin : (t('a, 'b), int, int, int) => t('a, 'b) = "";

[@bs.send]
external copyWithinRest : (t('a, 'b), int, int) => t('a, 'b) = "copyWithin";

[@bs.send] external every : (t('a, 'b), callback('a, bool)) => bool = "";

[@bs.send] external fill : (t('a, 'b), 'a) => t('a, 'b) = "";

[@bs.send]
external filter : (t('a, 'b), callback('a, bool)) => t('a, 'b) = "";

[@bs.send] [@bs.return nullable]
external find : (t('a, 'b), callback('a, bool)) => option('a) = "";

[@bs.send] external forEach : (t('a, 'b), callback('a, unit)) => unit = "";

[@bs.get_index] [@bs.return nullable]
external get : (t('a, 'b), int) => option('a) = "";

[@bs.send] external includes : (t('a, 'b), 'a) => bool = "";

[@bs.send] external includesFrom : (t('a, 'b), 'a, int) => bool = "includes";

[@bs.send] external indexOf : (t('a, 'b), 'a) => int = "";

[@bs.send] external indexOfFrom : (t('a, 'b), 'a, int) => int = "indexOf";

[@bs.send] external join : (t('a, 'b), string) => string = "";

[@bs.send] external lastIndexOf : (t('a, 'b), 'a) => int = "";

[@bs.send]
external lastIndexOfFrom : (t('a, 'b), 'a, int) => int = "lastIndexOf";

[@bs.send] external map : (t('a, 'b), callback('a, 'a)) => t('a, 'b) = "";

[@bs.send]
external reduce : (t('a, 'b), reduceCallback('a, 'r), 'r) => 'r = "";

[@bs.send]
external reduceRight : (t('a, 'b), reduceCallback('a, 'r), 'r) => 'r = "";

[@bs.send] external _reverse : (t('a, 'b), unit) => t('a, 'b) = "reverse";

let reverseInPlace = a => _reverse(a, ());

[@bs.send] external set : (t('a, 'b), array('a)) => t('a, 'b) = "";

[@bs.send]
external setFromTyped : (t('a, 'b), t('a, 'b)) => t('a, 'b) = "set";

[@bs.send] external slice : (t('a, 'b), int, int) => t('a, 'b) = "";

[@bs.send] external sliceRest : (t('a, 'b), int) => t('a, 'b) = "slice";

[@bs.send] external some : (t('a, 'b), callback('a, bool)) => bool = "";

[@bs.send] external _sort : (t('a, 'b), unit) => t('a, 'b) = "sort";

let sortInPlace = a => _sort(a, ());

[@bs.send]
external sortCustomInPlace : (t('a, 'b), (. 'a, 'a) => int) => t('a, 'b) =
  "sort";
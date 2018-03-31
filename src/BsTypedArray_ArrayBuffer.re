type t;

[@bs.new] external createWithByteLength : int => t = "ArrayBuffer";

[@bs.get] external byteLength : t => int = "";

[@bs.val] [@bs.scope "ArrayBuffer"] external isView : t => bool = "";

[@bs.send] external slice : (t, int, int) => t = "";

[@bs.send] external sliceRest : (t, int) => t = "slice";
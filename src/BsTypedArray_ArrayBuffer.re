type t;

[@bs.new] external createWithByteLength : int => t = "ArrayBuffer";

[@bs.get] external byteLength : t => int = "byteLength";

[@bs.val] [@bs.scope "ArrayBuffer"] external isView : t => bool = "isView";

[@bs.send] external slice : (t, int, int) => t = "slice";

[@bs.send] external sliceRest : (t, int) => t = "slice";

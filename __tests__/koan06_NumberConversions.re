open Jest;

open ExpectJs;

describe("Number conversions", () => {
  test("Fron Js.Int to string", () => {
    let integer = 1;
    let str = Js.Int.toString(integer);
    expect(str) |> toEqual("1");
  });
  test("Fron Js.Float to string ", () => {
    let float = 1.5;
    let str = Js.Float.toString(float);
    expect(str) |> toEqual("1.5");
  });
  test("From Int32 to Float", () => {
    let integer: int32 = Int32.of_int(1);
    let float = Int32.to_float(integer);
    expect(float) |> toEqual(1.0);
  });
  test("From string to integer", () => {
    /*
     let parseint: string => int = [%raw {| x => parseInt(x, 10) |}];
     let integer = parseint("1");
     */
    let integer = int_of_string("1");
    expect(integer) |> toEqual(1);
  });
  test("From string to float", () => {
    let float = float_of_string("1.5");
    let floatJs = Js.Float.fromString("3.5");
    expect(float) |> toEqual(1.5);
    expect(floatJs) |> toEqual(3.5);
  });
});

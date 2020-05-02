open Jest;

open Expect;

describe("Regexes", () => {
  test("Regex can be creted with [%bs \"REGEX\"]", () => {
    let result =
      Js.Re.exec_([%bs.re "/world/gi"], "Hello World")
      |> (
        result =>
          switch result {
          | Some(result) => Js.Re.captures(result)[0] |> Js.Nullable.toOption
          | None => None
          }
      )
      |> Js.Option.getWithDefault("");
    expect(result) |> toBe("World");
  });
  test("Regex can be creted with Js.Re.fromString(\"STRING\")", () => {
    let re = Js.Re.fromString("world");
    let result =
      Js.Re.exec_(re, "Helloworld!")
      |> (
        result =>
          switch result {
          | Some(result) => Js.Re.captures(result)[0] |> Js.Nullable.toOption
          | None => None
          }
      )
      |> Js.Option.getWithDefault("");
    expect(result) |> toBe("world");
  });
  test(
    "Regex can be creted with Js.Re.fromStringWithFlags(\"STRING\", \"FLAGS\")",
    () => {
    let re = Js.Re.fromStringWithFlags("world", ~flags="i");
    let result =
      Js.Re.exec_(re, "HELLO WORLD!")
      |> (
        result =>
          switch result {
          | Some(result) => Js.Re.captures(result)[0] |> Js.Nullable.toOption
          | None => None
          }
      )
      |> Js.Option.getWithDefault("");
    expect(result) |> toBe("WORLD");
  });
});
/*
 */

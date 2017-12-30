open Jest;

open Expect;

describe("Regexes", () => {
  test("Regex can be creted with [%bs \"REGEX\"]", () => {
    let result =
      [%bs.re "/world/gi"]
      |> Js.Re.exec("Hello World")
      |> (
        result =>
          switch result {
          | Some(result) => Js.Re.captures(result)[0] |> Js.Nullable.to_opt
          | None => None
          }
      )
      |> Js.Option.getWithDefault("");
    expect(result) |> toBe("World");
  });
  test("Regex can be creted with Js.Re.fromString(\"STRING\")", () => {
    let re = Js.Re.fromString("world");
    let result =
      Js.Re.exec("Helloworld!", re)
      |> (
        result =>
          switch result {
          | Some(result) => Js.Re.captures(result)[0] |> Js.Nullable.to_opt
          | None => None
          }
      )
      |> Js.Option.getWithDefault("");
    expect(result) |> toBe("world");
  });
  test(
    "Regex can be creted with Js.Re.fromStringWithFlags(\"STRING\", \"FLAGS\")",
    () => {
    let re = Js.Re.fromStringWithFlags("world", "i");
    let result =
      Js.Re.exec("HELLO WORLD!", re)
      |> (
        result =>
          switch result {
          | Some(result) => Js.Re.captures(result)[0] |> Js.Nullable.to_opt
          | None => None
          }
      )
      |> Js.Option.getWithDefault("");
    expect(result) |> toBe("WORLD");
  });
});
/*
 */

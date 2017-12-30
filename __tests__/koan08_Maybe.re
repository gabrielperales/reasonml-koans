open Jest;

open ExpectJs;

type optString = option(string);

describe("Maybes/Option", () => {
  test("Option string to string", () => {
    let maybeString = Some("string");
    let str = maybeString |> Js.Option.getWithDefault("any default value");
    expect(str) |> toBe("string");
  });
  test("From Js.Nullable to string", () => {
    let nullableString = Js.Nullable.return("a string");
    let str =
      nullableString
      |> Js.Nullable.to_opt
      |> Js.Option.getWithDefault("any default value");
    expect(str) |> toBe("a string");
  });
});

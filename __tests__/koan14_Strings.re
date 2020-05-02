open Jest;

open ExpectJs;

describe("Strings", () => {
  test("Concat 2 strings", () => {
    let str1 = "Hello, ";
    let str2 = "World!";
    expect(str1 ++ str2) |> toEqual("Hello, World!");
  });
  test("Uppercase a string", () => {
    let str = "Hello, World!";
    expect(String.uppercase_ascii(str)) |> toEqual("HELLO, WORLD!");
  });
  test("Trim a string", () => {
    let str = "   Hello, World!     ";
    expect(String.trim(str)) |> toEqual("Hello, World!");
  });
});

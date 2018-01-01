open Jest;

open ExpectJs;

describe("Logical Operators", () => {
  test("OR operator", () => {
    expect(true || false) |> toBeTruthy;
    expect(false || false) |> toBeFalsy;
    expect(false || true) |> toBeTruthy;
  });
  test("AND operator", () => {
    expect(false && true) |> toBeFalsy;
    expect(false && false) |> toBeFalsy;
    expect(true && true) |> toBeTruthy;
  });
  test("NOT operator", () => {
    expect(! false) |> toBeTruthy;
    expect(! (! false)) |> toBeFalsy;
    expect(! true) |> toBeFalsy;
    expect(! true) |> toBeFalsy;
  });
});
